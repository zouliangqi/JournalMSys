#include "management.h"
#include "eventmanagement.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlError>
#include <QString>
#include <QStringList>
#include <QDate>
#include <fstream>
#include <QApplication>
#include <QThread>

using namespace std;

//登录操作
//返回一个应答消息
EventMessage
LoginManagement::performMessage(const EventMessage &requstMsg)
{
    //请求登录ID
    QString id = requstMsg.getHeadID();
    //暂存密码
    QString usPwd;
    //返回消息体
    QChar retMsg;

    //判断账号ID所属的用户组
    if (/*id.at(0) == REDER*/id.length() == REDER)
    {
        usPwd = readerLogin(requstMsg.getHeadID());
        retMsg = REDER;
    }
    else if (id.at(0) == MANAGER)
    {
        usPwd = managerLogin(requstMsg.getHeadID());
        retMsg = MANAGER;
    }
    else if (id.at(0) == PURCHASER)
    {
        usPwd = purchaserLogin(requstMsg.getHeadID());
        retMsg = PURCHASER;
    }

    //验证账户
    if (usPwd.isEmpty())
        //返回失败信息
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("There is no such user!"));
    else
    {
        if (requstMsg.getMessageBody().toString() == usPwd)
            return EventMessage(myName(),
                                EventManagement::J_ANSWER,
                                retMsg);
        else
            return EventMessage(myName(),
                                EventManagement::J_ERROR,
                                QString("Passward Error,please try again"));
    }
}

//验证读者登录密码
QString LoginManagement::readerLogin(const QString &r_id)
{
    //新建查询
    QSqlQuery query;

    query.exec(QString("select r_pasward "
               "from Reader "
               "where r_id = %1").arg("'" + r_id + "'"));
    //将query指向查询结果
    if (query.next())
        return query.value(0).toString();
    else
        return QString("");
}

//管理员登录密码
QString LoginManagement::managerLogin(const QString &m_id)
{
    //新建查询
    QSqlQuery query;

    query.exec(QString("select m_pasward "
               "from Manager "
               "where m_id = %1").arg("'" + m_id + "'"));

    if (query.next())
        return query.value(0).toString();
    else
        return QString("");
}

//采购员登录
QString LoginManagement::purchaserLogin(const QString &p_id)
{
    //新建查询
    QSqlQuery query;

    query.exec(QString("select g_pasward "
               "from Purchaser "
               "where g_id = %1").arg("'" + p_id + "'"));

    if (query.next())
        return query.value(0).toString();
    else
        return QString("");
}

EventMessage
checkOutManagement::performMessage(const EventMessage &requstMsg)
{        
    switch(requstMsg.getEvent())
    {
    //借书服务
    case EventManagement::J_BORROW :
        return borrowBooks(requstMsg);
    //还书服务
    case EventManagement::J_RETURN :
        return returnBooks(requstMsg);
    //预约服务
    case EventManagement::J_PRESERVATION :
        return preserveBooks(requstMsg);
    //测试服务
    default:
        return EventMessage();
    }

}

EventMessage
checkOutManagement::borrowBooks(const EventMessage &requstMsg)
{
    //检验消息的正确性
    if (requstMsg.getMessageBody().toStringList().size() > 4)
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("系统故障，请联系管理员"));

    //先检测用户是否可以借到更多的书
    if (!canBorrowBooks(requstMsg.getHeadID()))
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("You have borrowed enough books!"));

    //解析消息内容
    QStringList msgBody(requstMsg.getMessageBody().toStringList());

    //查询用户要借的期刊的在馆情况
    QSqlQuery query;
    //解析消息
    QString ISSN = msgBody.at(0);
    int y = msgBody.at(1).toInt();
//    int j = msgBody.at(2).toInt();
    int q = msgBody.at(3).toInt();

    query.exec(QString("select b_id from Book "
                        "where ISSN = '%1' and "
                       "  regist_year = %2 and "
                       "    regist_qi = %3 and "
                       "    b_id not in "
                           "( select b_id "
                           "from R_borrow "
                       "    where p_in_time is null ) and "
                       "    b_id not in "
                       "( select b_id "
                       "from R_preserve )").arg(ISSN)
               .arg(y).arg(q));

    if (!query.isActive())
        QMessageBox::warning(0, "Test",
                             query.lastError().text());

    if (!query.next())
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("We have no more books here"));

    //获取书本ID
    int bookID = query.value(0).toInt();
    //获取借出时间
    QString today = QDate::currentDate().toString(Qt::ISODate);

    //发送消息给管理员
    sendMsgToManager(EventMessage(requstMsg.getHeadID(),
                                  EventManagement::J_BORROW,
                                  QString::number(bookID)));

    EventManagement::BaseEvent flag = managerSayOkay(requstMsg.getHeadID(), bookID);

    QApplication::setOverrideCursor(Qt::WaitCursor);
    while (flag == EventManagement::J_BORROW)
    {
        QThread::sleep(1);
        flag = managerSayOkay(requstMsg.getHeadID(), bookID);
    }
    QApplication::restoreOverrideCursor();

    if (flag == EventManagement::J_ERROR)
        return EventMessage(myName(),
                            flag,
                            QString("The manager refused your request!"));

    //登记借阅信息
    query.exec(QString("insert into R_borrow (r_id, b_id, p_out_time) "
                      "values('%1', %2, '%3')").arg(requstMsg.getHeadID())
               .arg(bookID).arg(today));

    //回应读者，借阅成功
    return EventMessage(myName(),
                        flag,
                        QString("<p>User: %1"
                                "<p>Journal: %2"
                                "<p>Check Out Date: %3").arg(requstMsg.getHeadID())
                        .arg(bookID).arg(today));
}

EventMessage
checkOutManagement::returnBooks(const EventMessage &requstMsg)
{
    //检验消息的正确性
    if (requstMsg.getMessageBody().type() != QMetaType::Int)
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("系统故障，请联系管理员"));

    //此处不需要进行归还期刊的有效性检测，
    //因为这是由查询系统（即数据库）负责的
    //直接解析消息内容即可
    int bookID = requstMsg.getMessageBody().toInt();
    //获取当前日期
    QString today = QDate::currentDate().toString(Qt::ISODate);

    //发送消息给管理员
    sendMsgToManager(EventMessage(requstMsg.getHeadID(),
                                  EventManagement::J_RETURN,
                                  QString::number(bookID)));

    EventManagement::BaseEvent flag = managerSayOkay(requstMsg.getHeadID(), bookID);

   QApplication::setOverrideCursor(Qt::WaitCursor);
   while (flag == EventManagement::J_RETURN)
   {
       QThread::sleep(1);
       flag = managerSayOkay(requstMsg.getHeadID(), bookID);
   }
   QApplication::restoreOverrideCursor();

   if (flag == EventManagement::J_ERROR)
       return EventMessage(myName(),
                           flag,
                           QString("The manager refused your request!"));

   //新建查询
   QSqlQuery query;

    query.exec(QString("update R_borrow "
                       "set p_in_time = '%1' "
                       "where r_id = '%2' and "
                             "b_id = %3").arg(today).arg(requstMsg.getHeadID())
               .arg(bookID));

    //检查结果
    if (!query.isActive())
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QString("系统故障，请联系管理员"));

    //返回结果
    return EventMessage(myName(),
                        flag,
                        QString("<p>User: %1"
                                "<p>Journal: %2"
                                "<p>Check In Date: %3").arg(requstMsg.getHeadID())
                        .arg(bookID).arg(today));
}

EventMessage
checkOutManagement::preserveBooks(const EventMessage &requstMsg)
{
    //检验消息的正确性
//    if (requstMsg.getMessageBody().type() != QMetaType::QString)
//        return EventMessage(myName(),
//                            EventManagement::J_ERROR,
//                            QString("系统故障，请联系管理员"));
    QStringList msgBody = requstMsg.getMessageBody().toStringList();

    //此处不需要进行预约期刊的有效性检测，
    //因为这是由查询系统（即数据库负责的）
    //直接解析消息内容即可
    QString ISSN = msgBody.at(0);
    int y = msgBody.at(1).toInt();
//    int j = msgBody.at(2).toInt();
    int q = msgBody.at(3).toInt();

    //新建查询
    QSqlQuery query;

    query.exec(QString("select b_id "
                       "from Book "
                       "where ISSN = '%1' and "
                           "regist_year = %2 and "
                          " regist_qi = %3 "
                       "and b_id not in "
                       "( select b_id "
                       "from R_preserve )").arg(ISSN).arg(y).arg(q));

    if (!query.isActive())
        QMessageBox::warning(0, "Debug",
                             query.lastError().text());

    //查询有效，说明这个用户已经借过这本期刊
    //故不能在进行预约
//    if (query.next())
//        return EventMessage(myName(),
//                            EventManagement::J_ERROR,
//                            QString("您已拥有该期刊，不能再次预约"));
    if (!query.next())
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            QStringLiteral("Find no book to oreserver."));
    int bookID = query.value(0).toInt();

    query.exec(QString("insert into R_preserve "
                       "values ('%1', %2)").arg(requstMsg.getHeadID())
               .arg(bookID));

    if (!query.isActive())
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            query.lastError().text());

    //返回预约成功消息
    //返回结果
    QString today = QDate::currentDate().toString(Qt::ISODate);
    return EventMessage(myName(),
                        EventManagement::J_ANSWER,
                        QString("<p>User: %1"
                                "<p>Journal: %2"
                                "<p>Preserve Date: %3").arg(requstMsg.getHeadID())
                        .arg(bookID).arg(today));
}

bool checkOutManagement::canBorrowBooks(const QString &userID)
{
    QSqlQuery query;

    query.exec(QString("select COUNT(r_id) from R_borrow where r_id = '%1' and "
                       "p_in_time is null")
               .arg(userID));

    //获取读者当前借书数目
    query.next();
    int times = query.value(0).toInt();

    if (times < MaxBorrowTimes)
        return true;
    else
        return false;
}

void checkOutManagement::sendMsgToManager(const EventMessage &msg)
{
    QSqlQuery query;
    int event = msg.getEvent();
    int bookID = msg.getMessageBody().toInt();

    //送信箱
    query.exec(QString("insert into mailBox "
                       "    values ('%1', %2, %3) ").arg(msg.getHeadID())
               .arg(event).arg(bookID));
}

EventManagement::BaseEvent
checkOutManagement::managerSayOkay(const QString &userID, const int &bookID)
{
//    QSqlQuery query;

//    query.exec(QString("select u_event "
//                       "from mailBox "
//                       "where u_id = '%1' and "
//                       "b_id = %2 ").arg(userID).arg(bookID));

//    query.next();
//    if (query.value(0).toInt() == EventManagement::J_ANSWER)
//        return EventManagement::J_ANSWER;
//    else if (query.value(0).toInt() == EventManagement::J_ERROR)
//        return EventManagement::J_ERROR;
//    else
//        return EventManagement::J_BORROW;
     return EventManagement::J_ANSWER;
}

EventMessage
purchaseManagement::performMessage(const EventMessage &requstMsg)
{
    switch(requstMsg.getEvent())
    {
    //征订服务
    case EventManagement::J_PURCHASE :
        return orderBooks(requstMsg);
    //期刊登记
    case EventManagement::J_REGIST :
        return registBooks(requstMsg);
    //测试服务
    default:
        return EventMessage();
    }
}

EventMessage
purchaseManagement::orderBooks(const EventMessage &requstMsg)
{
    //检验消息的正确性
    if (requstMsg.getMessageBody().toStringList().size() != 4)
        QMessageBox::warning(0, "Failed",
                             "系统错误，请联系管理员!");

    //开始解析消息体
    QStringList msgBody(requstMsg.getMessageBody().toStringList());
    //并向数据库中写入征订报表
    //期刊名字
    QString journalName = msgBody.at(0);
    //当前日期
    QString today = QDate::currentDate().toString(Qt::ISODate);
    //邮发代号
    QString emailCode = msgBody.at(1);
    //征订数量
    int quantity = msgBody.at(2).toInt();
    //征订单价
    float price = msgBody.at(3).toFloat();

    //将报表写入数据库中
    QSqlQuery query;

    query.exec(QString("insert into M_order "
                       "values ('%1', '%2', '%3', '%4', %5, %6)").arg(requstMsg.getHeadID())
                                                                     .arg(journalName)
                                                                     .arg(today)
                                                                     .arg(emailCode)
                                                                     .arg(quantity)
                                                                     .arg(price));
    //检查是否成功写入
    if (!query.isActive())
        return EventMessage(myName(),
                            EventManagement::J_ERROR,
                            query.lastError().text());

    //写入成功
    return EventMessage(myName(),
                        EventManagement::J_ANSWER,
                        QString("<p>User: %1"
                                "<p>Journal: %2"
                                "<p>Order Date: %3").arg(requstMsg.getHeadID())
                        .arg(journalName).arg(today));
}

EventMessage
purchaseManagement::registBooks(const EventMessage &requstMsg)
{
    return EventMessage();
}

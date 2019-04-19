#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "eventmanagement.h"

/*
 *  登录服务模块，
 *  对事务管理模块传送过来的消息
 *  进行解析，按照内容进行登录
 *
 *  接收帧格式如下:
 *  消息头：USER_ID
 *         J_LOGIN
 *  消息体：string(输入的密码)
 *
 *  反馈帧格式如下：
 *  消息头：myName()
 *         J_ANSWER
 *  消息体：string("登录成功")
 *  or
 *  消息头：myName()
 *         J_ERROR
 *  消息体：string(登录的错误信息)
 */
class LoginManagement
{
public:
    //用户表示变量
    //用于判断用户为读者、管理员还是采购员
//    enum Staff { READER = 256/*读者标志*/,
//                 MANAGER/*管理员*/,
//                 PURCHASER/*采购员*/ };

    explicit LoginManagement() {}
    //登录操作
    //返回一个应答消息
    static EventMessage
    performMessage(const EventMessage &requstMsg);

    //返回当前模块的名字
    static QString myName(void) { return QString("Login_M"); }

private:
    //读者登录
    static QString readerLogin(const QString &r_id);
    //管理员登录
    static QString managerLogin(const QString &m_id);
    //采购员登录
    static QString purchaserLogin(const QString &p_id);
};

/*
 *  借阅服务模块
 *  根据消息内容，对读者要求进行反馈
 *
 *  接收帧格式如下：
 *  消息头：USER_ID
 *         J_BORROW*借阅事务*
 *  消息体：stringList {
 *              [1].要借阅期刊的ISSN编号；
 *              [2].期刊的年
 *              [3].期刊的卷
 *              [4].期刊的期 }
 *  or
 *  消息头：USER_ID
 *         J_PRESERVATION*期刊预约事务*
 *  消息体：string(期刊的ISSN)
 *  or
 *  消息头：USER_ID
 *         J_RETURN*归还事务*
 *  消息体：int(期刊的ID)
 *
 *  反馈帧格式如下：
 *  消息头：myName()
 *         J_ANSWER*应答事务*
 *  消息体：string(同意借出或确认归还的的管理员ID)
 *  or
 *  消息头：myName()
 *         J_ANSWER*应答事务*
 *  消息体：string("预约成功")
 *  or
 *  消息头：myName()
 *         J_ERROR*错误类型*
 *  消息体：string(错误日志)
 */
class checkOutManagement
{
public:
    explicit checkOutManagement() {}
    //执行消息
    //返回一个应答消息
    static EventMessage
    performMessage(const EventMessage &requstMsg);

    //返回当前模块的名字
    static QString myName(void) { return QString("CheckOut_M"); }

private:
    //借阅请求
    static EventMessage
    borrowBooks(const EventMessage &requstMsg);
    //还书请求
    static EventMessage
    returnBooks(const EventMessage &requstMsg);
    //预约服务
    static EventMessage
    preserveBooks(const EventMessage &requstMsg);
    //判断用户是否满足借书要求
    static bool canBorrowBooks(const QString &userID);
    //向管理员发送借书请求
    static void sendMsgToManager(const EventMessage &msg);
    static EventManagement::BaseEvent
    managerSayOkay(const QString &userID, const int &bookID);
private:
    static const int MaxBorrowTimes = 5;
};

/*
 *  期刊征订模块
 *  根据管理员提交的征订请求，生成相应的征订报表
 *  根据采购登记的期刊信息，进行期刊的入库登记
 *
 *  消息头：USER_ID
 *         J_PURCHASE*期刊征订事务*
 *  消息体：stringList {
 *              [1].征订期刊名
 *              [2].征订日期
 *              [3].邮发代号
 *              [4].征订数量
 *              [5].单价	 }
 *  or
 *  消息头：USER_ID
 *         J_REGIST*期刊登记*
 *  消息体：stringList {
 *              [1].登记期刊名
 *              [2].期刊国际刊号
 *              [3].期刊的年
 *              [4].期刊的卷
 *              [5].期刊的期
 *              [6].数量 }
 *
 *  反馈帧格式如下：
 *  消息头：myName()
 *         J_ANSWER*应答事务*
 *  消息体：string(”“)
 *  or
 *  消息头：myName()
 *         J_ERROR*错误类型*
 *  消息体：string(错误日志)
 */
class purchaseManagement
{
public:
    explicit purchaseManagement() {}
    //执行消息
    //返回一个应答消息
    static EventMessage
    performMessage(const EventMessage &requstMsg);

    //返回当前模块的名字
    static QString myName(void) { return QString("Purchase_M"); }
private:
    static EventMessage
    orderBooks(const EventMessage &requstMsg);
    static EventMessage
    registBooks(const EventMessage &requstMsg);
};

#endif // MANAGEMENT_H

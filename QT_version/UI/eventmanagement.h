#ifndef EVENTMANAGEMENT_H
#define EVENTMANAGEMENT_H

#include <QString>
#include <QVariant>

//用户表示定义
//用于判断用户为读者、管理员还是采购员
#define REDER 9
#define MANAGER 'M'
#define PURCHASER 'P'

/*
 *
 *  事务管理模块
 *      该模块主要用于对各个用户
 *  组提交的事务请求进行分类打包，
 *  最后由本模块提交给被请求模块，
 *  由该模块进行事务处理
 *
 */
class EventMessage;
class EventManagement
{
public:
    // 事务类型定义
    enum BaseEvent {
        J_TEST/*测试事务*/,
        J_ANSWER/*应答事务*/,
        J_LOGIN/*登录事务*/,
        J_USER_QUERY/*用户信息查询*/,
        J_BOOK_QUERY/*期刊信息查询*/,
        J_KEY_QUERY/*关键字查询*/,
        J_BORROW/*借阅事务*/,
        J_RETURN/*归还事务*/,
        J_PRESERVATION/*期刊预约事务*/,
        J_PURCHASE/*期刊征订事务*/,
        J_REGIST/*期刊登记*/,
        J_ERROR/*错误类型*/
    };
    //期刊类型的定义
    //Lable1分类
    enum Jounral
    {
    FASHIONLE, //时尚休闲
    HEALTHY, //家庭健康
    NEWS, //时政新闻
    LITERATURES, //文摘文学
    ACADEMICS,//学术学报
    };

    //时尚休闲
    enum Fashionle
    {
    FASHION,//时尚
    FILMMUSIC,//影视音乐
    TOUR,//旅游
    };
    //家庭健康
    enum Healthy
    {
    EMOTION,//情感
    HEALTHYCARE,//保健养生
    FOOD,//饮食
    };
    //时政新闻
    enum News
    {
    CURRENTNEWS,//时事新闻
    MILITARY,//军事
    LAWS,//法治
    };
    //文摘文学
    enum Literatures
    {
    ABSTRACT,//文摘
    LITERATURE,//文学
    COMMENT,//文论
    };
    //学术学报
    enum Acadenics
    {
    SCHOOLPAPER,//学校学报
    ECONOMIC,//经济学
    NATURESCIENCE,//自然科学
    SOCIALRESCIENCE,//社会科学
    };

    //二级目录
//    //一般期刊
//    enum Journal_GEN {
//        B_GEN_0
//    };

    explicit EventManagement() {}
    //发送一个消息
    //并且返回一个应答消息
    //消息内容由上一级调用自行解析
    static EventMessage sendMessage(const EventMessage &msg);

//private:
//    // 用于存放当前在线用户的ID
//    QStringList onLineUser;
};


/*
 *  基本事物类
 *  该类借用TCP/IP协议的思想
 *  每一个事物都类似于一个网络中的传输帧
 *  其中包括消息头——即事务的请求者ID和事务类型
 *  以及消息体——即事务的具体内容
 *  消息体由一个QVariant构成
 *  其含义由被请求模块进行解释
 *  本模块不保证消息的正确性
 */
class EventMessage
{
public:
    // 构造函数，默认ID为一个HOST_ID
    // 这个ID可以向所有模块发送，用于测试
    explicit EventMessage(const QString &_ID = "__host_id__",
                          const EventManagement::BaseEvent &_myEvent
                          = EventManagement::J_TEST,
                          const QVariant &_body = QVariant(QString("")));
    //返回ID
    QString getHeadID(void) const { return headID; }
    //返回myEvent
    EventManagement::BaseEvent
    getEvent(void) const { return myEvent; }
    //返回消息体
    QVariant getMessageBody(void) const { return messageBody; }

private:
    // 消息头
    // 请求ID
    QString headID;
    // 消息类型
    EventManagement::BaseEvent myEvent;
    // 消息体
    //QStringList messageBody;
    QVariant messageBody;
};

#endif // EVENTMANAGEMENT_H

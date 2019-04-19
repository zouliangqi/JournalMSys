#include "eventmanagement.h"
#include "management.h"
#include <QMessageBox>

//发送一个消息
//并且返回一个应答消息
EventMessage
EventManagement::sendMessage(const EventMessage &msg)
{    
    EventMessage retMsg;

    switch(msg.getEvent())
    {
    //请求登录模块服务
    case EventManagement::J_LOGIN:
        retMsg = LoginManagement::performMessage(msg);
        break;
    //请求借阅模块服务
    case EventManagement::J_BORROW:
    case EventManagement::J_RETURN:
    case EventManagement::J_PRESERVATION:
        retMsg = checkOutManagement::performMessage(msg);
        break;
    //请求征订模块服务
    case EventManagement::J_PURCHASE:
    case EventManagement::J_REGIST:
        retMsg = purchaseManagement::performMessage(msg);
        break;
    default:
        QMessageBox::information(0, "Test",
                                 QString(msg.getEvent()));
        retMsg = EventMessage();
    }    
    //返回应答消息
    return retMsg;
}

EventMessage::EventMessage(const QString &_ID,
                          const EventManagement::BaseEvent &_myEvent,
                          const QVariant &_body) :
    headID(_ID),
    myEvent(_myEvent),
    messageBody(_body)
{
    /*...........*/
}

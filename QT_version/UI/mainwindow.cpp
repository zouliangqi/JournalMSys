#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "readerwindow.h"
#include "eventmanagement.h"
#include "managerwindow.h"
#include "buyerwindow.h"
#include "mymessagebox.h"
#include <QMessageBox>
#include <QRect>
#include <QPropertyAnimation>
#include <QSqlQuery>

MainWindow::MainWindow(const QString &id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    moveable(false),
    user(id)
{
    ui->setupUi(this);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
    //this->setWindowOpacity(0.95);//透明度
    setWindowIcon(QIcon(QPixmap(":/icons/Books Shelf.png")));
    this->setWindowFlags(Qt::FramelessWindowHint);//去边框
    setMouseTracking(true);

    ui->tabWidget->hide();

    ui->name_Edit->setText(user);
    //ui->key_Edit->setText("123456");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //获取鼠标当前窗口坐标
        dragPos = event->globalPos() - frameGeometry().topLeft();

        //判断鼠标是否位于标题栏内部
        QRect rect = ui->register_menu->frameRect();
        if (rect.contains(event->pos()))
        {
            moveable = true;
        }
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton && moveable)
    {
        move(event->globalPos() - dragPos);
        event->accept();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    moveable = false;
}

void MainWindow::on_exit_bt_clicked()
{
    this->close();
}

void MainWindow::on_login_bt_clicked()
{
    QString usName = ui->name_Edit->text();
    QString usPwd = ui->key_Edit->text();

    if (usName.isEmpty() || usPwd.isEmpty())
    {/*
        QMessageBox::warning(this, "Warning",
                             "user's ID or user's passward can't be empty!");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Warning",
                             QString("user's ID or user's passward can't be empty!"),
                             "OK", "HaHa");

        b->exec();
        return ;
    }

    //发送消息
    EventMessage ret = EventManagement::sendMessage(EventMessage(usName,
                                                                 EventManagement::J_LOGIN,
                                                                 usPwd));
    if (ret.getEvent() == EventManagement::J_ANSWER)
    {
        if (ret.getMessageBody().toInt() == REDER)
        {
            //退出登录窗口

            readerWindow* rw = new readerWindow(usName, 0);
            rw->move(pos());
            rw->show();
            close();
        }
        else if (ret.getMessageBody().toChar() == MANAGER)
        {

            managerWindow* mw = new managerWindow(usName, 0);
            mw->move(pos());
            mw->show();
            close();
        }
        else if (ret.getMessageBody().toChar() == PURCHASER)
        {

            buyerWindow* bw = new buyerWindow(usName, 0);
            bw->move(pos());
            bw->show();
            close();
        }
    }
    else/*
        QMessageBox::warning(this, "Failed",
                             ret.getMessageBody().toString());*/
    {
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Warning",
                             ret.getMessageBody().toString(),
                             "OK", "HaHa");

        b->exec();
    }

}

void MainWindow::on_about_bt_clicked()
{
//    MyMessageBox *b = new MyMessageBox(this);
//    b->setBoxInformation("About",
//                         QString("<h2>Copyright @ 2016 HQC.inc</h2>"
//                                 "<h3>For more information</h3> "
//                                 "<p>Please contact our production manager "
//                                 "<p>Mr.ZH & Ms.ZYY<p>"),
//                         "OK", "HaHa");

//    b->exec();
    ui->tabWidget->setHidden(false);
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_home_bt_clicked()
{
    ui->tabWidget->setHidden(true);    
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->tabWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->tabWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->tabWidget->setCurrentIndex(5);
}

#include "buyerwindow.h"
#include "ui_buyerwindow.h"
#include "mainwindow.h"
#include "eventmanagement.h"
#include "management.h"
#include "dialog.h"
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QTabWidget>
#include <QTreeView>
#include <QTableView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include "dialog.h"
#include "mymessagebox.h"
#include <QDateTime>
#include <QApplication>
#include <QtNetwork>
#include <QTextCodec>
#include <QtWidgets>
#include <QRegExp>

buyerWindow::buyerWindow(const QString &usID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::buyerWindow),
    userID(usID),
    moveable(false),
    registModel(new QSqlTableModel),
    mapper(new QDataWidgetMapper)
{
    ui->setupUi(this);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
    //this->setWindowOpacity(0.95);//透明度
    this->setWindowFlags(Qt::FramelessWindowHint);//去边框
    this->setMouseTracking(true);
    setWindowIcon(QIcon(QPixmap(":/icons/Books Shelf.png")));
    cityManager_.getSupportProvince(std::bind(&buyerWindow::onProvinces,
                                              this, std::placeholders::_1));

    ui->home_green->show();
    ui->borrow_green->hide();
    ui->return_green->hide();
    ui->setting_blue->hide();
    ui->more_blue->hide();

    ui->purchase_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->purchase_view->setShowGrid(false);
    ui->purchase_view->setFrameShape(QFrame::NoFrame);
    ui->purchase_view->verticalHeader()->setVisible(false);
    ui->purchase_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->purchase_view->resizeColumnsToContents();

    getInformation();
    initialPurchaseList();

    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
    ui->time->setText(str.mid(11,5));

    ui->look->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");
    ui->look_2->setStyleSheet(QString("border-image: url(:/face/%1")
                            .arg(look) + ".png)");

    ui->provinces->setCurrentText(province);
    ui->citys->setCurrentText(city);
    ui->name_label->setText(name);
    ui->city_label->setText(city);

    ui->name->setText(name);

    ui->menu_tab->setCurrentIndex(0);
}

buyerWindow::~buyerWindow()
{
    delete ui;
}

void buyerWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //获取鼠标当前窗口坐标
        dragPos = event->globalPos() - frameGeometry().topLeft();

        //判断鼠标是否位于标题栏内部
        QRect rect = ui->buyer_select->frameRect();
        if (rect.contains(event->pos()))
        {
            moveable = true;
        }
        event->accept();
    }
}

void buyerWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton && moveable)
    {
        move(event->globalPos() - dragPos);
        event->accept();
    }
}

void buyerWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    moveable = false;
}

void buyerWindow::on_reader_return_bt_2_clicked()
{
    close();
}

void buyerWindow::on_home_green_bt_clicked()
{
    ui->home_green->show();
    ui->borrow_green->hide();
    ui->return_green->hide();
    ui->setting_blue->hide();
    ui->more_blue->hide();

    ui->menu_tab->setCurrentIndex(0);
}

void buyerWindow::on_borrow_green_bt_clicked()
{
    ui->home_green->hide();
    ui->borrow_green->show();
    ui->return_green->hide();
    ui->setting_blue->hide();
    ui->more_blue->hide();

    ui->menu_tab->setCurrentIndex(1);
}

void buyerWindow::on_return_green_bt_clicked()
{
    ui->home_green->hide();
    ui->borrow_green->hide();
    ui->return_green->show();
    ui->setting_blue->hide();
    ui->more_blue->hide();

    ui->menu_tab->setCurrentIndex(2);
}

void buyerWindow::on_setting_blue_bt_clicked()
{
    ui->home_green->hide();
    ui->borrow_green->hide();
    ui->return_green->hide();
    ui->setting_blue->show();
    ui->more_blue->hide();

    ui->menu_tab->setCurrentIndex(3);

    //初始化设置
    ui->label_32->hide();
    ui->label_28->hide();
    ui->label_35->hide();
    //设置性别
    if (gender == "男")
        ui->label_32->show();
    else if (gender == "女")
        ui->label_28->show();
    else
        ui->label_35->show();

    //设置出生年月
    QString year = birthday.left(4);
    QString month;
    month += birthday[5];
    month += birthday[6];
    QString day = birthday.right(2);

    ui->comboBox_5->setCurrentIndex(2015 - year.toInt());
    ui->comboBox_11->setCurrentIndex(month.toInt() - 1);
    ui->comboBox_12->setCurrentIndex(day.toInt() - 1);

    ui->provinces->setCurrentText(province);
    ui->citys->setCurrentText(city);

    //设置个人喜好
    ui->checkBox_4->setChecked(true);
    ui->checkBox->setChecked(true);
    ui->checkBox_8->setChecked(true);
}

void buyerWindow::on_more_blue_bt_clicked()
{
    ui->home_green->hide();
    ui->borrow_green->hide();
    ui->return_green->hide();
    ui->setting_blue->hide();
    ui->more_blue->show();

    ui->menu_tab->setCurrentIndex(4);
}

void buyerWindow::getInformation()
{
    QSqlQuery query;

    query.exec(QString("select g_name, g_gender,g_province,g_city,g_birth, label  "
                       "from Purchaser "
                       "where g_id = '%1' ").arg(userID));

    if (!query.next())
    {
        QMessageBox::warning(this, "Error",
                             "Unknown errors!");

        qApp->quit();
    }

    name = query.value(0).toString();
    gender = query.value(1).toString();
    birthday = query.value(4).toString();
    province = query.value(2).toString();
    city = query.value(3).toString();
    look = query.value(5).toInt();
}

void buyerWindow::initialPurchaseList()
{
    registModel = new QSqlTableModel;

    registModel->setTable("purchase_view");
    registModel->select();
    ui->purchase_view->setModel(registModel);

    mapper->setModel(registModel);
    mapper->addMapping(ui->lineEdit_8, 0);
    mapper->addMapping(ui->lineEdit_9, 1);
    mapper->addMapping(ui->lineEdit_13, 3);
    mapper->addMapping(ui->lineEdit_14, 4);
    mapper->addMapping(ui->lineEdit_10, 5);
    mapper->toFirst();
}

void buyerWindow::on_reader_return_bt_clicked()
{
    MainWindow* w = new MainWindow(userID, 0);
    w->move(this->pos());
    w->show();
    close();
}

void buyerWindow::on_pushButton_10_clicked()
{
    mapper->toNext();
}

void buyerWindow::on_pushButton_13_clicked()
{
    mapper->toPrevious();
}

void buyerWindow::on_purchase_view_doubleClicked(const QModelIndex &index)
{
    int row = index.row();

    mapper->setCurrentIndex(row);
    ui->menu_tab->setCurrentIndex(1);
}

void buyerWindow::on_pushButton_16_clicked()
{
    QString ISSN = ui->lineEdit_10->text();
    bool ok, ok_2;
    int quantity = ui->lineEdit_12->text().toInt(&ok);
    int q = ui->comboBox_9->currentText().toInt(&ok_2);

    if (!ok)
    {/*
        QMessageBox::warning(this, "Sorry",
                             "Quantities Only allowed numbers");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "Quantities Only allowed numbers",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();
        return ;
    }
    if (!ok_2)
    {/*
        QMessageBox::warning(this, "Sorry",
                             "Please tell me which issue you want to regist");*/
        MyMessageBox *b = new MyMessageBox(this);
        b->setBoxInformation("Sorry",
                             "Please tell me which issue you want to regist",
                             "OK", "HaHa",
                             true,
                             QString(":/resources/warning.png"));
        b->exec();

        return ;
    }
    int y = ui->comboBox_10->currentText().toInt();

    QSqlQuery insert;

    for (int r = 1; r <= quantity; ++r)
        insert.exec(QString("insert into Book (regist_year, regist_qi, ISSN) "
                            "values(%1, %2, '%3')")
                    .arg(y).arg(q).arg(ISSN));
}

void buyerWindow::on_pushButton_3_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("Update",
                         QString("<h3>Current Version: v1.1</h3> "
                                 "<p>You are already at the latest version "),
                         "OK",
                         "HaHa");

    b->exec();
}



void buyerWindow::on_pushButton_9_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("About",
                         QString("<h2>Copyright @ 2016 HQC.inc</h2>"
                                 "<h3>For more information</h3> "
                                 "<p>Please contact our production manager "
                                 "<p>Mr.ZH & Ms.ZYY<p>"),
                         "OK", "HaHa");

    b->exec();
}

void buyerWindow::on_pushButton_5_clicked()
{
    ui->label_32->setHidden(false);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(true);
}

void buyerWindow::on_pushButton_6_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(false);
    ui->label_35->setHidden(true);
}

void buyerWindow::on_pushButton_7_clicked()
{
    ui->label_32->setHidden(true);
    ui->label_28->setHidden(true);
    ui->label_35->setHidden(false);
}

void buyerWindow::on_pushButton_clicked()
{
    QString gender;
    QString birthday;
    QString pro;
    QString cit;
    QSqlQuery query;

    if (!ui->label_32->isHidden())
        gender = "男";
    else if (!ui->label_28->isHidden())
        gender = "女";
    else
        gender = "秘";

    query.exec(QString("update Purchaser "
                       "set g_gender = '%1' "
                       "where g_id = '%2' ").arg(gender).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    birthday += ui->comboBox_5->currentText();
    birthday += "-" + ui->comboBox_11->currentText();
    birthday += "-" + ui->comboBox_12->currentText();

    query.exec(QString("update Purchaser "
                       "set g_birth = '%1' "
                       "where g_id = '%2' ").arg(birthday).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    pro = ui->provinces->currentText();
    cit = ui->citys->currentText();
    query.exec(QString("update Purchaser "
                       "set g_province = '%1' "
                       "where g_id = '%2' ").arg(pro).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    query.exec(QString("update Purchaser "
                       "set g_city = '%1' "
                       "where g_id = '%2' ").arg(cit).arg(userID));
    if (!query.isActive())
        QMessageBox::warning(this, "Failed",
                             query.lastError().text());

    getInformation();
}

//===============================

void buyerWindow::onProvinces(const QStringList &strList)
{
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        ui->provinces->addItem(*citer);
    }
    ui->provinces->setCurrentIndex(0);
    cityManager_.getSupportCity(ui->provinces->currentText(), std::bind(&buyerWindow::onCitys, this, std::placeholders::_1));
}

void buyerWindow::onCitys(const QStringList &strList)
{
    ui->citys->clear();
    QStringList::const_iterator citer = strList.constBegin();
    for ( ; citer != strList.constEnd(); ++citer) {
        QString str = citer->left(citer->indexOf(QChar(' ')));
        ui->citys->addItem(str);
    }
}


void buyerWindow::onWeather(const QStringList &strList)
{
    if (strList.count() < 23) {
        return;
    }

    QString strImage(":/weather/");
//    QString str = strList[8];
    QString str1, str2, str3;

    str1 = strList[8];
    str1.remove(QRegExp("[.][g][i][f]"));
    str1 += ".png";
    str2 = strList[9];
    str2.remove(QRegExp("[.][g][i][f]"));
    str2 += ".png";
    str3 = strList[6];

    ui->labelImage1->setPixmap(QPixmap(strImage + str1));
    ui->labelImage2->setPixmap(QPixmap(strImage + str2));
    ui->labelTemperature->setText(strList[5]);
    ui->weather->setText(str3.mid(6));
    ui->labelWind->setText(strList[7]);

}




void buyerWindow::on_provinces_currentIndexChanged(const QString &provinceName)
{
    //showClear();
    cityManager_.getSupportCity(provinceName, std::bind(&buyerWindow::onCitys, this, std::placeholders::_1));
}

void buyerWindow::on_citys_currentIndexChanged(const QString &)
{
    //showClear();
}

void buyerWindow::showClear()
{
    ui->labelImage1->clear();
    ui->labelImage2->clear();
    ui->labelTemperature->clear();
    ui->weather->clear();
    ui->labelWind->clear();

}

void buyerWindow::on_findButton_clicked()
{
    cityManager_.getWeatherbyCityName(ui->citys->currentText(), std::bind(&buyerWindow::onWeather, this, std::placeholders::_1));
}
//==============================================

void buyerWindow::on_look_bt_clicked()
{
    QString label;
    Dialog *d = new Dialog(this);



    d->exec();
    label = d->getlabel();

    ui->look->setStyleSheet(QString("border-image: url(:/face/%1)")
                            .arg(label));
    ui->look_2->setStyleSheet(QString("border-image: url(:/face/%1)")
                              .arg(label));
    label.remove(QRegExp("[.][p][n][g]"));

    look = label.toInt();
    QSqlQuery query;

    query.exec(QString("update Reader "
                       "set label = %1 "
                       "where r_id = '%2'").arg(look)
               .arg(userID));

    getInformation();
}

void buyerWindow::on_pushButton_8_clicked()
{
    MyMessageBox *b = new MyMessageBox(this);
    b->setBoxInformation("About",
                         QString("<h2>User Agreement</h2>"
                                 "<p>Actually, no user agreement "
                                 "<p>Do what you like!<p>"),
                         "OK", "HaHa");

    b->exec();
}

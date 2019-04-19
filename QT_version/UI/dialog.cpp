#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),
    label("")
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);//去边框
    this->move((parent->width() - this->width()), (parent->height() - this->height()));
}

QString Dialog::getlabel()
{
    return label;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_exit_bt_clicked()
{
    this->close();
}

void Dialog::on_pushButton1_clicked()
{
    label = "1.png";
    accept();
}

void Dialog::on_pushButton2_clicked()
{
    label = "2.png";
    accept();
}

void Dialog::on_pushButton3_clicked()
{
    label = "3.png";
    accept();
}

void Dialog::on_pushButton4_clicked()
{
    label = "4.png";
    accept();
}

void Dialog::on_pushButton5_clicked()
{
    label = "5.png";
    accept();
}

void Dialog::on_pushButton6_clicked()
{
    label = "6.png";
    accept();
}

void Dialog::on_pushButton7_clicked()
{
    label = "7.png";
    accept();
}

void Dialog::on_pushButton8_clicked()
{
    label = "8.png";
    accept();
}

void Dialog::on_pushButton9_clicked()
{
    label = "9.png";
    accept();
}

void Dialog::on_pushButton10_clicked()
{
    label = "10.png";
    accept();
}

void Dialog::on_pushButton11_clicked()
{
    label = "11.png";
    accept();
}

void Dialog::on_pushButton12_clicked()
{
    label = "12.png";
    accept();
}

void Dialog::on_pushButton13_clicked()
{
    label = "13.png";
    accept();
}

void Dialog::on_pushButton14_clicked()
{
    label = "14.png";
    accept();
}

void Dialog::on_pushButton15_clicked()
{
    label = "15.png";
    accept();
}

void Dialog::on_pushButton16_clicked()
{
    label = "16.png";
    accept();
}

void Dialog::on_pushButton17_clicked()
{
    label = "17.png";
    accept();
}

void Dialog::on_pushButton18_clicked()
{
    label = "18.png";
    accept();
}

void Dialog::on_pushButton19_clicked()
{
    label = "19.png";
    accept();
}

void Dialog::on_pushButton20_clicked()
{
    label = "20.png";
    accept();
}

void Dialog::on_pushButton21_clicked()
{
    label = "21.png";
    accept();
}

void Dialog::on_pushButton22_clicked()
{
    label = "22.png";
    accept();
}

void Dialog::on_pushButton23_clicked()
{
    label = "23.png";
    accept();
}

void Dialog::on_pushButton24_clicked()
{
    label = "24.png";
    accept();
}

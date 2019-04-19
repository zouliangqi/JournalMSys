#ifndef READERWINDOW_H
#define READERWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include <QMouseEvent>
#include <QPoint>
#include "citymanager.h"

namespace Ui {
class readerWindow;
}

class QNetworkAccessManager;
class QNetworkReply;

class readerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit readerWindow(const QString &usID, QWidget *parent = 0);
    ~readerWindow();

    void onProvinces(const QStringList &strList);
    void onCitys(const QStringList &strList);
    void onWeather(const QStringList &strList);

private slots:
    void on_home_blue_bt_clicked();

    void on_search_blue_bt_clicked();

    void on_borrow_blue_bt_clicked();

    void on_return_blue_bt_clicked();

    void on_love_blue_bt_clicked();

    void on_reader_return_bt_clicked();

    void on_pushButton_8_clicked();

    void on_reader_return_bt_2_clicked();

    void on_journal_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_setting_blue_bt_clicked();

    void on_more_blue_bt_clicked();

    void on_borrow_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_provinces_currentIndexChanged(const QString &provinceName);

    void on_citys_currentIndexChanged(const QString &arg1);

    void showClear();

    void on_findButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_look_bt_clicked();

    void on_pushButton_2_clicked();

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    //设置树形目录
    void setTreeContent(void);
    //获取用户基本信息
    void getInformation(void);
    //刷新借阅表格
    void refreshBorrowTable(void);

    QPoint dragPos;

    Ui::readerWindow *ui;
    //用户ID
    QString userID;
    bool moveable;
    //设置数据映射
    QDataWidgetMapper *mapper;
    //用户姓名
    QString name;
    //性别
    QString gender;
    //出生年月
    QString birthday;
    //籍贯
    //省
    QString province;
    //市
    QString city;
    //头像
    int look;

    CityManager cityManager_;

};

#endif // READERWINDOW_H

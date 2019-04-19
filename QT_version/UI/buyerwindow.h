#ifndef BUYERWINDOW_H
#define BUYERWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include <QMouseEvent>
#include <QPoint>
#include "citymanager.h"

namespace Ui {
class buyerWindow;
}


class QNetworkAccessManager;
class QNetworkReply;
class buyerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit buyerWindow(const QString &usID, QWidget *parent = 0);
    ~buyerWindow();

    void onProvinces(const QStringList &strList);
    void onCitys(const QStringList &strList);
    void onWeather(const QStringList &strList);

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_reader_return_bt_2_clicked();

    void on_home_green_bt_clicked();

    void on_borrow_green_bt_clicked();

    void on_return_green_bt_clicked();

    void on_setting_blue_bt_clicked();

    void on_more_blue_bt_clicked();

    void on_reader_return_bt_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_purchase_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_16_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_look_bt_clicked();

    void on_provinces_currentIndexChanged(const QString &provinceName);

    void on_citys_currentIndexChanged(const QString &arg1);

    void showClear();

    void on_findButton_clicked();
    void on_pushButton_8_clicked();

private:
    //获取用户基本信息
    void getInformation(void);
    //初始化征订报表
    void initialPurchaseList(void);

    Ui::buyerWindow *ui;
    //用户ID
    QString userID;
    //征订报表模型
    QSqlTableModel *registModel;
    //报表映射模型
    QDataWidgetMapper *mapper;

    bool moveable;
    QPoint dragPos;
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

    int look;
    CityManager cityManager_;
};

#endif // BUYERWINDOW_H

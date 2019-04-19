#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include <QMouseEvent>
#include <QPoint>
#include "citymanager.h"

namespace Ui {
class managerWindow;
}

class QNetworkAccessManager;
class QNetworkReply;

class managerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit managerWindow(const QString &usID, QWidget *parent = 0);
    ~managerWindow();
    void onProvinces(const QStringList &strList);
    void onCitys(const QStringList &strList);
    void onWeather(const QStringList &strList);

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_reader_red_bt_clicked();

    void on_search_red_bt_clicked();

    void on_borrow_red_bt_clicked();

    void on_return_red_bt_clicked();

    void on_love_red_bt_clicked();

    void on_manager_return_bt_clicked();

    void on_manager_quit_bt_clicked();

    void on_setting_red_bt_clicked();

    void on_journal_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_reader_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_mail_view_doubleClicked(const QModelIndex &index);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_lineEdit_7_textChanged(const QString &arg1);

    void on_pushButton_16_clicked();

    void on_comboBox_15_currentIndexChanged(int index);

    void on_pushButton_9_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_home_red_bt_clicked();

    void on_provinces_currentIndexChanged(const QString &provinceName);

    void on_citys_currentIndexChanged(const QString &arg1);

    void showClear();

    void on_findButton_clicked();

    void on_look_bt_clicked();

    void on_pushButton_8_clicked();

private:
    //设置树形目录
    void setTreeContent(void);
    //获取用户基本信息
    void getInformation(void);
    //建立读者树
    void setReaderTree(void);
    //设置管理员邮箱
    void initialMailBox(void);


    Ui::managerWindow *ui;
    //用户ID
    QString userID;

    bool moveable;
    QPoint dragPos;
    //设置数据映射
    QDataWidgetMapper *mapper;
    //读者模型
    QSqlTableModel *readerModel;
    //管理员邮箱
    QSqlTableModel *borrowMail;
    QSqlTableModel *returnMail;
    //判断当前访问的邮箱
    int mail;
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

#endif // MANAGERWINDOW_H

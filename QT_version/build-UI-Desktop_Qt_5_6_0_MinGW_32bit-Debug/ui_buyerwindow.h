/********************************************************************************
** Form generated from reading UI file 'buyerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYERWINDOW_H
#define UI_BUYERWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyerWindow
{
public:
    QWidget *centralwidget;
    QWidget *buyer_widget;
    QLabel *buyer_bg;
    QLabel *buyer_select;
    QLabel *borrow_green;
    QLabel *return_green;
    QLabel *face_label;
    QLabel *name;
    QLabel *home_green;
    QLabel *buyer_home_icon;
    QLabel *buyer_home;
    QLabel *buyer_borrow_icon;
    QLabel *buyer_borrow;
    QLabel *buyer_return;
    QLabel *buyer_return_icon;
    QPushButton *home_green_bt;
    QPushButton *borrow_green_bt;
    QPushButton *return_green_bt;
    QLabel *reader_setting_icon;
    QPushButton *setting_blue_bt;
    QLabel *setting_blue;
    QLabel *reader_setting;
    QLabel *reader_more_icon;
    QLabel *more_blue;
    QPushButton *more_blue_bt;
    QLabel *reader_more;
    QPushButton *reader_return_bt_2;
    QTabWidget *menu_tab;
    QWidget *browser_tab;
    QCalendarWidget *calendarWidget;
    QLabel *time;
    QLabel *city_label;
    QLabel *labelImage1;
    QLabel *label_53;
    QLabel *labelTemperature;
    QLabel *name_label;
    QLabel *loc;
    QLabel *label_52;
    QLabel *look_2;
    QLabel *weather;
    QPushButton *findButton;
    QLabel *label_54;
    QLabel *labelImage2;
    QLabel *weatherback;
    QLabel *labelWind;
    QLabel *label_65;
    QWidget *regist_tab;
    QLabel *label_82;
    QLineEdit *lineEdit_10;
    QLabel *label_91;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_62;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_16;
    QLabel *label_90;
    QLineEdit *lineEdit_8;
    QLabel *borroe_detail_view_2;
    QLabel *label_92;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_81;
    QLineEdit *lineEdit_14;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_72;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_10;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_64;
    QLineEdit *lineEdit_13;
    QLabel *label_83;
    QLineEdit *lineEdit_12;
    QComboBox *comboBox_9;
    QLabel *label_18;
    QComboBox *comboBox_10;
    QComboBox *comboBox_6;
    QWidget *purchase_tab;
    QLabel *label_56;
    QTableView *purchase_view;
    QWidget *setting_tab;
    QComboBox *comboBox_11;
    QLabel *label_32;
    QCheckBox *checkBox_6;
    QLabel *label_25;
    QLabel *label_23;
    QLabel *label_27;
    QLabel *label_34;
    QPushButton *pushButton_5;
    QCheckBox *checkBox_8;
    QComboBox *comboBox_4;
    QComboBox *comboBox_12;
    QLabel *label_35;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_7;
    QCheckBox *checkBox;
    QLabel *label_24;
    QLabel *label_31;
    QPushButton *pushButton;
    QLabel *label_30;
    QLabel *label_33;
    QLabel *label_26;
    QPushButton *pushButton_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QLabel *label_28;
    QComboBox *comboBox_5;
    QLabel *label_29;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_7;
    QComboBox *citys;
    QComboBox *provinces;
    QWidget *more_tab;
    QLabel *copyright;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QLabel *system_name;
    QPushButton *pushButton_8;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *system_name_2;
    QPushButton *reader_return_bt;
    QPushButton *look_bt;
    QLabel *look;

    void setupUi(QMainWindow *buyerWindow)
    {
        if (buyerWindow->objectName().isEmpty())
            buyerWindow->setObjectName(QStringLiteral("buyerWindow"));
        buyerWindow->resize(1024, 600);
        centralwidget = new QWidget(buyerWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        buyer_widget = new QWidget(centralwidget);
        buyer_widget->setObjectName(QStringLiteral("buyer_widget"));
        buyer_widget->setGeometry(QRect(0, 0, 1024, 600));
        buyer_bg = new QLabel(buyer_widget);
        buyer_bg->setObjectName(QStringLiteral("buyer_bg"));
        buyer_bg->setGeometry(QRect(0, 0, 1024, 600));
        buyer_bg->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/5.png);"));
        buyer_select = new QLabel(buyer_widget);
        buyer_select->setObjectName(QStringLiteral("buyer_select"));
        buyer_select->setGeometry(QRect(0, 0, 180, 600));
        buyer_select->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/black.png);"));
        borrow_green = new QLabel(buyer_widget);
        borrow_green->setObjectName(QStringLiteral("borrow_green"));
        borrow_green->setGeometry(QRect(-5, 205, 200, 50));
        borrow_green->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/green.png);"));
        return_green = new QLabel(buyer_widget);
        return_green->setObjectName(QStringLiteral("return_green"));
        return_green->setGeometry(QRect(-5, 255, 200, 50));
        return_green->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/green.png);"));
        face_label = new QLabel(buyer_widget);
        face_label->setObjectName(QStringLiteral("face_label"));
        face_label->setGeometry(QRect(20, 20, 141, 61));
        face_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/face/face.png);"));
        name = new QLabel(buyer_widget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(90, 32, 66, 32));
        name->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(0, 0, 0, 150);\n"
"font: 600 14pt \"Century Gothic\";"));
        home_green = new QLabel(buyer_widget);
        home_green->setObjectName(QStringLiteral("home_green"));
        home_green->setGeometry(QRect(-5, 155, 200, 50));
        home_green->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/green.png);"));
        buyer_home_icon = new QLabel(buyer_widget);
        buyer_home_icon->setObjectName(QStringLiteral("buyer_home_icon"));
        buyer_home_icon->setGeometry(QRect(20, 170, 20, 20));
        buyer_home_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/User Profile.png);"));
        buyer_home = new QLabel(buyer_widget);
        buyer_home->setObjectName(QStringLiteral("buyer_home"));
        buyer_home->setGeometry(QRect(55, 170, 111, 20));
        buyer_home->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 200);\n"
"font: 75 10pt \"Century Gothic\";"));
        buyer_borrow_icon = new QLabel(buyer_widget);
        buyer_borrow_icon->setObjectName(QStringLiteral("buyer_borrow_icon"));
        buyer_borrow_icon->setGeometry(QRect(20, 220, 20, 20));
        buyer_borrow_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Bookmark.png);"));
        buyer_borrow = new QLabel(buyer_widget);
        buyer_borrow->setObjectName(QStringLiteral("buyer_borrow"));
        buyer_borrow->setGeometry(QRect(55, 220, 101, 20));
        buyer_borrow->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 200);\n"
"font: 75 10pt \"Century Gothic\";"));
        buyer_return = new QLabel(buyer_widget);
        buyer_return->setObjectName(QStringLiteral("buyer_return"));
        buyer_return->setGeometry(QRect(55, 270, 101, 20));
        buyer_return->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 200);\n"
"font: 75 10pt \"Century Gothic\";"));
        buyer_return_icon = new QLabel(buyer_widget);
        buyer_return_icon->setObjectName(QStringLiteral("buyer_return_icon"));
        buyer_return_icon->setGeometry(QRect(20, 270, 20, 20));
        buyer_return_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Bookmark (alt).png);"));
        home_green_bt = new QPushButton(buyer_widget);
        home_green_bt->setObjectName(QStringLiteral("home_green_bt"));
        home_green_bt->setGeometry(QRect(-5, 155, 180, 50));
        home_green_bt->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"	background-color: rgba(89, 166, 71, 64);\n"
"	border-radius: 0px;\n"
"}"));
        home_green_bt->setFlat(true);
        borrow_green_bt = new QPushButton(buyer_widget);
        borrow_green_bt->setObjectName(QStringLiteral("borrow_green_bt"));
        borrow_green_bt->setGeometry(QRect(-5, 205, 180, 50));
        borrow_green_bt->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"	background-color: rgba(89, 166, 71, 64);\n"
"	border-radius: 0px;\n"
"}"));
        borrow_green_bt->setFlat(true);
        return_green_bt = new QPushButton(buyer_widget);
        return_green_bt->setObjectName(QStringLiteral("return_green_bt"));
        return_green_bt->setGeometry(QRect(-5, 255, 180, 50));
        return_green_bt->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"	background-color: rgba(89, 166, 71, 64);\n"
"	border-radius: 0px;\n"
"}"));
        return_green_bt->setFlat(true);
        reader_setting_icon = new QLabel(buyer_widget);
        reader_setting_icon->setObjectName(QStringLiteral("reader_setting_icon"));
        reader_setting_icon->setGeometry(QRect(20, 320, 20, 20));
        reader_setting_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Setting.png);"));
        setting_blue_bt = new QPushButton(buyer_widget);
        setting_blue_bt->setObjectName(QStringLiteral("setting_blue_bt"));
        setting_blue_bt->setGeometry(QRect(-5, 305, 180, 50));
        setting_blue_bt->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"	background-color: rgba(89, 166, 71, 64);\n"
"	border-radius: 0px;\n"
"}"));
        setting_blue_bt->setFlat(true);
        setting_blue = new QLabel(buyer_widget);
        setting_blue->setObjectName(QStringLiteral("setting_blue"));
        setting_blue->setGeometry(QRect(-5, 305, 200, 50));
        setting_blue->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/green.png);"));
        reader_setting = new QLabel(buyer_widget);
        reader_setting->setObjectName(QStringLiteral("reader_setting"));
        reader_setting->setGeometry(QRect(55, 320, 101, 20));
        reader_setting->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 200);\n"
"font: 75 10pt \"Century Gothic\";"));
        reader_more_icon = new QLabel(buyer_widget);
        reader_more_icon->setObjectName(QStringLiteral("reader_more_icon"));
        reader_more_icon->setGeometry(QRect(20, 370, 20, 20));
        reader_more_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Grid.png);"));
        more_blue = new QLabel(buyer_widget);
        more_blue->setObjectName(QStringLiteral("more_blue"));
        more_blue->setGeometry(QRect(-5, 353, 200, 50));
        more_blue->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/green.png);"));
        more_blue_bt = new QPushButton(buyer_widget);
        more_blue_bt->setObjectName(QStringLiteral("more_blue_bt"));
        more_blue_bt->setGeometry(QRect(-5, 353, 180, 50));
        more_blue_bt->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"	background-color: rgba(89, 166, 71, 64);\n"
"	border-radius: 0px;\n"
"}"));
        more_blue_bt->setFlat(true);
        reader_more = new QLabel(buyer_widget);
        reader_more->setObjectName(QStringLiteral("reader_more"));
        reader_more->setGeometry(QRect(55, 370, 101, 20));
        reader_more->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 200);\n"
"font: 75 10pt \"Century Gothic\";"));
        reader_return_bt_2 = new QPushButton(buyer_widget);
        reader_return_bt_2->setObjectName(QStringLiteral("reader_return_bt_2"));
        reader_return_bt_2->setGeometry(QRect(110, 540, 20, 20));
        reader_return_bt_2->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Power.png);\n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"border-image: url(:/icons/Power2.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"border-image: url(:/icons/Power3.png);\n"
"}"));
        reader_return_bt_2->setFlat(true);
        menu_tab = new QTabWidget(buyer_widget);
        menu_tab->setObjectName(QStringLiteral("menu_tab"));
        menu_tab->setGeometry(QRect(180, -40, 851, 641));
        menu_tab->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"	/*border:none;\n"
"	border-image: url(:/small_unit/black Header60.png);*/\n"
"	border-top:0px solid white;\n"
"	background:  transparent;\n"
"}\n"
"QTabWidget::tab-bar{\n"
"    alignment:left;\n"
"	/*height:0px;*/\n"
"}\n"
"QTabBar::tab{\n"
"	background:transparent;\n"
"	color:white;\n"
"	min-width:30ex;\n"
"	min-height:10ex;\n"
"}\n"
"QTabBar::tab:hover{\n"
"	background:rgb(255, 255, 255, 100);\n"
"}\n"
"QTabBar::tab:selected{\n"
"	border-color: white;\n"
"	background:white;\n"
"	color:green;\n"
"}"));
        browser_tab = new QWidget();
        browser_tab->setObjectName(QStringLiteral("browser_tab"));
        calendarWidget = new QCalendarWidget(browser_tab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(567, 380, 248, 197));
        calendarWidget->setStyleSheet(QLatin1String("QCalendarWidget QWidget \n"
"{\n"
"font: 9pt \"Century Gothic\";\n"
"selection-background-color: rgb(110, 198, 224);\n"
"	alternate-background-color: rgb(255, 255, 255);\n"
"	selection-color: rgb(0, 85, 0);\n"
"}"));
        calendarWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        time = new QLabel(browser_tab);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(397, 390, 91, 41));
        time->setStyleSheet(QLatin1String("font: 75 20pt \"Century Gothic\";\n"
"color: rgb(50, 149, 208);"));
        city_label = new QLabel(browser_tab);
        city_label->setObjectName(QStringLiteral("city_label"));
        city_label->setGeometry(QRect(247, 280, 101, 31));
        city_label->setStyleSheet(QLatin1String("font: 75 20pt \"Century Gothic\";\n"
"color: rgb(190, 190, 190);"));
        labelImage1 = new QLabel(browser_tab);
        labelImage1->setObjectName(QStringLiteral("labelImage1"));
        labelImage1->setGeometry(QRect(87, 410, 40, 40));
        labelImage1->setStyleSheet(QStringLiteral(""));
        label_53 = new QLabel(browser_tab);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(537, 40, 271, 191));
        label_53->setStyleSheet(QLatin1String("border-image: url(:/images/a.png);\n"
"border-radius:9px;"));
        labelTemperature = new QLabel(browser_tab);
        labelTemperature->setObjectName(QStringLiteral("labelTemperature"));
        labelTemperature->setGeometry(QRect(87, 490, 181, 41));
        labelTemperature->setStyleSheet(QLatin1String("font: 75 20pt \"Century Gothic\";\n"
"color: rgb(50, 149, 208);"));
        name_label = new QLabel(browser_tab);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setGeometry(QRect(187, 220, 171, 41));
        name_label->setStyleSheet(QLatin1String("font: 75 20pt \"Century Gothic\";\n"
"color: rgb(190, 190, 190);"));
        name_label->setAlignment(Qt::AlignCenter);
        loc = new QLabel(browser_tab);
        loc->setObjectName(QStringLiteral("loc"));
        loc->setGeometry(QRect(207, 280, 22, 30));
        loc->setStyleSheet(QStringLiteral("border-image: url(:/icons/loc.png);"));
        label_52 = new QLabel(browser_tab);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(37, 30, 468, 315));
        label_52->setStyleSheet(QLatin1String("border-image: url(:/images/Content.png);\n"
"border-radius:9px;"));
        look_2 = new QLabel(browser_tab);
        look_2->setObjectName(QStringLiteral("look_2"));
        look_2->setGeometry(QRect(199, 67, 144, 144));
        look_2->setStyleSheet(QStringLiteral("border-image: url(:/face/1.png);"));
        weather = new QLabel(browser_tab);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setGeometry(QRect(77, 460, 131, 31));
        weather->setStyleSheet(QLatin1String("font: 75 12pt \"Century Gothic\";\n"
"color: rgb(50, 149, 208);"));
        weather->setAlignment(Qt::AlignCenter);
        findButton = new QPushButton(browser_tab);
        findButton->setObjectName(QStringLiteral("findButton"));
        findButton->setGeometry(QRect(467, 546, 20, 20));
        findButton->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/fresh.png);\n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	border-image: url(:/icons/Shuffle.png);\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"border-image: url(:/icons/fresh.png);\n"
"}"));
        findButton->setFlat(true);
        label_54 = new QLabel(browser_tab);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(547, 230, 141, 111));
        label_54->setStyleSheet(QStringLiteral("border-image: url(:/images/p1.png);"));
        labelImage2 = new QLabel(browser_tab);
        labelImage2->setObjectName(QStringLiteral("labelImage2"));
        labelImage2->setGeometry(QRect(157, 410, 40, 40));
        labelImage2->setStyleSheet(QStringLiteral(""));
        weatherback = new QLabel(browser_tab);
        weatherback->setObjectName(QStringLiteral("weatherback"));
        weatherback->setGeometry(QRect(47, 385, 451, 191));
        weatherback->setStyleSheet(QStringLiteral("border-image: url(:/images/weatherback.png);"));
        labelWind = new QLabel(browser_tab);
        labelWind->setObjectName(QStringLiteral("labelWind"));
        labelWind->setGeometry(QRect(47, 535, 451, 41));
        labelWind->setStyleSheet(QLatin1String("font: 75 12pt \"Century Gothic\";\n"
"color: rgb(50, 127, 202);"));
        labelWind->setAlignment(Qt::AlignCenter);
        label_65 = new QLabel(browser_tab);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(710, 250, 101, 101));
        label_65->setStyleSheet(QStringLiteral("border-image: url(:/images/China.png);"));
        menu_tab->addTab(browser_tab, QString());
        weatherback->raise();
        labelWind->raise();
        label_52->raise();
        calendarWidget->raise();
        time->raise();
        city_label->raise();
        labelImage1->raise();
        label_53->raise();
        labelTemperature->raise();
        name_label->raise();
        loc->raise();
        look_2->raise();
        weather->raise();
        findButton->raise();
        label_54->raise();
        labelImage2->raise();
        label_65->raise();
        regist_tab = new QWidget();
        regist_tab->setObjectName(QStringLiteral("regist_tab"));
        label_82 = new QLabel(regist_tab);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(422, 322, 102, 39));
        label_82->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_10 = new QLineEdit(regist_tab);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(520, 330, 121, 23));
        lineEdit_10->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_10->setFrame(false);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);
        label_91 = new QLabel(regist_tab);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(140, 394, 208, 50));
        label_91->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));
        label_91->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(regist_tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 160, 301, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_62 = new QLabel(layoutWidget);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_62);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_9->setFrame(false);
        lineEdit_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_9->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_9);

        pushButton_16 = new QPushButton(regist_tab);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(620, 510, 101, 41));
        pushButton_16->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"	font: 14pt \"Century Gothic\";\n"
"	background-color: rgb(190, 127, 0);\n"
"    color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    background-color: rgb(255, 170, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	\n"
"	background-color: rgba(255, 170, 0, 150);\n"
"}"));
        pushButton_16->setFlat(true);
        label_90 = new QLabel(regist_tab);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(79, 30, 671, 41));
        label_90->setStyleSheet(QLatin1String("background-color: rgba(255, 170, 0,60%);\n"
"font: 14pt \"Century Gothic\";"));
        label_90->setAlignment(Qt::AlignCenter);
        lineEdit_8 = new QLineEdit(regist_tab);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(140, 450, 208, 23));
        lineEdit_8->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_8->setFrame(false);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);
        borroe_detail_view_2 = new QLabel(regist_tab);
        borroe_detail_view_2->setObjectName(QStringLiteral("borroe_detail_view_2"));
        borroe_detail_view_2->setGeometry(QRect(80, 69, 671, 511));
        borroe_detail_view_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/black Header40.png);"));
        label_92 = new QLabel(regist_tab);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(140, 90, 211, 301));
        label_92->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 150);\n"
"border-image: url(:/images/nocover.png);"));
        label_92->setAlignment(Qt::AlignCenter);
        layoutWidget_4 = new QWidget(regist_tab);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(420, 280, 229, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_81 = new QLabel(layoutWidget_4);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_81);

        lineEdit_14 = new QLineEdit(layoutWidget_4);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_14->setFrame(false);
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_14);

        layoutWidget_2 = new QWidget(regist_tab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(420, 100, 229, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_72 = new QLabel(layoutWidget_2);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_72);

        lineEdit_11 = new QLineEdit(layoutWidget_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_11->setFrame(false);
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_11);

        pushButton_13 = new QPushButton(regist_tab);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(190, 500, 30, 30));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"    border-image: url(:/icons/Previous.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/Previous2.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/Previous3.png);\n"
"}"));
        pushButton_13->setFlat(true);
        pushButton_10 = new QPushButton(regist_tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(270, 500, 30, 30));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"    border-image: url(:/icons/Next.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/Next2.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/Next3.png);\n"
"}"));
        pushButton_10->setFlat(true);
        layoutWidget1 = new QWidget(regist_tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(420, 200, 231, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_64 = new QLabel(layoutWidget1);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_64);

        lineEdit_13 = new QLineEdit(layoutWidget1);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_13->setFrame(false);
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_13);

        lineEdit_13->raise();
        label_64->raise();
        label_83 = new QLabel(regist_tab);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(412, 460, 102, 39));
        label_83->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(regist_tab);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(530, 470, 121, 23));
        lineEdit_12->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
""));
        lineEdit_12->setFrame(false);
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(false);
        comboBox_9 = new QComboBox(regist_tab);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        comboBox_9->setGeometry(QRect(590, 410, 50, 41));
        comboBox_9->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 10pt \"Century Gothic\";color: rgba(255, 255, 255, 200);border-image: url(:/small_unit/black Header30.png);}\n"
"QComboBox{background:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/Arrow);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgb(16, 56, 16);\n"
"      selection-background-color:rgba(255, 255, 255, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrol"
                        "lBar::add-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        comboBox_9->setFrame(true);
        label_18 = new QLabel(regist_tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(420, 360, 221, 50));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_18->setFont(font);
        label_18->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 200);\n"
"font: 15pt \"Century Gothic\";"));
        label_18->setAlignment(Qt::AlignCenter);
        comboBox_10 = new QComboBox(regist_tab);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(420, 410, 50, 41));
        comboBox_10->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 10pt \"Century Gothic\";color: rgba(255, 255, 255, 200);border-image: url(:/small_unit/black Header30.png);}\n"
"QComboBox{background:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/Arrow);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgb(16, 56, 16);\n"
"      selection-background-color:rgba(255, 255, 255, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrol"
                        "lBar::add-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        comboBox_6 = new QComboBox(regist_tab);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(500, 410, 50, 41));
        comboBox_6->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 10pt \"Century Gothic\";color: rgba(255, 255, 255, 200);border-image: url(:/small_unit/black Header30.png);}\n"
"QComboBox{background:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/Arrow);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgb(16, 56, 16);\n"
"      selection-background-color:rgba(255, 255, 255, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrol"
                        "lBar::add-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        comboBox_6->setMaxVisibleItems(10);
        comboBox_6->setFrame(true);
        menu_tab->addTab(regist_tab, QString());
        borroe_detail_view_2->raise();
        layoutWidget->raise();
        label_82->raise();
        lineEdit_10->raise();
        label_91->raise();
        layoutWidget->raise();
        pushButton_16->raise();
        label_90->raise();
        lineEdit_8->raise();
        label_92->raise();
        layoutWidget_4->raise();
        layoutWidget_2->raise();
        pushButton_13->raise();
        pushButton_10->raise();
        label_83->raise();
        lineEdit_12->raise();
        comboBox_9->raise();
        label_18->raise();
        comboBox_10->raise();
        comboBox_6->raise();
        purchase_tab = new QWidget();
        purchase_tab->setObjectName(QStringLiteral("purchase_tab"));
        label_56 = new QLabel(purchase_tab);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(30, 41, 761, 31));
        label_56->setStyleSheet(QLatin1String("background-color: rgba(255, 170, 0,60%);\n"
"font: 14pt \"Century Gothic\";"));
        label_56->setAlignment(Qt::AlignCenter);
        purchase_view = new QTableView(purchase_tab);
        purchase_view->setObjectName(QStringLiteral("purchase_view"));
        purchase_view->setGeometry(QRect(30, 70, 761, 511));
        purchase_view->setStyleSheet(QLatin1String("QTableView {\n"
"    color: white;\n"
"	gridline-color: white;\n"
"    background-color: rgba(108, 108, 108, 128);\n"
"	alternate-background-color: rgb(64, 64, 64);\n"
"    selection-color: white;\n"
"    selection-background-color:rgba(255, 255, 255, 128);\n"
"    border: 0px;\n"
"    border-radius: 0px;\n"
"}\n"
"QTableView::selection:hover\n"
"{	\n"
"	background-color: rgba(255, 255, 255, 128);\n"
"}\n"
"QHeaderView\n"
"{\n"
"	color: white;\n"
"	/*ont: bold 10pt;*/\n"
"	background-color: rgba(108, 108, 108, 128);\n"
"	border: 0px solid rgb(144, 144, 144);\n"
"	border:0px solid rgb(191,191,191);\n"
"	border-left-color: rgba(255, 255, 255, 0);\n"
"	border-top-color: rgba(255, 255, 255, 0);\n"
"	border-radius:0px;\n"
"	min-height:29px;\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"	color: white;\n"
"	/*ont: bold 10pt;*/\n"
"	background-color: rgba(108, 108, 108, 128);\n"
"	border:0px solid rgb(191,191,191);\n"
"	border-radius:0px;\n"
"	min-height:29px;\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    "
                        "background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"QScrollBar:horizontal\n"
"{\n"
"    height:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-left:0px; \n"
"    padding-right:0px;\n"
"}\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    height:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"}\n"
"QScrollBar::handle:horizontal:hover\n"
"{\n"
""
                        "    height:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"}\n"
"QScrollBar::add-line:horizontal   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:right;\n"
"}\n"
"QScrollBar::sub-line:horizontal   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:left;\n"
"}\n"
""));
        purchase_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        menu_tab->addTab(purchase_tab, QString());
        setting_tab = new QWidget();
        setting_tab->setObjectName(QStringLiteral("setting_tab"));
        comboBox_11 = new QComboBox(setting_tab);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));
        comboBox_11->setGeometry(QRect(150, 510, 69, 22));
        comboBox_11->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 14pt \"Century Gothic\";color: rgba(255, 255, 255, 200);}\n"
"QComboBox{background-color:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"  "
                        "  height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        label_32 = new QLabel(setting_tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(110, 110, 10, 10));
        label_32->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; "));
        checkBox_6 = new QCheckBox(setting_tab);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(580, 290, 121, 31));
        checkBox_6->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        label_25 = new QLabel(setting_tab);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(420, 220, 30, 30));
        label_25->setStyleSheet(QStringLiteral("border-image: url(:/icons/Like.png);"));
        label_23 = new QLabel(setting_tab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(80, 60, 30, 30));
        label_23->setStyleSheet(QStringLiteral("border-image: url(:/icons/User Profile.png);"));
        label_27 = new QLabel(setting_tab);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(120, 400, 141, 41));
        label_27->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 180);\n"
"font: 24pt \"Century Gothic\";"));
        label_34 = new QLabel(setting_tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(70, 210, 30, 38));
        label_34->setStyleSheet(QStringLiteral("border-image: url(:/icons/Location Pin.png);"));
        pushButton_5 = new QPushButton(setting_tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 100, 75, 23));
        pushButton_5->setStyleSheet(QLatin1String("\n"
"QPushButton \n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	color: rgba(0, 192, 0, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color: rgba(0, 127, 0, 200);\n"
"}"));
        pushButton_5->setFlat(true);
        checkBox_8 = new QCheckBox(setting_tab);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(440, 440, 121, 31));
        checkBox_8->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        comboBox_4 = new QComboBox(setting_tab);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(500, 140, 121, 22));
        comboBox_4->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 14pt \"Century Gothic\";color: rgba(255, 255, 255, 200);}\n"
"QComboBox{background-color: rgba(255,255,255,150);}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
""
                        "{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        comboBox_12 = new QComboBox(setting_tab);
        comboBox_12->setObjectName(QStringLiteral("comboBox_12"));
        comboBox_12->setGeometry(QRect(240, 510, 69, 22));
        comboBox_12->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 14pt \"Century Gothic\";color: rgba(255, 255, 255, 200);}\n"
"QComboBox{background-color:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"    height"
                        ":0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        label_35 = new QLabel(setting_tab);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(110, 170, 10, 10));
        label_35->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; "));
        checkBox_3 = new QCheckBox(setting_tab);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(440, 390, 121, 31));
        checkBox_3->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        pushButton_7 = new QPushButton(setting_tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(130, 160, 75, 23));
        pushButton_7->setStyleSheet(QLatin1String("\n"
"QPushButton \n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	color: rgba(0, 192, 0, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color: rgba(0, 127, 0, 200);\n"
"}"));
        pushButton_7->setFlat(true);
        checkBox = new QCheckBox(setting_tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(440, 290, 121, 31));
        checkBox->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        label_24 = new QLabel(setting_tab);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(60, 410, 30, 30));
        label_24->setStyleSheet(QStringLiteral("border-image: url(:/icons/Like.png);"));
        label_31 = new QLabel(setting_tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(480, 70, 161, 41));
        label_31->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 180);\n"
"font: 24pt \"Century Gothic\";"));
        pushButton = new QPushButton(setting_tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 510, 100, 50));
        pushButton->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"	font: 22pt \"Century Gothic\";\n"
"	background-color: rgb(190, 127, 0);\n"
"    color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    background-color: rgb(255, 170, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	\n"
"	background-color: rgba(255, 170, 0, 150);\n"
"}"));
        pushButton->setFlat(true);
        label_30 = new QLabel(setting_tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(420, 80, 30, 30));
        label_30->setStyleSheet(QStringLiteral("border-image: url(:/icons/Like.png);"));
        label_33 = new QLabel(setting_tab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(470, 200, 121, 41));
        label_33->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 180);\n"
"font: 24pt \"Century Gothic\";"));
        label_26 = new QLabel(setting_tab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(130, 210, 141, 41));
        label_26->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 180);\n"
"font: 24pt \"Century Gothic\";"));
        pushButton_6 = new QPushButton(setting_tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 130, 75, 23));
        pushButton_6->setStyleSheet(QLatin1String("\n"
"QPushButton \n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	color: rgba(0, 192, 0, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color: rgba(0, 127, 0, 200);\n"
"}"));
        pushButton_6->setFlat(true);
        checkBox_5 = new QCheckBox(setting_tab);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(440, 340, 121, 31));
        checkBox_5->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        checkBox_4 = new QCheckBox(setting_tab);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(580, 340, 121, 31));
        checkBox_4->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        label_28 = new QLabel(setting_tab);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(110, 140, 10, 10));
        label_28->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; "));
        comboBox_5 = new QComboBox(setting_tab);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 510, 69, 22));
        comboBox_5->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 14pt \"Century Gothic\";color: rgba(255, 255, 255, 200);}\n"
"QComboBox{background-color:transparent;}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	  \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QScrollBar:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(158, 158, 158);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px; \n"
"    padding-bottom:0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:3px;\n"
"    background:rgb(144, 144, 144);\n"
"    border-radius:2px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:5px;\n"
"    background:rgba(0,0,0,50%); \n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"  "
                        "  height:0px;width:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"/*QScrollBar::add-line:vertical:hover   \n"
"{\n"
"    height:9px;width:8px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:0px;width:0px;\n"
"    subcontrol-position:top;\n"
"}*/"));
        label_29 = new QLabel(setting_tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(130, 50, 51, 41));
        label_29->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 180);\n"
"font: 24pt \"Century Gothic\";"));
        checkBox_2 = new QCheckBox(setting_tab);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(580, 390, 121, 31));
        checkBox_2->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        checkBox_7 = new QCheckBox(setting_tab);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(580, 440, 121, 31));
        checkBox_7->setStyleSheet(QLatin1String("\n"
"QCheckBox {\n"
"spacing: 8px; \n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"Century Gothic\";\n"
"color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"border-image: url(:/small_unit/unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"border-image: url(:/small_unit/checked.png);\n"
"}"));
        citys = new QComboBox(setting_tab);
        citys->setObjectName(QStringLiteral("citys"));
        citys->setGeometry(QRect(110, 340, 121, 22));
        citys->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 8pt \"Century Gothic\";color: rgba(50, 50, 50, 200);}\n"
"QComboBox{background-color: rgba(255,255,255,150);}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QComboBox QScrollBar\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,0);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:9px;  \n"
"    padding-bottom:9px;\n"
"}\n"
"\n"
"QComboBox QScrollBar::handle:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,25%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"\n"
"QComboBox QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,50%);  \n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"\n"
"QComboBox QScrollB"
                        "ar::add-line:vertical  \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/add-line_vertical.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"\n"
"QComboBox QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/sub-line_vertical.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"\n"
"QComboBox QScrollBar::add-line:vertical:hover \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/add-line_vertical.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"\n"
"QComboBox QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/sub-line_vertical.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"QComboBox QScrollBar::add-page:vertical\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
"QComboBox QScrollBar::sub-page:vertical\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"} "));
        provinces = new QComboBox(setting_tab);
        provinces->setObjectName(QStringLiteral("provinces"));
        provinces->setGeometry(QRect(110, 300, 121, 22));
        provinces->setStyleSheet(QLatin1String("QComboBox{border:0px;outline: 0px;font: 8pt \"Century Gothic\";color: rgba(50, 50, 50, 200);}\n"
"QComboBox{background-color: rgba(255,255,255,150);}\n"
"QComboBox::down-arrow{image:url(:/small_unit/down.png);}\n"
"QComboBox::drop-down{border:0px;}\n"
"QComboBox::drop-down{background:transparent;}\n"
"QComboBox QAbstractItemView {    \n"
"	color:rgba(255, 255, 255, 192);\n"
"	background-color:rgba(255,255,255,150);\n"
"      selection-background-color:rgba(64, 64, 64, 64)\n"
"  }\n"
"QComboBox QScrollBar\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,0);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:9px;  \n"
"    padding-bottom:9px;\n"
"}\n"
"\n"
"QComboBox QScrollBar::handle:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,25%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"\n"
"QComboBox QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,50%);  \n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"\n"
"QComboBox QScrollB"
                        "ar::add-line:vertical  \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/add-line_vertical.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"\n"
"QComboBox QScrollBar::sub-line:vertical   \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/sub-line_vertical.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"\n"
"QComboBox QScrollBar::add-line:vertical:hover \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/add-line_vertical.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"\n"
"QComboBox QScrollBar::sub-line:vertical:hover \n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/small_unit/sub-line_vertical.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"QComboBox QScrollBar::add-page:vertical\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
"QComboBox QScrollBar::sub-page:vertical\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"} "));
        menu_tab->addTab(setting_tab, QString());
        more_tab = new QWidget();
        more_tab->setObjectName(QStringLiteral("more_tab"));
        copyright = new QLabel(more_tab);
        copyright->setObjectName(QStringLiteral("copyright"));
        copyright->setGeometry(QRect(410, 590, 431, 21));
        copyright->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 150);\n"
"font: 10pt \"Century Gothic\";\n"
""));
        pushButton_3 = new QPushButton(more_tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 350, 131, 41));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Century Gothic\";\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    color: rgb(0, 192, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color: rgb(0, 127, 0);\n"
"}"));
        pushButton_3->setFlat(true);
        label_4 = new QLabel(more_tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 360, 25, 25));
        label_4->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Setting.png);"));
        pushButton_2 = new QPushButton(more_tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 350, 111, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Century Gothic\";\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    color: rgb(0, 192, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color: rgb(0, 127, 0);\n"
"}"));
        pushButton_2->setFlat(true);
        pushButton_9 = new QPushButton(more_tab);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(450, 420, 181, 41));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Century Gothic\";\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    color: rgb(0, 192, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color: rgb(0, 127, 0);\n"
"}"));
        pushButton_9->setFlat(true);
        system_name = new QLabel(more_tab);
        system_name->setObjectName(QStringLiteral("system_name"));
        system_name->setGeometry(QRect(150, 140, 531, 61));
        system_name->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 0);\n"
"color: rgba(0, 0, 0, 180);\n"
"font: 75 32pt \"Tempus Sans ITC\";"));
        pushButton_8 = new QPushButton(more_tab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(190, 420, 221, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Century Gothic\";\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    color: rgb(0, 192, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color: rgb(0, 127, 0);\n"
"}"));
        pushButton_8->setFlat(true);
        label_3 = new QLabel(more_tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(382, 246, 91, 21));
        label_3->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 150);\n"
"font: 9pt \"Century Gothic\";"));
        label_2 = new QLabel(more_tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 330, 561, 161));
        label_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/black Header60.png);"));
        label_5 = new QLabel(more_tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 435, 25, 20));
        label_5->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Mail.png);"));
        label_6 = new QLabel(more_tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(192, 430, 20, 25));
        label_6->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/New post.png);"));
        label_7 = new QLabel(more_tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 360, 25, 25));
        label_7->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Repeat.png);"));
        system_name_2 = new QLabel(more_tab);
        system_name_2->setObjectName(QStringLiteral("system_name_2"));
        system_name_2->setGeometry(QRect(240, 240, 611, 31));
        system_name_2->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 150);\n"
"color: rgba(255, 255, 255, 255);\n"
"font: 15pt \"Century Gothic\";"));
        menu_tab->addTab(more_tab, QString());
        system_name_2->raise();
        label_2->raise();
        copyright->raise();
        pushButton_3->raise();
        label_4->raise();
        pushButton_2->raise();
        pushButton_9->raise();
        system_name->raise();
        pushButton_8->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        reader_return_bt = new QPushButton(buyer_widget);
        reader_return_bt->setObjectName(QStringLiteral("reader_return_bt"));
        reader_return_bt->setGeometry(QRect(50, 540, 20, 20));
        reader_return_bt->setStyleSheet(QLatin1String("QPushButton \n"
"{ \n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Home.png);\n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"border-image: url(:/icons/Home2.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"border-image: url(:/icons/Home3.png);\n"
"}"));
        reader_return_bt->setFlat(true);
        look_bt = new QPushButton(buyer_widget);
        look_bt->setObjectName(QStringLiteral("look_bt"));
        look_bt->setGeometry(QRect(25, 25, 51, 51));
        look_bt->setStyleSheet(QStringLiteral(""));
        look_bt->setFlat(true);
        look = new QLabel(buyer_widget);
        look->setObjectName(QStringLiteral("look"));
        look->setGeometry(QRect(25, 25, 51, 51));
        look->setStyleSheet(QStringLiteral(""));
        buyer_bg->raise();
        buyer_select->raise();
        borrow_green->raise();
        return_green->raise();
        face_label->raise();
        name->raise();
        home_green->raise();
        buyer_home_icon->raise();
        buyer_home->raise();
        buyer_borrow_icon->raise();
        buyer_borrow->raise();
        buyer_return->raise();
        buyer_return_icon->raise();
        home_green_bt->raise();
        borrow_green_bt->raise();
        return_green_bt->raise();
        setting_blue->raise();
        reader_setting_icon->raise();
        reader_setting->raise();
        setting_blue_bt->raise();
        more_blue->raise();
        reader_more->raise();
        reader_more_icon->raise();
        more_blue_bt->raise();
        reader_return_bt_2->raise();
        menu_tab->raise();
        reader_return_bt->raise();
        look->raise();
        look_bt->raise();
        buyerWindow->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        label_91->setBuddy(lineEdit_8);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(home_green_bt, borrow_green_bt);
        QWidget::setTabOrder(borrow_green_bt, return_green_bt);
        QWidget::setTabOrder(return_green_bt, setting_blue_bt);
        QWidget::setTabOrder(setting_blue_bt, more_blue_bt);
        QWidget::setTabOrder(more_blue_bt, reader_return_bt);
        QWidget::setTabOrder(reader_return_bt, reader_return_bt_2);
        QWidget::setTabOrder(reader_return_bt_2, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, pushButton_13);
        QWidget::setTabOrder(pushButton_13, pushButton_10);
        QWidget::setTabOrder(pushButton_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, comboBox_10);
        QWidget::setTabOrder(comboBox_10, comboBox_6);
        QWidget::setTabOrder(comboBox_6, comboBox_9);
        QWidget::setTabOrder(comboBox_9, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, pushButton_16);
        QWidget::setTabOrder(pushButton_16, purchase_view);
        QWidget::setTabOrder(purchase_view, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_7);
        QWidget::setTabOrder(pushButton_7, comboBox_5);
        QWidget::setTabOrder(comboBox_5, comboBox_11);
        QWidget::setTabOrder(comboBox_11, comboBox_12);
        QWidget::setTabOrder(comboBox_12, comboBox_4);
        QWidget::setTabOrder(comboBox_4, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_6);
        QWidget::setTabOrder(checkBox_6, checkBox_5);
        QWidget::setTabOrder(checkBox_5, checkBox_4);
        QWidget::setTabOrder(checkBox_4, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox_2);
        QWidget::setTabOrder(checkBox_2, checkBox_8);
        QWidget::setTabOrder(checkBox_8, checkBox_7);
        QWidget::setTabOrder(checkBox_7, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_9);
        QWidget::setTabOrder(pushButton_9, menu_tab);

        retranslateUi(buyerWindow);

        menu_tab->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(buyerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *buyerWindow)
    {
        buyerWindow->setWindowTitle(QApplication::translate("buyerWindow", "MainWindow", 0));
        buyer_bg->setText(QString());
        buyer_select->setText(QString());
        borrow_green->setText(QString());
        return_green->setText(QString());
        face_label->setText(QString());
        name->setText(QApplication::translate("buyerWindow", "Danny", 0));
        home_green->setText(QString());
        buyer_home_icon->setText(QString());
        buyer_home->setText(QApplication::translate("buyerWindow", "personal center", 0));
        buyer_borrow_icon->setText(QString());
        buyer_borrow->setText(QApplication::translate("buyerWindow", "Regist", 0));
        buyer_return->setText(QApplication::translate("buyerWindow", "Purchase", 0));
        buyer_return_icon->setText(QString());
        home_green_bt->setText(QString());
        borrow_green_bt->setText(QString());
        return_green_bt->setText(QString());
        reader_setting_icon->setText(QString());
        setting_blue_bt->setText(QString());
        setting_blue->setText(QString());
        reader_setting->setText(QApplication::translate("buyerWindow", "setting", 0));
        reader_more_icon->setText(QString());
        more_blue->setText(QString());
        more_blue_bt->setText(QString());
        reader_more->setText(QApplication::translate("buyerWindow", "more", 0));
        reader_return_bt_2->setText(QString());
        time->setText(QString());
        city_label->setText(QString());
        labelImage1->setText(QString());
        label_53->setText(QString());
        labelTemperature->setText(QString());
        name_label->setText(QString());
        loc->setText(QString());
        label_52->setText(QString());
        look_2->setText(QString());
        weather->setText(QString());
        findButton->setText(QString());
        label_54->setText(QString());
        labelImage2->setText(QString());
        weatherback->setText(QString());
        labelWind->setText(QString());
        label_65->setText(QString());
        menu_tab->setTabText(menu_tab->indexOf(browser_tab), QApplication::translate("buyerWindow", "1", 0));
        label_82->setText(QApplication::translate("buyerWindow", "ISSN:             ", 0));
        lineEdit_10->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        label_91->setText(QApplication::translate("buyerWindow", "Name Of Journal:", 0));
        label_62->setText(QApplication::translate("buyerWindow", "Publisher    ", 0));
        lineEdit_9->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        pushButton_16->setText(QApplication::translate("buyerWindow", "Regist", 0));
        label_90->setText(QApplication::translate("buyerWindow", "Add New Journal", 0));
        lineEdit_8->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        borroe_detail_view_2->setText(QString());
        label_92->setText(QString());
        label_81->setText(QApplication::translate("buyerWindow", "CN Code:", 0));
        lineEdit_14->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        label_72->setText(QApplication::translate("buyerWindow", "Mail Code: ", 0));
        lineEdit_11->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        pushButton_13->setText(QString());
        pushButton_10->setText(QString());
        label_64->setText(QApplication::translate("buyerWindow", "Pubperiod  ", 0));
        lineEdit_13->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        label_83->setText(QApplication::translate("buyerWindow", "Quantities:             ", 0));
        lineEdit_12->setPlaceholderText(QApplication::translate("buyerWindow", "Enter from Me", 0));
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "NO", 0)
         << QApplication::translate("buyerWindow", "   1", 0)
         << QApplication::translate("buyerWindow", "   2", 0)
         << QApplication::translate("buyerWindow", "   3", 0)
         << QApplication::translate("buyerWindow", "   4", 0)
         << QApplication::translate("buyerWindow", "   5", 0)
         << QApplication::translate("buyerWindow", "   6", 0)
         << QApplication::translate("buyerWindow", "   7", 0)
         << QApplication::translate("buyerWindow", "   8", 0)
         << QApplication::translate("buyerWindow", "   9", 0)
         << QApplication::translate("buyerWindow", "   10", 0)
         << QApplication::translate("buyerWindow", "   11", 0)
         << QApplication::translate("buyerWindow", "   11", 0)
         << QApplication::translate("buyerWindow", "   12", 0)
         << QApplication::translate("buyerWindow", "   13", 0)
         << QApplication::translate("buyerWindow", "   14", 0)
         << QApplication::translate("buyerWindow", "   15", 0)
         << QApplication::translate("buyerWindow", "   16", 0)
         << QApplication::translate("buyerWindow", "   17", 0)
         << QApplication::translate("buyerWindow", "   18", 0)
         << QApplication::translate("buyerWindow", "   19", 0)
         << QApplication::translate("buyerWindow", "   20", 0)
         << QApplication::translate("buyerWindow", "   21", 0)
         << QApplication::translate("buyerWindow", "   22", 0)
         << QApplication::translate("buyerWindow", "   23", 0)
         << QApplication::translate("buyerWindow", "   24", 0)
         << QApplication::translate("buyerWindow", "   25", 0)
         << QApplication::translate("buyerWindow", "   26", 0)
         << QApplication::translate("buyerWindow", "   27", 0)
         << QApplication::translate("buyerWindow", "   28 ", 0)
         << QApplication::translate("buyerWindow", "   29 ", 0)
         << QApplication::translate("buyerWindow", "   30", 0)
         << QApplication::translate("buyerWindow", "   31", 0)
         << QApplication::translate("buyerWindow", "   32", 0)
         << QApplication::translate("buyerWindow", "   33", 0)
         << QApplication::translate("buyerWindow", "   34", 0)
         << QApplication::translate("buyerWindow", "   35", 0)
         << QApplication::translate("buyerWindow", "   36", 0)
        );
        label_18->setText(QApplication::translate("buyerWindow", "year     volume     issue", 0));
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "2016", 0)
         << QApplication::translate("buyerWindow", "2015", 0)
         << QApplication::translate("buyerWindow", "2014", 0)
         << QApplication::translate("buyerWindow", "2013", 0)
         << QApplication::translate("buyerWindow", "2012", 0)
         << QApplication::translate("buyerWindow", "2011", 0)
         << QApplication::translate("buyerWindow", "2010", 0)
         << QApplication::translate("buyerWindow", "2009", 0)
         << QApplication::translate("buyerWindow", "2008", 0)
         << QApplication::translate("buyerWindow", "2007", 0)
         << QApplication::translate("buyerWindow", "2006", 0)
         << QApplication::translate("buyerWindow", "2005", 0)
         << QApplication::translate("buyerWindow", "2004", 0)
         << QApplication::translate("buyerWindow", "2003", 0)
         << QApplication::translate("buyerWindow", "2002", 0)
         << QApplication::translate("buyerWindow", "2001", 0)
         << QApplication::translate("buyerWindow", "2000", 0)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "   1", 0)
         << QApplication::translate("buyerWindow", "   2", 0)
         << QApplication::translate("buyerWindow", "   3", 0)
         << QApplication::translate("buyerWindow", "   4", 0)
         << QApplication::translate("buyerWindow", "   5", 0)
         << QApplication::translate("buyerWindow", "   6", 0)
         << QApplication::translate("buyerWindow", "   7", 0)
         << QApplication::translate("buyerWindow", "   8", 0)
         << QApplication::translate("buyerWindow", "   9", 0)
         << QApplication::translate("buyerWindow", "   10", 0)
         << QApplication::translate("buyerWindow", "   11", 0)
         << QApplication::translate("buyerWindow", "   12", 0)
        );
        menu_tab->setTabText(menu_tab->indexOf(regist_tab), QApplication::translate("buyerWindow", "2", 0));
        label_56->setText(QApplication::translate("buyerWindow", "Purchasers List", 0));
        menu_tab->setTabText(menu_tab->indexOf(purchase_tab), QApplication::translate("buyerWindow", "3", 0));
        comboBox_11->clear();
        comboBox_11->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "1", 0)
         << QApplication::translate("buyerWindow", "2", 0)
         << QApplication::translate("buyerWindow", "3", 0)
         << QApplication::translate("buyerWindow", "4", 0)
         << QApplication::translate("buyerWindow", "5", 0)
         << QApplication::translate("buyerWindow", "6", 0)
         << QApplication::translate("buyerWindow", "7", 0)
         << QApplication::translate("buyerWindow", "8", 0)
         << QApplication::translate("buyerWindow", "9", 0)
         << QApplication::translate("buyerWindow", "10", 0)
         << QApplication::translate("buyerWindow", "11", 0)
         << QApplication::translate("buyerWindow", "12", 0)
        );
        label_32->setText(QString());
        checkBox_6->setText(QApplication::translate("buyerWindow", "arts", 0));
        label_25->setText(QString());
        label_23->setText(QString());
        label_27->setText(QApplication::translate("buyerWindow", "birthday", 0));
        label_34->setText(QString());
        pushButton_5->setText(QApplication::translate("buyerWindow", "male", 0));
        checkBox_8->setText(QApplication::translate("buyerWindow", "travel", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "undergraduate", 0)
        );
        comboBox_12->clear();
        comboBox_12->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "1", 0)
         << QApplication::translate("buyerWindow", "2", 0)
         << QApplication::translate("buyerWindow", "3", 0)
         << QApplication::translate("buyerWindow", "4", 0)
         << QApplication::translate("buyerWindow", "5", 0)
         << QApplication::translate("buyerWindow", "6", 0)
         << QApplication::translate("buyerWindow", "7", 0)
         << QApplication::translate("buyerWindow", "8", 0)
         << QApplication::translate("buyerWindow", "9", 0)
         << QApplication::translate("buyerWindow", "10", 0)
        );
        label_35->setText(QString());
        checkBox_3->setText(QApplication::translate("buyerWindow", "movie", 0));
        pushButton_7->setText(QApplication::translate("buyerWindow", "secret", 0));
        checkBox->setText(QApplication::translate("buyerWindow", "games", 0));
        label_24->setText(QString());
        label_31->setText(QApplication::translate("buyerWindow", "profession", 0));
        pushButton->setText(QApplication::translate("buyerWindow", "save", 0));
        label_30->setText(QString());
        label_33->setText(QApplication::translate("buyerWindow", "interest", 0));
        label_26->setText(QApplication::translate("buyerWindow", "location", 0));
        pushButton_6->setText(QApplication::translate("buyerWindow", "female", 0));
        checkBox_5->setText(QApplication::translate("buyerWindow", "science", 0));
        checkBox_4->setText(QApplication::translate("buyerWindow", "sports", 0));
        label_28->setText(QString());
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("buyerWindow", "2015", 0)
         << QApplication::translate("buyerWindow", "2014", 0)
         << QApplication::translate("buyerWindow", "2013", 0)
         << QApplication::translate("buyerWindow", "2012", 0)
         << QApplication::translate("buyerWindow", "2011", 0)
         << QApplication::translate("buyerWindow", "2010", 0)
         << QApplication::translate("buyerWindow", "2009", 0)
         << QApplication::translate("buyerWindow", "2008", 0)
         << QApplication::translate("buyerWindow", "2007", 0)
         << QApplication::translate("buyerWindow", "2006", 0)
         << QApplication::translate("buyerWindow", "2005", 0)
         << QApplication::translate("buyerWindow", "2004", 0)
         << QApplication::translate("buyerWindow", "2003", 0)
         << QApplication::translate("buyerWindow", "2002", 0)
         << QApplication::translate("buyerWindow", "2001", 0)
         << QApplication::translate("buyerWindow", "2000", 0)
         << QApplication::translate("buyerWindow", "1999", 0)
         << QApplication::translate("buyerWindow", "1998", 0)
         << QApplication::translate("buyerWindow", "1997", 0)
         << QApplication::translate("buyerWindow", "1996", 0)
         << QApplication::translate("buyerWindow", "1995", 0)
         << QApplication::translate("buyerWindow", "1994", 0)
        );
        label_29->setText(QApplication::translate("buyerWindow", "sex", 0));
        checkBox_2->setText(QApplication::translate("buyerWindow", "music", 0));
        checkBox_7->setText(QApplication::translate("buyerWindow", "digital", 0));
        menu_tab->setTabText(menu_tab->indexOf(setting_tab), QApplication::translate("buyerWindow", "4", 0));
        copyright->setText(QApplication::translate("buyerWindow", "Copyright \302\256 2016 Journal Management System.All Rights Reserved", 0));
        pushButton_3->setText(QApplication::translate("buyerWindow", "        update", 0));
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("buyerWindow", "       set up", 0));
        pushButton_9->setText(QApplication::translate("buyerWindow", "       connect us", 0));
        system_name->setText(QApplication::translate("buyerWindow", "Journal Management System", 0));
        pushButton_8->setText(QApplication::translate("buyerWindow", "       user agreement", 0));
        label_3->setText(QApplication::translate("buyerWindow", "preview 11007", 0));
        label_2->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        system_name_2->setText(QApplication::translate("buyerWindow", "    version 1.1", 0));
        menu_tab->setTabText(menu_tab->indexOf(more_tab), QApplication::translate("buyerWindow", "5", 0));
        reader_return_bt->setText(QString());
        look_bt->setText(QString());
        look->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class buyerWindow: public Ui_buyerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYERWINDOW_H

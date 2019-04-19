/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *register_widget;
    QLabel *register_bg;
    QLabel *register_menu;
    QLabel *login_bg;
    QLabel *copyright;
    QLabel *home_icon;
    QLabel *about_icon;
    QLabel *home;
    QLabel *about;
    QPushButton *home_bt;
    QPushButton *about_bt;
    QLabel *name_icon;
    QLabel *key_icon;
    QLineEdit *name_Edit;
    QLineEdit *key_Edit;
    QPushButton *login_bt;
    QLabel *book_icon;
    QLabel *system_name;
    QPushButton *exit_bt;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *pushButton_10;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QWidget *tab_3;
    QLabel *label_3;
    QPushButton *pushButton_15;
    QPushButton *pushButton_12;
    QWidget *tab_4;
    QLabel *label_4;
    QPushButton *pushButton_13;
    QPushButton *pushButton_16;
    QWidget *tab_5;
    QLabel *label_5;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *tab_6;
    QLabel *label_6;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QWidget *tab_7;
    QLabel *label_7;
    QPushButton *pushButton_22;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        register_widget = new QWidget(centralWidget);
        register_widget->setObjectName(QStringLiteral("register_widget"));
        register_widget->setGeometry(QRect(0, 0, 1024, 600));
        register_bg = new QLabel(register_widget);
        register_bg->setObjectName(QStringLiteral("register_bg"));
        register_bg->setGeometry(QRect(0, 0, 1024, 600));
        register_bg->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/13857113_164644350163_2.png);"));
        register_menu = new QLabel(register_widget);
        register_menu->setObjectName(QStringLiteral("register_menu"));
        register_menu->setGeometry(QRect(0, 0, 1024, 40));
        register_menu->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/black Header30.png);\n"
""));
        login_bg = new QLabel(register_widget);
        login_bg->setObjectName(QStringLiteral("login_bg"));
        login_bg->setGeometry(QRect(304, 190, 721, 151));
        login_bg->setStyleSheet(QLatin1String("/*background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/black Header60.png);*/\n"
"background-color: rgba(67, 67, 67, 158);\n"
""));
        copyright = new QLabel(register_widget);
        copyright->setObjectName(QStringLiteral("copyright"));
        copyright->setGeometry(QRect(290, 550, 441, 51));
        copyright->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 150);\n"
"font: 10pt \"Century Gothic\";\n"
""));
        home_icon = new QLabel(register_widget);
        home_icon->setObjectName(QStringLiteral("home_icon"));
        home_icon->setGeometry(QRect(15, 8, 20, 20));
        home_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Home.png);"));
        about_icon = new QLabel(register_widget);
        about_icon->setObjectName(QStringLiteral("about_icon"));
        about_icon->setGeometry(QRect(115, 8, 20, 20));
        about_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/List.png);"));
        home = new QLabel(register_widget);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(50, 10, 41, 21));
        home->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 150);\n"
"font: 10pt \"Century Gothic\";\n"
""));
        about = new QLabel(register_widget);
        about->setObjectName(QStringLiteral("about"));
        about->setGeometry(QRect(150, 10, 41, 21));
        about->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 150);\n"
"font: 10pt \"Century Gothic\";\n"
""));
        home_bt = new QPushButton(register_widget);
        home_bt->setObjectName(QStringLiteral("home_bt"));
        home_bt->setGeometry(QRect(0, 0, 100, 40));
        home_bt->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	background-color: rgba(255, 255, 255, 30);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 60);\n"
"}"));
        home_bt->setFlat(true);
        about_bt = new QPushButton(register_widget);
        about_bt->setObjectName(QStringLiteral("about_bt"));
        about_bt->setEnabled(true);
        about_bt->setGeometry(QRect(100, 0, 100, 40));
        about_bt->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	background-color: rgba(255, 255, 255, 30);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 60);\n"
"}\n"
""));
        about_bt->setFlat(true);
        name_icon = new QLabel(register_widget);
        name_icon->setObjectName(QStringLiteral("name_icon"));
        name_icon->setGeometry(QRect(370, 220, 30, 30));
        name_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/User Profile.png);"));
        key_icon = new QLabel(register_widget);
        key_icon->setObjectName(QStringLiteral("key_icon"));
        key_icon->setGeometry(QRect(370, 280, 30, 30));
        key_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/icons/Grid.png);"));
        name_Edit = new QLineEdit(register_widget);
        name_Edit->setObjectName(QStringLiteral("name_Edit"));
        name_Edit->setGeometry(QRect(430, 220, 290, 30));
        name_Edit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"	background-color: rgba(200, 200, 200, 192);\n"
"	font: 75 16pt \"Century Gothic\";\n"
"	color :rgba(255, 255, 255, 192)\n"
"}\n"
""));
        name_Edit->setFrame(false);
        name_Edit->setAlignment(Qt::AlignCenter);
        name_Edit->setClearButtonEnabled(false);
        key_Edit = new QLineEdit(register_widget);
        key_Edit->setObjectName(QStringLiteral("key_Edit"));
        key_Edit->setGeometry(QRect(430, 280, 290, 30));
        key_Edit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"	background-color: rgba(200, 200, 200, 192);\n"
"	font: 75 16pt \"Century Gothic\";\n"
"	color :rgba(255, 255, 255, 192)\n"
"}\n"
""));
        key_Edit->setFrame(false);
        key_Edit->setEchoMode(QLineEdit::Password);
        key_Edit->setAlignment(Qt::AlignCenter);
        key_Edit->setClearButtonEnabled(false);
        login_bt = new QPushButton(register_widget);
        login_bt->setObjectName(QStringLiteral("login_bt"));
        login_bt->setGeometry(QRect(770, 240, 130, 50));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(20);
        login_bt->setFont(font);
        login_bt->setFocusPolicy(Qt::StrongFocus);
        login_bt->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	color:rgba(255, 255, 255, 220);\n"
"	background-color:rgba(208, 119, 37, 255);\n"
"	border-radius: 0px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"	background-color: rgba(208, 119, 37, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"}"));
        login_bt->setFlat(false);
        book_icon = new QLabel(register_widget);
        book_icon->setObjectName(QStringLiteral("book_icon"));
        book_icon->setGeometry(QRect(60, 170, 209, 217));
        book_icon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/small_unit/book.png);"));
        system_name = new QLabel(register_widget);
        system_name->setObjectName(QStringLiteral("system_name"));
        system_name->setGeometry(QRect(260, 410, 531, 61));
        system_name->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 180);\n"
"font: 75 32pt \"Tempus Sans ITC\";"));
        exit_bt = new QPushButton(register_widget);
        exit_bt->setObjectName(QStringLiteral("exit_bt"));
        exit_bt->setGeometry(QRect(995, 8, 20, 20));
        exit_bt->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"    border-image: url(:/icons/Cancel.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/Cancel_hover.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/Canel_pressed.png);\n"
"}"));
        exit_bt->setFlat(true);
        tabWidget = new QTabWidget(register_widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, -20, 1041, 621));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"	/*border:none;\n"
"	border-image: url(:/small_unit/black Header60.png);*/\n"
"	border-top:0px solid white;\n"
"	background:  transparent;\n"
"}\n"
"QTabWidget::tab-bar{\n"
"    alignment:left;\n"
"	height:0px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 600));
        label->setStyleSheet(QStringLiteral("border-image: url(:/about/1.png);"));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(970, 270, 50, 70));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_10->setFlat(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1024, 600));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/about/2.png);"));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(970, 270, 50, 70));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_11->setFlat(true);
        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 270, 50, 70));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_14->setFlat(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1024, 600));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/about/3.png);"));
        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 270, 50, 70));
        pushButton_15->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_15->setFlat(true);
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(970, 270, 50, 67));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_12->setFlat(true);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 1024, 600));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/about/4.png);"));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(970, 270, 50, 70));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_13->setFlat(true);
        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 270, 50, 70));
        pushButton_16->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_16->setFlat(true);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 1024, 600));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/about/5.png);"));
        pushButton_17 = new QPushButton(tab_5);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(970, 270, 50, 70));
        pushButton_17->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_17->setFlat(true);
        pushButton_18 = new QPushButton(tab_5);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 270, 50, 70));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_18->setFlat(true);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 1024, 600));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/about/6.png);"));
        pushButton_19 = new QPushButton(tab_6);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(970, 270, 50, 69));
        pushButton_19->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/right20.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/right60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/right30.png);\n"
"}"));
        pushButton_19->setFlat(true);
        pushButton_20 = new QPushButton(tab_6);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(10, 270, 50, 70));
        pushButton_20->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_20->setFlat(true);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 0, 1024, 600));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/about/7.png);"));
        pushButton_22 = new QPushButton(tab_7);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(10, 270, 50, 70));
        pushButton_22->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"border-image: url(:/icons/left10.png);\n"
"	background-color:rgba(255, 255, 255, 0);\n"
"	border-radius: 9px; \n"
"}\n"
"QPushButton:hover \n"
"{ \n"
"    border-image: url(:/icons/left60.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/icons/left30.png);\n"
"}"));
        pushButton_22->setFlat(true);
        tabWidget->addTab(tab_7, QString());
        register_bg->raise();
        login_bg->raise();
        copyright->raise();
        name_icon->raise();
        key_icon->raise();
        name_Edit->raise();
        key_Edit->raise();
        login_bt->raise();
        book_icon->raise();
        system_name->raise();
        tabWidget->raise();
        register_menu->raise();
        home_icon->raise();
        about->raise();
        about_bt->raise();
        exit_bt->raise();
        about_icon->raise();
        home->raise();
        home_bt->raise();
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        login_bt->setDefault(true);
        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        register_bg->setText(QString());
        register_menu->setText(QString());
        login_bg->setText(QString());
        copyright->setText(QApplication::translate("MainWindow", "Copyright \302\256 2016 Journal Management System.All Rights Reserved", 0));
        home_icon->setText(QString());
        about_icon->setText(QString());
        home->setText(QApplication::translate("MainWindow", "home", 0));
        about->setText(QApplication::translate("MainWindow", "about", 0));
        home_bt->setText(QString());
        about_bt->setText(QString());
        name_icon->setText(QString());
        key_icon->setText(QString());
        login_bt->setText(QApplication::translate("MainWindow", "log in", 0));
        book_icon->setText(QString());
        system_name->setText(QApplication::translate("MainWindow", "Journal Management System", 0));
        exit_bt->setText(QString());
        label->setText(QString());
        pushButton_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        label_2->setText(QString());
        pushButton_11->setText(QString());
        pushButton_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        label_3->setText(QString());
        pushButton_15->setText(QString());
        pushButton_12->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\351\241\265", 0));
        label_4->setText(QString());
        pushButton_13->setText(QString());
        pushButton_16->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\351\241\265", 0));
        label_5->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\351\241\265", 0));
        label_6->setText(QString());
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\351\241\265", 0));
        label_7->setText(QString());
        pushButton_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

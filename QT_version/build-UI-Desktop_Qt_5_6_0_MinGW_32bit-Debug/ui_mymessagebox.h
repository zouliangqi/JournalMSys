/********************************************************************************
** Form generated from reading UI file 'mymessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEBOX_H
#define UI_MYMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMessageBox
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widgetTitleBar;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButtonClose;
    QWidget *widgetCentral;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelIcon;
    QLabel *labelTips;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widgetBottom;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonOK;
    QToolButton *toolButtonCancel;

    void setupUi(QDialog *MyMessageBox)
    {
        if (MyMessageBox->objectName().isEmpty())
            MyMessageBox->setObjectName(QStringLiteral("MyMessageBox"));
        MyMessageBox->setWindowModality(Qt::WindowModal);
        MyMessageBox->resize(470, 261);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyMessageBox->sizePolicy().hasHeightForWidth());
        MyMessageBox->setSizePolicy(sizePolicy);
        MyMessageBox->setMinimumSize(QSize(200, 100));
        MyMessageBox->setMaximumSize(QSize(1024, 600));
        MyMessageBox->setSizeIncrement(QSize(50, 50));
        MyMessageBox->setBaseSize(QSize(200, 100));
        MyMessageBox->setSizeGripEnabled(false);
        MyMessageBox->setModal(true);
        gridLayout_2 = new QGridLayout(MyMessageBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widgetTitleBar = new QWidget(MyMessageBox);
        widgetTitleBar->setObjectName(QStringLiteral("widgetTitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetTitleBar->sizePolicy().hasHeightForWidth());
        widgetTitleBar->setSizePolicy(sizePolicy1);
        widgetTitleBar->setStyleSheet(QLatin1String("#widgetTitleBar{\n"
"border-image: url(:/small_unit/black.png);\n"
"}\n"
"\n"
"QToolButton {\n"
"border-image: url(:/icons/Cancel.png);\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"border-image: url(:/icons/Cancel_hover.png);\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"border-image: url(:/icons/Canel_pressed.png);\n"
"}"));
        gridLayout_7 = new QGridLayout(widgetTitleBar);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTitle = new QLabel(widgetTitleBar);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(10);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout_2->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        toolButtonClose = new QToolButton(widgetTitleBar);
        toolButtonClose->setObjectName(QStringLiteral("toolButtonClose"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButtonClose->sizePolicy().hasHeightForWidth());
        toolButtonClose->setSizePolicy(sizePolicy3);
        toolButtonClose->setMinimumSize(QSize(25, 25));
        toolButtonClose->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(toolButtonClose);


        gridLayout_7->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widgetTitleBar, 0, 0, 1, 1);

        widgetCentral = new QWidget(MyMessageBox);
        widgetCentral->setObjectName(QStringLiteral("widgetCentral"));
        widgetCentral->setStyleSheet(QLatin1String("#widgetCentral {\n"
"border-image: url(:/small_unit/black.png);\n"
"}"));
        gridLayout = new QGridLayout(widgetCentral);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelIcon = new QLabel(widgetCentral);
        labelIcon->setObjectName(QStringLiteral("labelIcon"));
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);
        labelIcon->setMinimumSize(QSize(50, 50));
        labelIcon->setMaximumSize(QSize(50, 50));
        labelIcon->setAutoFillBackground(false);
        labelIcon->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(labelIcon);

        labelTips = new QLabel(widgetCentral);
        labelTips->setObjectName(QStringLiteral("labelTips"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelTips->sizePolicy().hasHeightForWidth());
        labelTips->setSizePolicy(sizePolicy4);
        labelTips->setMinimumSize(QSize(100, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(11);
        labelTips->setFont(font1);
        labelTips->setStyleSheet(QStringLiteral("color:white;"));
        labelTips->setScaledContents(false);
        labelTips->setAlignment(Qt::AlignCenter);
        labelTips->setWordWrap(true);

        horizontalLayout->addWidget(labelTips);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(widgetCentral, 1, 0, 1, 1);

        widgetBottom = new QWidget(MyMessageBox);
        widgetBottom->setObjectName(QStringLiteral("widgetBottom"));
        sizePolicy1.setHeightForWidth(widgetBottom->sizePolicy().hasHeightForWidth());
        widgetBottom->setSizePolicy(sizePolicy1);
        widgetBottom->setMinimumSize(QSize(0, 40));
        widgetBottom->setStyleSheet(QLatin1String("#widgetBottom {\n"
"border-image: url(:/small_unit/black.png);\n"
"}"));
        gridLayout_9 = new QGridLayout(widgetBottom);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(-1, 0, 6, 0);
        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 0, 1, 2);

        toolButtonOK = new QToolButton(widgetBottom);
        toolButtonOK->setObjectName(QStringLiteral("toolButtonOK"));
        toolButtonOK->setMinimumSize(QSize(75, 30));
        toolButtonOK->setMaximumSize(QSize(75, 30));
        toolButtonOK->setStyleSheet(QLatin1String("QToolButton\n"
"{ \n"
"	font: 12pt \"Century Gothic\";\n"
"	background-color: rgb(190, 127, 0);\n"
"    color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QToolButton:hover \n"
"{ \n"
"    background-color: rgb(255, 170, 0);\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	\n"
"	background-color: rgba(255, 170, 0, 150);\n"
"}"));

        gridLayout_9->addWidget(toolButtonOK, 0, 2, 1, 1);

        toolButtonCancel = new QToolButton(widgetBottom);
        toolButtonCancel->setObjectName(QStringLiteral("toolButtonCancel"));
        toolButtonCancel->setMinimumSize(QSize(75, 30));
        toolButtonCancel->setMaximumSize(QSize(75, 30));
        toolButtonCancel->setStyleSheet(QLatin1String("QToolButton\n"
"{ \n"
"	font: 12pt \"Century Gothic\";\n"
"	background-color: rgb(190, 127, 0);\n"
"    color: rgba(255, 255, 255, 200);\n"
"	border-radius: 0px; \n"
"}\n"
"QToolButton:hover \n"
"{ \n"
"    background-color: rgb(255, 170, 0);\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	\n"
"	background-color: rgba(255, 170, 0, 150);\n"
"}"));

        gridLayout_9->addWidget(toolButtonCancel, 0, 3, 1, 1);


        gridLayout_2->addWidget(widgetBottom, 2, 0, 1, 1);


        retranslateUi(MyMessageBox);

        QMetaObject::connectSlotsByName(MyMessageBox);
    } // setupUi

    void retranslateUi(QDialog *MyMessageBox)
    {
        MyMessageBox->setWindowTitle(QApplication::translate("MyMessageBox", "MyMessageBox", 0));
        labelTitle->setText(QApplication::translate("MyMessageBox", "Title", 0));
        toolButtonClose->setText(QString());
        labelIcon->setText(QString());
        labelTips->setText(QString());
        toolButtonOK->setText(QApplication::translate("MyMessageBox", "OK", 0));
        toolButtonCancel->setText(QApplication::translate("MyMessageBox", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MyMessageBox: public Ui_MyMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEBOX_H

/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *exit_bt;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton10;
    QPushButton *pushButton6;
    QPushButton *pushButton11;
    QPushButton *pushButton14;
    QPushButton *pushButton16;
    QPushButton *pushButton17;
    QPushButton *pushButton18;
    QPushButton *pushButton12;
    QPushButton *pushButton15;
    QPushButton *pushButton13;
    QPushButton *pushButton19;
    QPushButton *pushButton20;
    QPushButton *pushButton21;
    QPushButton *pushButton22;
    QPushButton *pushButton23;
    QPushButton *pushButton24;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1024, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 600));
        label->setStyleSheet(QLatin1String("background-color: rgba(79, 79, 79, 200);\n"
"border-image: url(:/images/05.jpg);\n"
""));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1024, 30));
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 30%);"));
        exit_bt = new QPushButton(Dialog);
        exit_bt->setObjectName(QStringLiteral("exit_bt"));
        exit_bt->setGeometry(QRect(1000, 4, 20, 20));
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
        pushButton1 = new QPushButton(Dialog);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(50, 60, 90, 90));
        pushButton1->setStyleSheet(QStringLiteral("border-image: url(:/face/1.png);"));
        pushButton1->setFlat(true);
        pushButton2 = new QPushButton(Dialog);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(220, 60, 90, 90));
        pushButton2->setStyleSheet(QStringLiteral("border-image: url(:/face/2.png);"));
        pushButton2->setFlat(true);
        pushButton3 = new QPushButton(Dialog);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(390, 60, 90, 90));
        pushButton3->setStyleSheet(QStringLiteral("border-image: url(:/face/3.png);"));
        pushButton3->setFlat(true);
        pushButton4 = new QPushButton(Dialog);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(560, 60, 90, 90));
        pushButton4->setStyleSheet(QStringLiteral("border-image: url(:/face/4.png);"));
        pushButton4->setFlat(true);
        pushButton5 = new QPushButton(Dialog);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(730, 60, 90, 90));
        pushButton5->setStyleSheet(QStringLiteral("border-image: url(:/face/5.png);"));
        pushButton5->setFlat(true);
        pushButton7 = new QPushButton(Dialog);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(50, 200, 90, 90));
        pushButton7->setStyleSheet(QStringLiteral("border-image: url(:/face/7.png);"));
        pushButton7->setFlat(true);
        pushButton8 = new QPushButton(Dialog);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(220, 200, 90, 90));
        pushButton8->setStyleSheet(QStringLiteral("border-image: url(:/face/8.png);"));
        pushButton8->setFlat(true);
        pushButton9 = new QPushButton(Dialog);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(390, 200, 90, 90));
        pushButton9->setStyleSheet(QStringLiteral("border-image: url(:/face/9.png);"));
        pushButton9->setFlat(true);
        pushButton10 = new QPushButton(Dialog);
        pushButton10->setObjectName(QStringLiteral("pushButton10"));
        pushButton10->setGeometry(QRect(560, 200, 90, 90));
        pushButton10->setStyleSheet(QStringLiteral("border-image: url(:/face/10.png);"));
        pushButton10->setFlat(true);
        pushButton6 = new QPushButton(Dialog);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(900, 60, 90, 90));
        pushButton6->setStyleSheet(QStringLiteral("border-image: url(:/face/6.png);"));
        pushButton6->setFlat(true);
        pushButton11 = new QPushButton(Dialog);
        pushButton11->setObjectName(QStringLiteral("pushButton11"));
        pushButton11->setGeometry(QRect(730, 200, 90, 90));
        pushButton11->setStyleSheet(QStringLiteral("border-image: url(:/face/11.png);"));
        pushButton11->setFlat(true);
        pushButton14 = new QPushButton(Dialog);
        pushButton14->setObjectName(QStringLiteral("pushButton14"));
        pushButton14->setGeometry(QRect(220, 340, 90, 90));
        pushButton14->setStyleSheet(QStringLiteral("border-image: url(:/face/14.png);"));
        pushButton14->setFlat(true);
        pushButton16 = new QPushButton(Dialog);
        pushButton16->setObjectName(QStringLiteral("pushButton16"));
        pushButton16->setGeometry(QRect(560, 340, 90, 90));
        pushButton16->setStyleSheet(QStringLiteral("border-image: url(:/face/16.png);"));
        pushButton16->setFlat(true);
        pushButton17 = new QPushButton(Dialog);
        pushButton17->setObjectName(QStringLiteral("pushButton17"));
        pushButton17->setGeometry(QRect(730, 340, 90, 90));
        pushButton17->setStyleSheet(QStringLiteral("border-image: url(:/face/17.png);"));
        pushButton17->setFlat(true);
        pushButton18 = new QPushButton(Dialog);
        pushButton18->setObjectName(QStringLiteral("pushButton18"));
        pushButton18->setGeometry(QRect(900, 340, 90, 90));
        pushButton18->setStyleSheet(QStringLiteral("border-image: url(:/face/18.png);"));
        pushButton18->setFlat(true);
        pushButton12 = new QPushButton(Dialog);
        pushButton12->setObjectName(QStringLiteral("pushButton12"));
        pushButton12->setGeometry(QRect(900, 200, 90, 90));
        pushButton12->setStyleSheet(QStringLiteral("border-image: url(:/face/12.png);"));
        pushButton12->setFlat(true);
        pushButton15 = new QPushButton(Dialog);
        pushButton15->setObjectName(QStringLiteral("pushButton15"));
        pushButton15->setGeometry(QRect(390, 340, 90, 90));
        pushButton15->setStyleSheet(QStringLiteral("border-image: url(:/face/15.png);"));
        pushButton15->setFlat(true);
        pushButton13 = new QPushButton(Dialog);
        pushButton13->setObjectName(QStringLiteral("pushButton13"));
        pushButton13->setGeometry(QRect(50, 340, 90, 90));
        pushButton13->setStyleSheet(QStringLiteral("border-image: url(:/face/13.png);"));
        pushButton13->setFlat(true);
        pushButton19 = new QPushButton(Dialog);
        pushButton19->setObjectName(QStringLiteral("pushButton19"));
        pushButton19->setGeometry(QRect(50, 480, 90, 90));
        pushButton19->setStyleSheet(QStringLiteral("border-image: url(:/face/19.png);"));
        pushButton19->setFlat(true);
        pushButton20 = new QPushButton(Dialog);
        pushButton20->setObjectName(QStringLiteral("pushButton20"));
        pushButton20->setGeometry(QRect(220, 480, 90, 90));
        pushButton20->setStyleSheet(QStringLiteral("border-image: url(:/face/20.png);"));
        pushButton20->setFlat(true);
        pushButton21 = new QPushButton(Dialog);
        pushButton21->setObjectName(QStringLiteral("pushButton21"));
        pushButton21->setGeometry(QRect(390, 480, 90, 90));
        pushButton21->setStyleSheet(QStringLiteral("border-image: url(:/face/21.png);"));
        pushButton21->setFlat(true);
        pushButton22 = new QPushButton(Dialog);
        pushButton22->setObjectName(QStringLiteral("pushButton22"));
        pushButton22->setGeometry(QRect(560, 480, 90, 90));
        pushButton22->setStyleSheet(QStringLiteral("border-image: url(:/face/22.png);"));
        pushButton22->setFlat(true);
        pushButton23 = new QPushButton(Dialog);
        pushButton23->setObjectName(QStringLiteral("pushButton23"));
        pushButton23->setGeometry(QRect(730, 480, 90, 90));
        pushButton23->setStyleSheet(QStringLiteral("border-image: url(:/face/23.png);"));
        pushButton23->setFlat(true);
        pushButton24 = new QPushButton(Dialog);
        pushButton24->setObjectName(QStringLiteral("pushButton24"));
        pushButton24->setGeometry(QRect(900, 480, 90, 90));
        pushButton24->setStyleSheet(QStringLiteral("border-image: url(:/face/24.png);"));
        pushButton24->setFlat(true);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QString());
        exit_bt->setText(QString());
        pushButton1->setText(QString());
        pushButton2->setText(QString());
        pushButton3->setText(QString());
        pushButton4->setText(QString());
        pushButton5->setText(QString());
        pushButton7->setText(QString());
        pushButton8->setText(QString());
        pushButton9->setText(QString());
        pushButton10->setText(QString());
        pushButton6->setText(QString());
        pushButton11->setText(QString());
        pushButton14->setText(QString());
        pushButton16->setText(QString());
        pushButton17->setText(QString());
        pushButton18->setText(QString());
        pushButton12->setText(QString());
        pushButton15->setText(QString());
        pushButton13->setText(QString());
        pushButton19->setText(QString());
        pushButton20->setText(QString());
        pushButton21->setText(QString());
        pushButton22->setText(QString());
        pushButton23->setText(QString());
        pushButton24->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

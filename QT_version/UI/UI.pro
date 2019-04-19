#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T16:26:46
#
#-------------------------------------------------

QT       += core gui sql
QT       += network
QT       += xml

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    readerwindow.cpp \
    managerwindow.cpp \
    buyerwindow.cpp \
    dialog.cpp \
    eventmanagement.cpp \
    management.cpp \
    mymessagebox.cpp \
    citymanager.cpp

HEADERS  += mainwindow.h \
    readerwindow.h \
    managerwindow.h \
    buyerwindow.h \
    dialog.h \
    connection.h \
    eventmanagement.h \
    management.h \
    mymessagebox.h \
    citymanager.h

FORMS    += mainwindow.ui \
    readerwindow.ui \
    managerwindow.ui \
    buyerwindow.ui \
    dialog.ui \
    mymessagebox.ui

RESOURCES += \
    icons.qrc \
    images.qrc \
    small_unit.qrc \
    face.qrc \
    resources.qrc \
    about.qrc \
    weather.qrc

DISTFILES += \
    images/Blurred Background (25).jpg

#-------------------------------------------------
#
# Project created by QtCreator 2015-02-04T00:02:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D-Project1_QT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    WineriesClass.cpp \
    AdminAccess.cpp \
    adminwindow.cpp \
    contact.cpp

HEADERS  += mainwindow.h \
    shoppingCart.h \
    header.h \
    WineriesHeader.h \
    adminwindow.h \
    contact.h

FORMS    += mainwindow.ui \
    adminwindow.ui \
    contact.ui

RESOURCES += \
    Resource1.qrc \
    Res2.qrc

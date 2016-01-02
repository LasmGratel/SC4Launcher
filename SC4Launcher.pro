#-------------------------------------------------
#
# Project created by QtCreator 2015-12-27T17:45:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SC4Launcher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogoptions.cpp \
    readregistry.cpp

HEADERS  += mainwindow.h \
    dialogoptions.h \
    ui_dialogoptions.h \
    ui_mainwindow.h \
    readregistry.h

FORMS    += mainwindow.ui \
    dialogoptions.ui

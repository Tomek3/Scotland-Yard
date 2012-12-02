#-------------------------------------------------
#
# Project created by QtCreator 2012-12-02T18:21:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scotland_Yard_Project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    map.cpp \
    settings.cpp \
    userinterface.cpp

HEADERS  += mainwindow.h \
    map.h \
    settings.h \
    userinterface.h

FORMS    += mainwindow.ui \
    map.ui \
    settings.ui \
    userinterface.ui

#-------------------------------------------------
#
# Project created by QtCreator 2014-01-18T11:27:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    cellbutton.cpp

HEADERS  += mainwindow.h \
    game.h \
    cellbutton.h

FORMS    += mainwindow.ui
#-------------------------------------------------
#
# Project created by QtCreator 2016-07-04T14:09:17
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = strela-sklad
TEMPLATE = app


SOURCES += main.cpp\
        strela.cpp \
    order.cpp

HEADERS  += strela.h \
    order.h

FORMS    += strela.ui

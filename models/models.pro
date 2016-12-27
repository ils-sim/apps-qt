#-------------------------------------------------
#
# Project created by QtCreator 2016-12-26T17:37:59
#
#-------------------------------------------------

QT       -= core gui

TARGET = models
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += car.cpp \
    station.cpp \
    point.cpp \
    stationtype.cpp \
    cartype.cpp \
    carupdate.cpp \
    carstatus.cpp \
    carposition.cpp \
    controlcenter.cpp \
    user.cpp \
    emergency.cpp

HEADERS += car.h \
    station.h \
    point.h \
    stationtype.h \
    cartype.h \
    carupdate.h \
    carstatus.h \
    carposition.h \
    controlcenter.h \
    user.h \
    emergency.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}


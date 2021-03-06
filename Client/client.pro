#-------------------------------------------------
#
# Project created by QtCreator 2016-12-27T00:52:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -L../common/lib -L../build -lcommon -lmodels -lplugins
INCLUDEPATH += ../common/src/ ../models ../plugins
DEPENDPATH += ../common/src/ ../models ../plugins

SOURCES += main.cpp \
    MainWindow.cpp \
    LogViewer.cpp \
    MainInterface.cpp \
    PluginObserver.cpp \
    Models/Car.cpp \
    Models/CarPosition.cpp \
    Models/CarStatus.cpp \
    Models/CarType.cpp \
    Models/CarUpdate.cpp \
    Models/ControlCenter.cpp \
    Models/Emergency.cpp \
    Models/Point.cpp \
    Models/Station.cpp \
    Models/StationType.cpp \
    Models/User.cpp

HEADERS  += \
    MainWindow.h \
    LogViewer.h \
    MainInterface.h \
    PluginObserver.h \
    Models/Car.h \
    Models/CarPosition.h \
    Models/CarStatus.h \
    Models/CarType.h \
    Models/CarUpdate.h \
    Models/ControlCenter.h \
    Models/Emergency.h \
    Models/Model.h \
    Models/Point.h \
    Models/Station.h \
    Models/StationType.h \
    Models/User.h

FORMS    += \
    MainWindow.ui

SUBDIRS += \
    Models/models.pro


#-------------------------------------------------
#
# Project created by QtCreator 2018-06-01T09:15:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CAUserTool
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    logindialog.cpp

HEADERS  += \
    mainwindow.h \
    logindialog.h

FORMS    += \
    unlockmethod.ui \
    mainwindow.ui \
    logindialog.ui

RESOURCES += \
    causertool.qrc

OTHER_FILES += \
    images/ms_icon32.png

DISTFILES += \
    images/refresh_grey_36x36.png


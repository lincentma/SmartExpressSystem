#-------------------------------------------------
#
# Project created by QtCreator 2015-05-24T03:52:11
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kuaidisystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    postmanage.cpp \
    postoperation.cpp \
    postinput.cpp \
    postsearch.cpp \
    take.cpp \
    search.cpp \
    help.cpp \
    createpwd.cpp \
    sms.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    setting.cpp \
    databaseconnection.cpp

HEADERS  += mainwindow.h \
    postmanage.h \
    postoperation.h \
    postinput.h \
    postsearch.h \
    take.h \
    search.h \
    help.h \
    createpwd.h \
    sms.h \
    posix_qextserialport.h \
    qextserialbase.h \
    setting.h \
    databaseconnection.h

FORMS    += mainwindow.ui \
    postmanage.ui \
    postoperation.ui \
    postinput.ui \
    postsearch.ui \
    take.ui \
    search.ui \
    help.ui \
    setting.ui

RESOURCES += \
    resource.qrc

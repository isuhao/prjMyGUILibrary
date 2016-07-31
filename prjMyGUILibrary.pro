#-------------------------------------------------
#
# Project created by QtCreator 2016-03-04T15:46:56
#
#-------------------------------------------------

QT       += widgets

TARGET = prjMyGUILibrary
TEMPLATE = lib

DEFINES += PRJMYGUILIBRARY_LIBRARY

SOURCES += prjmyguilibrary.cpp

HEADERS += prjmyguilibrary.h\
        prjmyguilibrary_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

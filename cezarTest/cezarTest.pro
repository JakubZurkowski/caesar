#-------------------------------------------------
#
# Project created by QtCreator 2016-08-17T20:00:03
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_cezar
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    tst_cezar.cpp \
    ../Cezar.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

QMAKE_CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer
QMAKE_LFLAGS+="-fsanitize=address"

QT += core serialport
QT -= gui

CONFIG += c++11

TARGET = justtestExe
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    test.cpp \
    testqfsm.cpp \
    testqfsmstate1.cpp \
    directtransition.cpp \
    testqfsmdb.cpp \
    testqfsmstate2.cpp \
    testqfsmstate3.cpp \
    testsignal.cpp \
    testqfsmstate4.cpp \
    testqfsmstate5.cpp \
    testqfsmstate6.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    anlogger.h \
    test.h \
    testqfsm.h \
    testqfsmstate1.h \
    directtransition.h \
    testqfsmdb.h \
    testqfsmstate2.h \
    testqfsmstate3.h \
    testsignal.h \
    testqfsmstate4.h \
    testqfsmstate5.h \
    testqfsmstate6.h

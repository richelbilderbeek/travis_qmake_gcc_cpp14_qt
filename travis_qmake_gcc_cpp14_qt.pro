QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app

SOURCES += main.cpp

RESOURCES += \
    travis_qmake_gcc_cpp14_qt.qrc

# C++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
QMAKE_CXXFLAGS += -std=c++14

# Thanks to Qt 
QMAKE_CXXFLAGS += -Wno-unused-variable

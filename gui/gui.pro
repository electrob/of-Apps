######################################################################
# Automatically generated by qmake (3.1) Mon Dec 12 00:01:26 2022
######################################################################


greaterThan(QT_MAJOR_VERSION, X): QT += widgets
QT += network gui core
QT += widgets

TEMPLATE = app
TARGET = gui
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += src/mainwindow.h src/network/udp_server.h
FORMS += src/art_tool.ui
SOURCES += src/main.cpp src/mainwindow.cpp src/network/udp_server.cpp

release: DESTDIR = build/release
debug:   DESTDIR = build/debug

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui
#-------------------------------------------------
#
# Project created by QtCreator 2010-11-17T10:33:46
#
#-------------------------------------------------

QT += opengl

TARGET = felChess
CONFIG   += console
CONFIG   -= app_bundle

TRANSLATIONS = felchess_en.ts \
    felchess_cs.ts

TEMPLATE = app


SOURCES += main.cpp \
    model/chessboard.cpp \
    view/mainwindow.cpp \
    controller/game/game.cpp \
    controller/network/network.cpp \
    view/widgets/boardwidget.cpp \
    view/widgets/infowidget.cpp \
    view/widgets/chatwidget.cpp \
    view/widgets/centerwidget.cpp

HEADERS += \
    model/chessboard.h \
    view/mainwindow.h \
    controller/game/game.h \
    controller/network/network.h \
    globals.h \
    view/widgets/boardwidget.h \
    view/widgets/infowidget.h \
    view/widgets/chatwidget.h \
    view/widgets/centerwidget.h

RESOURCES += \
    resource.qrc

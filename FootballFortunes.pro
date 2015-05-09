QT += core gui widgets

CONFIG += console c++11

FORMS += \
    formdeckwidget.ui \
    formmainwindow.ui

HEADERS += \
    deck.h \
    deckwidget.h \
    formdeckwidget.h \
    formmainwindow.h \
    mainwindow.h \
    manager.h \
    team.h

SOURCES += \
    deck.cpp \
    deckwidget.cpp \
    formdeckwidget.cpp \
    formmainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    manager.cpp \
    team.cpp

RESOURCES += \
    cardsList.qrc \
    data.qrc \
    images.qrc


QT += core gui widgets

CONFIG += console c++11

FORMS += \
    formmainwindow.ui \
    formcarddialog.ui \
    formadddialog.ui

HEADERS += \
    src/deck.h \
    forms/formmainwindow.h \
    src/mainwindow.h \
    src/manager.h \
    src/team.h \
    forms/formcarddialog.h \
    src/carddialog.h \
    forms/formadddialog.h

SOURCES += \
    src/deck.cpp \
    main.cpp \
    src/mainwindow.cpp \
    src/manager.cpp \
    src/team.cpp \
    src/carddialog.cpp \
    forms/form_carddialog.cpp \
    forms/form_mainwindow.cpp \
    forms/formadddialog.cpp

RESOURCES += \
    cardsList.qrc \
    data.qrc \
    images.qrc

INCLUDEPATH += src forms


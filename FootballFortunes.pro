QT += core gui widgets

CONFIG += console c++11

FORMS += \
    formmainwindow.ui \
    formcarddialog.ui \
    formadddialog.ui

HEADERS += \
    src/deck.h \
    form/form_mainwindow.h \
    src/mainwindow.h \
    src/manager.h \
    src/team.h \
    form/form_carddialog.h \
    src/carddialog.h \
    form/form_adddialog.h \
    src/adddialog.h

SOURCES += \
    src/deck.cpp \
    main.cpp \
    src/mainwindow.cpp \
    src/manager.cpp \
    src/team.cpp \
    src/carddialog.cpp \
    form/form_carddialog.cpp \
    form/form_mainwindow.cpp \
    form/form_adddialog.cpp \
    src/adddialog.cpp

RESOURCES += \
    cardsList.qrc \
    data.qrc \
    images.qrc

INCLUDEPATH += src form


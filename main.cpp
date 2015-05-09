#include <QApplication>
#include <QDebug>
#include "mainwindow.h"
#include "deckwidget.h"

int main (int argc, char **argv)
{
    QApplication FuManager (argc,argv);


    MainWindow Manager;

    Manager.show();




    return FuManager.exec();
}


#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    ManagerLuck->setImage(":/images/Money");
    ManagerLuck->readData(":/cards/ManagersLuck");
    SelectionProblems->setImage(":/images/FootballPlayer");
    SelectionProblems->readData(":/cards/SelectionProblems");
}

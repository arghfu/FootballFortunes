#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_formmainwindow.h"
#include "deck.h"
#include "carddialog.h"

class MainWindow final : public QMainWindow, private Ui::FormMainWindow
{
    Q_OBJECT

    Deck *managersLuck;
    Deck *selectionProblems;

public:
    explicit MainWindow(QWidget *parent = 0);

signals:

public slots:

private slots:
    void on_ManagersCardButton_clicked();
    void on_ProblemsCardButton_clicked();
};

#endif // MAINWINDOW_H

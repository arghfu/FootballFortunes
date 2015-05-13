#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    managersLuck = new Deck(":/cards/ManagersLuck");
    selectionProblems = new Deck(":/cards/SelectionProblems");

}

void MainWindow::on_ManagersCardButton_clicked()
{
    CardDialog *managersDialog = new CardDialog;
    QPixmap pixmap(":/images/Money");
    managersDialog->cardStringLabel->setText("Managers Luck");
    managersDialog->whichCardLabel->setText(managersLuck->takeCard());
    managersDialog->imageLabel->setPixmap(pixmap);
    managersDialog->show();

}

void MainWindow::on_ProblemsCardButton_clicked()
{
    CardDialog *selectionDialog = new CardDialog;
    QPixmap pixmap(":/images/FootballPlayer");
    selectionDialog->cardStringLabel->setText("Selection Problems");
    selectionDialog->whichCardLabel->setText(selectionProblems->takeCard());
    selectionDialog->imageLabel->setPixmap(pixmap);
    selectionDialog->show();
}

#ifndef FORMADDDIALOG_H
#define FORMADDDIALOG_H

#include <QDialog>

namespace Ui {
class FormAddDialog;
}

class FormAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FormAddDialog(QWidget *parent = 0);
    ~FormAddDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::FormAddDialog *ui;
};

#endif // FORMADDDIALOG_H

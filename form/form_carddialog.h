#ifndef FORMCARDDIALOG_H
#define FORMCARDDIALOG_H

#include <QDialog>

namespace Ui {
    class FormCardDialog;
}

class FormCardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FormCardDialog(QWidget *parent = 0);
    ~FormCardDialog();

private:
    Ui::FormCardDialog *ui;
};

#endif // FORMCARDDIALOG_H

#ifndef CARDDIALOG_H
#define CARDDIALOG_H
#include "ui_formcarddialog.h"


class CardDialog : public QDialog, public Ui::FormCardDialog
{
public:
    CardDialog();
    void on_okButton_clicked();
};

#endif // CARDDIALOG_H

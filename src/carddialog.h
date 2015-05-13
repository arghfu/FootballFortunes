#ifndef CARDDIALOG_H
#define CARDDIALOG_H
#include "ui_formcarddialog.h"


class CardDialog : public QDialog, public Ui::FormCardDialog
{
public:
    CardDialog();
    void on_okButton_clicked();
private slots:
    void on_imageLabel_linkActivated(const QString &link);
};

#endif // CARDDIALOG_H

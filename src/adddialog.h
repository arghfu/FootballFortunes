#ifndef ADDDIALOG_H
#define ADDDIALOG_H
#include <QWidget>
#include "ui_formadddialog.h"


class addDialog : public QWidget , private Ui::FormAddDialog
{
    Q_OBJECT
public:
    explicit addDialog(QWidget *parent = 0);

signals:

public slots:
};

#endif // ADDDIALOG_H

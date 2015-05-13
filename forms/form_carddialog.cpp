#include "formcarddialog.h"
#include "ui_formcarddialog.h"

FormCardDialog::FormCardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormCardDialog)
{
    ui->setupUi(this);
}

FormCardDialog::~FormCardDialog()
{
    delete ui;
}

#include "formadddialog.h"
#include "ui_formadddialog.h"

FormAddDialog::FormAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormAddDialog)
{
    ui->setupUi(this);
}

FormAddDialog::~FormAddDialog()
{
    delete ui;
}

#include "formdeckwidget.h"
#include "ui_formdeckwidget.h"

FormDeckWidget::FormDeckWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDeckWidget)
{
    ui->setupUi(this);
}

FormDeckWidget::~FormDeckWidget()
{
    delete ui;
}

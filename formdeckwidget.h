#ifndef FORMDECKWIDGET_H
#define FORMDECKWIDGET_H

#include <QWidget>

namespace Ui {
class FormDeckWidget;
}

class FormDeckWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FormDeckWidget(QWidget *parent = 0);
    ~FormDeckWidget();

private:
    Ui::FormDeckWidget *ui;
};

#endif // FORMDECKWIDGET_H

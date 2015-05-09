#ifndef DECKWIDGET_H
#define DECKWIDGET_H

#include <QWidget>
#include "deck.h"
#include "ui_formdeckwidget.h"

class DeckWidget : public QWidget , private Ui::FormDeckWidget
{
    Q_OBJECT

private:
    Deck cardDeck;

public:
    explicit DeckWidget(QWidget *parent = 0);
    void readData(QString filename);
    void setImage(QString filename);

signals:

public slots:
    void shuffle ();
    void takeCard();

};

#endif // DECKWIDGET_H

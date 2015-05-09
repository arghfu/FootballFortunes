#include "deckwidget.h"

DeckWidget::DeckWidget(QWidget *parent) : QWidget(parent)
{
    this->setupUi(this);
    connect(TakeCardButton, SIGNAL(clicked()), this, SLOT(takeCard()));

}

void DeckWidget::readData(QString filename)
{
    cardDeck.readData(filename);
}

void DeckWidget::setImage(QString filename)
{
    imageLabel->setPixmap(filename);
}

void DeckWidget::shuffle()
{
    cardDeck.shuffleDeck();
}

void DeckWidget::takeCard()
{
    DrawnCardLabel->setText(cardDeck.takeCard());
}

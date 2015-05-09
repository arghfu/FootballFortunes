#ifndef DECK_H
#define DECK_H
#include <QtCore>
#include <algorithm>
#include <random>
#include <chrono>

class Deck {

private:
    QList<QString> cards;
public:
    Deck();
    void readData(QString filename);
    void shuffleDeck();
    QString takeCard();
    int count();
    bool isEmpty();
    void outs();
};

#endif // DECK_H

#ifndef DECK_H
#define DECK_H
#include <QtCore>
#include <algorithm>
#include <random>
#include <chrono>

class Deck {

private:
    QList<QString> cards;
    QString filename;
public:
    Deck():Deck (""){};
    Deck(const QString &filename);
    auto shuffleDeck() -> void;
    auto takeCard() -> QString;
};

#endif // DECK_H

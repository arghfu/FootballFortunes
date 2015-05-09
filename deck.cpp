#include "deck.h"

Deck::Deck()
{
}

void Deck::readData(QString filename)
{
    QFile inputFile(filename);
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&inputFile);
        stream.setCodec("UTF-8");
        while (!stream.atEnd()) {
            this->cards.append(stream.readLine());
        }
    }
    else {qDebug("scheisse");}
}

void Deck::shuffleDeck()
{
   unsigned int seeed = std::chrono::system_clock::now().time_since_epoch().count();
   std::shuffle(cards.begin(),cards.end(),std::default_random_engine(seeed));
}

QString Deck::takeCard()
{
    QString tmpCard;
    tmpCard = cards.back();
    cards.removeLast();
    return tmpCard;
}

bool Deck::isEmpty()
{
    return cards.isEmpty();
}

int Deck::count()
{
    return cards.count();
}

void Deck::outs()
{
    for (auto i : cards){
        qDebug()<< i;
    }
}

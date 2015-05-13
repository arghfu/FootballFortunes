#include "deck.h"

Deck::Deck(const QString& filename) : filename(filename)
{
    QFile inputFile(filename);
    try
    {
        if (!inputFile.open(QIODevice::ReadOnly))
        {
            throw QString ("Cannot open File "+ filename);
        }
        else
        {
            QTextStream stream(&inputFile);
            stream.setCodec("UTF-8");
            while (!stream.atEnd())
            {
              this->cards.append(stream.readLine());
            }
        }
    }
    // ErrorClass !!!
    catch (QString msg)
    {
        qDebug()<< "Error: "<<msg;
    }
}

auto Deck::shuffleDeck() -> void
{
   unsigned int seeed = std::chrono::system_clock::now().time_since_epoch().count();
   std::shuffle(cards.begin(),cards.end(),std::default_random_engine(seeed));
}

auto Deck::takeCard() -> QString
{
    if (cards.isEmpty())
    {
        shuffleDeck();
    }
    QString tmpCard;
    tmpCard = cards.back();
    cards.removeLast();
    return tmpCard;
}

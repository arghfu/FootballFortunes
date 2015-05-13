#include "manager.h"

Manager::Manager(): money(0)
{
    stats.insert("Won",0);
    stats.insert("Drawn",0);
    stats.insert("Lost",0);
    stats.insert("Points",0);
}

Manager::Manager(QString name) : name(name), money(0)
{
    stats.insert("Won",0);
    stats.insert("Drawn",0);
    stats.insert("Lost",0);
    stats.insert("Points",0);
}

Manager::Manager(QString name, QString team) : name(name),team(team), money(0)
{
    stats.insert("Won",0);
    stats.insert("Drawn",0);
    stats.insert("Lost",0);
    stats.insert("Points",0);
}

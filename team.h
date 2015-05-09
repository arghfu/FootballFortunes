#ifndef TEAM_H
#define TEAM_H

#include <QtCore>
#include <QtGui>

class Team
{
private:
    QString name;
    QMap<QString,int> teamRating;

public:
    Team();
    Team(QString name);
};

#endif // TEAM_H

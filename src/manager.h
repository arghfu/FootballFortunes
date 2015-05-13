#ifndef MANAGER_H
#define MANAGER_H

#include <QtCore>
#include <team.h>

class Manager
{
private:
    QMap<QString, int> stats;
    QString name;
    Team team;        
    int money;

public:
    Manager();
    Manager(const QString name);
    Manager(const QString name,const QString team);
};

#endif // MANAGER_H

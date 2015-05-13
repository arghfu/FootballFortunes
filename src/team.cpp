#include "team.h"


Team::Team() : name("")
{
    teamRating.insert("offensive", 0);
    teamRating.insert("defensive", 0);
}

Team::Team(QString name) : name (name)
{
    teamRating.insert("offensive", 0);
    teamRating.insert("defensive", 0);
}


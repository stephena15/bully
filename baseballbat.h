#ifndef BASEBALLBAT_H
#define BASEBALLBAT_H

#include "Actor.h"
#include "item.h"



class BaseballBat : public Item<Actor>
{
public:
    BaseballBat();
    void use(Actor& actor);
};

#endif // BASEBALLBAT_H

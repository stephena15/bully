#ifndef BASEBALLBAT_H
#define BASEBALLBAT_H

#include "Actor.h"
#include "item.h"

#include <Weapon.h>



class BaseballBat : public Weapon
{
public:
    int damage = 10;
    BaseballBat();
};

#endif // BASEBALLBAT_H

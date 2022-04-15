#ifndef WEAPON_H
#define WEAPON_H

#include <actor.h>
#include <item.h>



class Weapon: public Item<Actor>
{
public:
    int damage = 0;
    Weapon();
    void use(Actor& actor);
};

#endif // WEAPON_H

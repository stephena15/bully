#include "Weapon.h"

Weapon::Weapon()
{

}
void Weapon::use(Actor& actor){
    actor.health-=this->damage;
}

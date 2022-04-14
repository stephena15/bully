#include "actor.h"

Actor::Actor()
{

}
Actor::Actor(const string& name, const int& health){
    this->name = name;
    this->health = health;
}

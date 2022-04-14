#ifndef ACTOR_H
#define ACTOR_H

#include <string>


using namespace std;
class Actor
{
    public:
        string name;
        int health;
        Actor();
        Actor(const string& name, const int& health);
};

#endif // ACTOR_H

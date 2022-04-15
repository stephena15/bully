#ifndef ROOM_H
#define ROOM_H


#include <Weapon.h>
#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "actor.h"
#include "dialog.h"

using namespace std;
using std::vector;

class Room{

private:


    string exitString();




public:
    map<string, Room*> exits;
    string id;
    string tempExit;
    Room(string id);
    Dialog* currentDialog = nullptr;
    void setExits(Room *north, Room *east, Room *south, Room *west);
    vector<Room> getExits();
    vector <Weapon> WeaponInRoom;
    vector <Actor> peopleInRoom;
    vector<Dialog*> roomDialogs;
    Room* nextRoom(string direction);
    void addWeapon(Weapon *weapon);
    void addActor(Actor *InActor);
    void addDialog(Dialog* dialog);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);

};


#endif // ROOM_H

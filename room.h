#ifndef ROOM_H
#define ROOM_H


#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "Actor.h"
#include "dialog.h"

using namespace std;
using std::vector;

class Room{

private:

    map<string, Room*> exits;
    string exitString();




public:
    string id;
    Room(string id);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    vector <Item<void*>> itemsInRoom;
    vector <Actor> peopleInRoom;
    vector<Dialog*> roomDialogs;
    Room* nextRoom(string direction);
    void addItem(Item<void*> *inItem);
    void addActor(Actor *InActor);
    void addDialog(Dialog* dialog);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);

};


#endif // ROOM_H

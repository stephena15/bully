#include "room.h"

#include <QDebug>

Room::Room(string id)
{
    this->id = id;
}
void Room::setExits(Room *north, Room *east, Room *south, Room *west) {
   if (north != nullptr)
        exits["north"] = north;
    if (east != nullptr)
        exits["east"] = east;
    if (south != nullptr)
        exits["south"] = south;
    if (west != nullptr)
        exits["west"] = west;

}

string Room::exitString() {
    string returnString = "\nexits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        // Loop through map
        returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
    return returnString;
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction); //returns an iterator for the "pair"
    if (next == exits.end())
        return NULL; // if exits.end() was returned, there's no room in that direction.
    return next->second; // If there is a room, remove the "second" (Room*)
                // part of the "pair" (<string, Room*>) and return it.
}

void Room::addWeapon(Weapon  *weapon){
    WeaponInRoom.push_back(*weapon);
}
void Room::addActor(Actor *InActor){
    peopleInRoom.push_back(*InActor);
}
vector<Room> Room::getExits(){
    vector<Room> allExit;
    if(exits["north"]!=nullptr){
        allExit.push_back(*exits["north"]);
    }
    if(exits["south"]!=nullptr){
        allExit.push_back(*exits["south"]);
    }
    if(exits["east"]!=nullptr){
        allExit.push_back(*exits["east"]);
    }
    if(exits["west"]!=nullptr){
        allExit.push_back(*exits["west"]);
    }
    return allExit;
}
void Room::addDialog(Dialog* dialog){
    roomDialogs.push_back(dialog);
}
string displayItem();
int Room::isItemInRoom(string inString){}
void Room::removeItemFromRoom(int location){}

//

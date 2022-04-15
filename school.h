#ifndef SCHOOL_H
#define SCHOOL_H

#include "room.h"

#include <Player.h>



class School
{
private:
    Room *x,*a,*b,*c,*d,*e,*f, *g,*h,*i,*j;
    vector<Dialog*> dialogs;
    void createClassRooms();

public:
      explicit School(Player& player);
      void enterClass(const string& direction);
      Player* player = nullptr;
      Room *currentRoom = nullptr;
};

#endif // SCHOOL_H

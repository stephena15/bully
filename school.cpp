#include "school.h"

#include <QDebug>

School::School(Player& player)
{
    this->player = &player;
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Insult Teacher"));
    dialogs.push_back(new Dialog("Hi"));
    dialogs.push_back(new Dialog("bye"));
    dialogs.push_back(new Dialog("slap"));
    dialogs.push_back(new Dialog("eat"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));
    dialogs.push_back(new Dialog("Welcome to Mount Cell elementry"));

    dialogs[0]->addLinkDialog(dialogs[3]);
    dialogs[0]->addLinkDialog(dialogs[5]);
    createClassRooms();

}
void School::enterClass(const string& direction){
    Room* nextRoom = currentRoom->nextRoom(direction);
    if(nextRoom!=nullptr)currentRoom = nextRoom;
    if(currentRoom->roomDialogs.size()>0)
    currentRoom->currentDialog = currentRoom->roomDialogs[0];
    qDebug()<<QString::fromStdString(currentRoom->id);

}
void School::createClassRooms(){
    x = new Room("x");
    x->addDialog(dialogs[0]);
    a = new Room("a");
    b = new Room("b");
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
    f = new Room("f");
    g = new Room("g");
    h = new Room("h");
    i = new Room("i");
    j = new Room("j");

    x->setExits(c,b,nullptr,a);
    a->setExits(d,x,f,e);
    b->setExits(g,h,i,x);
    c->setExits(j,nullptr,x,nullptr);
    d->setExits(nullptr,nullptr,a,nullptr);
    e->setExits(nullptr,a,nullptr,nullptr);
    f->setExits(a,nullptr,nullptr,nullptr);
    g->setExits(nullptr,nullptr,b,nullptr);
    h->setExits(nullptr,nullptr,nullptr,b);
    i->setExits(b,nullptr,nullptr,nullptr);
    j->setExits(nullptr,nullptr,c,nullptr);

    currentRoom = x;
    currentRoom->currentDialog = currentRoom->roomDialogs[0];
}

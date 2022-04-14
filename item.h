#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

template <typename T>
class Item
{
public:
    string name = "";
    string img = "";
    string value = 0;
    Item();
    virtual void use(T& applyTo) = 0; //pure virtual function // interface
};

#endif // ITEM_H

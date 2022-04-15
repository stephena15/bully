#include "dialog.h"

#include <QDebug>



Dialog::~Dialog(){}
Dialog::Dialog(string message){
    this->message = message;
}
void Dialog::addLinkDialog(Dialog* dialog){
    qDebug()<<"Added";
    this->linkedMessgaes.push_back(dialog);
}
void Dialog::setMessage(string message){
    this->message = message;
}
string Dialog::getMessage(){
    return this->message;
}
vector<Dialog*> Dialog::getLinkedDialog(){
    return this->linkedMessgaes;
}
Dialog* Dialog::getDialog(string key){
    for(Dialog* d :  this->linkedMessgaes){
        if(key == d->message)
            return d;
    }
}


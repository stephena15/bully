#include "dialog.h"


Dialog::Dialog(){}
Dialog::~Dialog(){}
Dialog::Dialog(string message){
    this->message = message;
}
void Dialog::addLinkDialog(Dialog* dialog){
    this->linkedMessgaes.push_back(dialog);
}
void Dialog::setMessage(string message){
    this->message = message;
}
Dialog* Dialog::getDialog(string key){
    for(Dialog* d :  this->linkedMessgaes){
        if(key == d->message)
            return d;
    }
}


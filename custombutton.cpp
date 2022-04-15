#include "custombutton.h"


CustomButton::CustomButton(QWidget* parent, Qt::WindowFlags f)
    : QPushButton(parent) {



}

CustomButton::~CustomButton() {}

void CustomButton::mousePressEvent(QMouseEvent* event) {
    if(dialog != nullptr)emit clicked(dialog);
     if(room!=nullptr)emit clicked(room);
}

template<typename T>
void CustomButton::mousePressEvent(QMouseEvent* event, T& something) {
    emit clicked(something);
}

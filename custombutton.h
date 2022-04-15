#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <dialog.h>
#include <QPushButton>
#include <Room.h>

class CustomButton : public QPushButton
{
    Q_OBJECT

public:
    explicit CustomButton(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~CustomButton();
    Dialog* dialog=nullptr;
    Room* room = nullptr;
    void mousePressEvent(int);

signals:
    void clicked();
    void clicked(bool);
    void clicked(Dialog*);
    void clicked(Room*);

protected:
    void mousePressEvent(QMouseEvent* event);

    template<typename T>
    void mousePressEvent(QMouseEvent* event, T&);

};

#endif // CUSTOMBUTTON_H

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

/*
room1 => There is a lot of people in class today: [ pick a fight, talk to your friend bob, start eating in class, insult teacher]
            pick a fight => "Teacher: What do you think you're doing young man: [ tell teacher to shut up hit the teacher apologies ]
*/

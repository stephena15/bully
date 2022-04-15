#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <CustomButton.h>
#include <qpushbutton.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->school = new School(*player);
    updateStory();

}
void MainWindow::updateStory(){
    if(this->school->currentRoom != nullptr){
        Dialog* currentDialog = this->school->currentRoom->currentDialog;
        map<string,Room*> exits = this->school->currentRoom->exits;
        vector<Actor> people = this->school->currentRoom->peopleInRoom;
        vector<Weapon> weapons = this->school->currentRoom->WeaponInRoom;

        if(currentDialog!=nullptr){
            qDebug()<<currentDialog;
            ui->messageDisplay->setText(QString::fromStdString(currentDialog->getMessage()));
            qDebug()<<currentDialog->getLinkedDialog().size();
            for(Dialog* d : currentDialog->getLinkedDialog()){
                qDebug()<<"yo";
                CustomButton* button = new CustomButton();
                 button->dialog = d;
                button->setText(QString::fromStdString(d->getMessage()));
               // QObject::connect(button,SIGNAL(clicked(bool)),this,SLOT(onDialogClick(bool)));
                connect(button,SIGNAL(clicked(Dialog*)),this,SLOT(nextDialog(Dialog*)));

                ui->options->addWidget(button);
            }
            std::map<std::string, Room*>::iterator it = exits.begin();
               // Iterate over the map using Iterator till end.
               while (it != exits.end())
               {
                   // Accessing KEY from element pointed by it.
                   std::string word = it->first;
                   // Accessing VALUE from element pointed by it.
                   Room* room = it->second;
                   room->tempExit = word;
                   CustomButton* button = new CustomButton();
                     button->room = room;
                   button->setText(QString::fromStdString("Go to "+room->id));
                   connect(button,SIGNAL(clicked(Room*)),this,SLOT(nextRoom(Room*)));
                    ui->options->addWidget(button);
                   // Increment the Iterator to point to next entry
                   it++;
               }
//            for(Room& room : exits){
//                qDebug()<<"yo";
//                CustomButton* button = new CustomButton();
//                  button->room = &room;
//                button->setText(QString::fromStdString("Go to "+room.id));
//                connect(button,SIGNAL(clicked(Room*)),this,SLOT(nextRoom(Room*)));


//                ui->options->addWidget(button);
//            }
            for(Actor& a : people){
                qDebug()<<"yo";
                QPushButton* button = new QPushButton();
                button->setText(QString::fromStdString("Interact with "+a.name));
                ui->options->addWidget(button);
            }
            for(Weapon& w : weapons){
                qDebug()<<"yo";
                QPushButton* button = new QPushButton();
                button->setText(QString::fromStdString("Pick up "+w.name));
                ui->options->addWidget(button);
            }
        }

    }
}
void MainWindow::nextDialog(Dialog* dialog){
    qDebug()<<"lick";
    qDebug()<<QString::fromStdString(dialog->getMessage());
    this->school->currentRoom->currentDialog = dialog;
    while (ui->options->count()!=0) {
        QLayoutItem* item = ui->options->takeAt(0);
        delete item->widget();
        delete item;
    }
    updateStory();
}
void MainWindow::nextRoom(Room* room){
  qDebug()<<QString::fromStdString(room->tempExit);
    this->school->enterClass(room->tempExit);
    while (ui->options->count()!=0) {
        QLayoutItem* item = ui->options->takeAt(0);
        delete item->widget();
        delete item;
    }
   // updateStory();
}
void MainWindow::onDialogClick(bool){
    //emit nextDialog(currentDialog);
}
MainWindow::~MainWindow()
{
    delete ui;
}


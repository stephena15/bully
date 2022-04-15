#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <school.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void onDialogChange(Dialog);
public:
    School *school;
    Player *player;
    Dialog* currentDialog;
    void updateStory();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void nextDialog(Dialog*);
    void nextRoom(Room*);
    void onDialogClick(bool);
};
#endif // MAINWINDOW_H

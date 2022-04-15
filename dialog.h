#ifndef DIALOG_H
#define DIALOG_H

#include <map>
#include <string>
#include <vector>

using namespace std;
class Dialog
{

private:
    string message;
    vector<Dialog*> linkedMessgaes;
public:
    ~Dialog();
    Dialog(string message);
    void addLinkDialog(Dialog*);
    vector<Dialog*> getLinkedDialog();
    void setMessage(string message);
    string getMessage();
    Dialog* getDialog(string key);

};
/*
Dialog("Hello world");
Dialog("Shut up");

"Hello World" -> [ "Shut up" ]
*/
#endif // DIALOG_H

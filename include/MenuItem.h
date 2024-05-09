#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string.h>

#include <User.h>

using namespace std;

class MenuItem {
    public:
        MenuItem(int code, string title, string decorator = "");
        string getTitleToShow();
        void setDecorator(string decorator);
        int getCode();
        virtual void execute(User* user = NULL);

    protected:

    private:
        string _title;
        string _decorator;
        int _code;
};

#endif // MENUITEM_H

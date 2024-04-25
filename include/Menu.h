#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string.h>
#include <MenuItem.h>

using namespace std;

class Menu
{
    public:
        Menu(MenuItem (&opts)[5]);
        virtual ~Menu();
        void printMenu();
        int waitForOption();
        bool checkIfOptionIsValid(int option);

    protected:

    private:
        MenuItem (&options)[5];
};

#endif // MENU_H

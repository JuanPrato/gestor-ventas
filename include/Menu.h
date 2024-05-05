#ifndef MENU_H
#define MENU_H

#include <MenuItem.h>

using namespace std;

class Menu
{
    public:
        Menu(int menuItemsQuantity);
        virtual ~Menu();
        void printMenu();
        int waitForOption();
        bool checkIfOptionIsValid(int option);
        void executeOption(int option);
        void createMenuLoop();
        void addMenuItem(MenuItem* menuItem);

    protected:

    private:
        MenuItem **_options;
        int _optionsQuantity;
        int _currentOptions = 0;
};

#endif // MENU_H

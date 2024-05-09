#ifndef MENU_H
#define MENU_H

#include <MenuItem.h>
#include <User.h>

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
        void createMenuLoop(bool oneTime = false);
        void addMenuItem(MenuItem* menuItem);
        void setHeader(string header);
        void setUser(User* user);

    protected:

    private:
        MenuItem **_options;
        int _optionsQuantity;
        int _currentOptions = 0;
        string _header;
        User* _user;
};

#endif // MENU_H

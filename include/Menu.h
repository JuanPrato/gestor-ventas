#ifndef MENU_H
#define MENU_H

#include <MenuItem.h>
#include <User.h>
#include <AuthManager.h>

using namespace std;

class Menu
{
    public:
        Menu(int menuItemsQuantity, AuthManager* authManager = new AuthManager());
        virtual ~Menu();
        void printMenu();
        int waitForOption();
        bool checkIfOptionIsValid(int option);
        void createMenuLoop(bool oneTime = false);
        void addMenuItem(MenuItem* menuItem);
        void setHeader(string header);

    protected:

    private:
        MenuItem **_options;
        int _optionsQuantity;
        int _currentOptions = 0;
        string _header;
        AuthManager* _authManager;
        int executeOption(int option);
        void printHeader();
};

#endif // MENU_H

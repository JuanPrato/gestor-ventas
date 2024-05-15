#include "AuthManager.h"

#include <Menu.h>

#include <LoginItem.h>
#include <RegisterItem.h>
#include <Exit.h>

AuthManager::AuthManager() {
    _user = new User();
}

AuthManager::~AuthManager() {
    delete _user;
}

void AuthManager::askForLogin() {
    const string authHeader = "Gestor de ventas: 0.0.1\nPor favor ingrese para continuar\n=====================";

    Menu menu(10, this);
    menu.setHeader(authHeader);

    menu.addMenuItem(new LoginItem());
    menu.addMenuItem(new RegisterItem());
    //menu.addMenuItem(new Exit());

    while (string("").compare(this->_user->getEmail()) == 0) {
        system("cls");
        menu.createMenuLoop(true);
    }

}

User* AuthManager::getUser() {
    return _user;
}

void AuthManager::updateUser(User *user) {
    _user = user;
}

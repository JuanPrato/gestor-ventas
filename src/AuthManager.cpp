#include "AuthManager.h"

#include <Menu.h>

#include <LoginItem.h>
#include <RegisterItem.h>
#include <Exit.h>

AuthManager::AuthManager()
{
    //ctor
}

User* AuthManager::askForLogin() {
    const string authHeader = "Gestor de ventas: 0.0.1\nPor favor ingrese para continuar\n=====================";

    User* user = new User;

    Menu menu(10);
    menu.setUser(user);
    menu.setHeader(authHeader);

    menu.addMenuItem(new LoginItem());
    menu.addMenuItem(new RegisterItem());
    menu.addMenuItem(new Exit());

    while (string("").compare(user->getEmail()) == 0) {
        system("cls");
        menu.createMenuLoop(true);
    }

    return user;
}

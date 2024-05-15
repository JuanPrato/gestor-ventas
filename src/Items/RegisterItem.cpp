#include "RegisterItem.h"
#include "UsersManager.h"

RegisterItem::RegisterItem(): MenuItem(2, "Registrarse") {
    //ctor
}

RegisterItem::~RegisterItem() {
    //dtor
}

int RegisterItem::execute(AuthManager &authManager) {
    string username;
    string email;
    string password;
    int role;

    fflush(stdin);

    cout << "Ingresar su nombre de usuario:" << endl;
    getline(cin, username);

    cout << "Ingresar su email:" << endl;
    getline(cin, email);

    cout << "Ingresar su password:" << endl;
    cin >> password;

    cout << "Ingresar su rol:" << endl;
    cin >> role;

    User newUser(username, email, password, role);

    UsersManager::registerAccount(newUser);

    return 0;
}

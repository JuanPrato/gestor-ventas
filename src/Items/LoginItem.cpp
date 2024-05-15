#include "LoginItem.h"
#include "UsersManager.h"

using namespace std;

LoginItem::LoginItem(): MenuItem(1, "Ingresar") {
    //ctor
}

LoginItem::~LoginItem() {
    //dtor
}

int LoginItem::execute(AuthManager &authManager) {

    string email;
    string password;

    fflush(stdin);

    cout << "Ingresar su email" << endl;

    getline(cin, email);

    cout << "Ingresar su password" << endl;

    getline(cin, password);

    User* u = UsersManager::login(email, password);

    if (string("").compare(u->getEmail()) != 0) {
        authManager.updateUser(u);
    }

    return 0;
}

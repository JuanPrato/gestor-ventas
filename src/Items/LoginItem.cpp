#include "LoginItem.h"
#include "UsersManager.h"

using namespace std;

LoginItem::LoginItem(): MenuItem(1, "Ingresar") {
    //ctor
}

LoginItem::~LoginItem() {
    //dtor
}

int LoginItem::execute(User &user) {

    string email;
    string password;

    cout << "Ingresar su email" << endl;

    cin >> email;

    cout << "Ingresar su password" << endl;

    cin >> password;

    User* u = UsersManager::login(email, password);

    if (string("").compare(u->getEmail()) != 0) {
        user = *u;
    }

    return 0;
}

#include "LoginItem.h"
#include "Usuarios.h"

using namespace std;

LoginItem::LoginItem(): MenuItem(1, "Ingresar") {
    //ctor
}

LoginItem::~LoginItem() {
    //dtor
}

void LoginItem::execute(User* user) {

    string email;
    string password;

    cout << "Ingresar su email" << endl;

    cin >> email;

    cout << "Ingresar su password" << endl;

    cin >> password;

    User* u = login(email, password);

    if (u->getEmail() != "") {
        *user = *u;
    }

}

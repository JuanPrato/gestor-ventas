#include "RegisterItem.h"
#include "Usuarios.h"
#include "Ventas.h"

RegisterItem::RegisterItem(): MenuItem(2, "Registrarse") {
    //ctor
}

RegisterItem::~RegisterItem() {
    //dtor
}

void RegisterItem::execute(User* user) {
    string email;
    string password;
    int role;

    cout << "Ingresar su email" << endl;
    cin >> email;

    cout << "Ingresar su password" << endl;
    cin >> password;

    cout << "Ingresar su rol" << endl;
    cin >> role;

    registerAccount(email, password, role);

}

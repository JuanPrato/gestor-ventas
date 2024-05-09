#include <iostream>
#include <string.h>

#include <AuthManager.h>
#include <Menu.h>
#include <MenuItem.h>
#include <LoginItem.h>
#include <Sales.h>
#include <Exit.h>

using namespace std;


int main() {

    // MenuItem OPTIONS[] = {"Generar nueva venta", "Productos", "Clientes", "Ventas"};

    AuthManager authManager;

    User* user = authManager.askForLogin();

    system("cls");
    cout << "HOLA";
    system("pause");
    const string header = "Gestor de ventas: 0.0.1\nBienvenido " + user->getEmail() + ": Por favor elige una opcion para continuar\n=======================";

    Menu menu(10);
    menu.setUser(user);
    menu.setHeader(header);

    menu.addMenuItem(new Sales());
    menu.addMenuItem(new MenuItem(2, "Clientes"));
    menu.addMenuItem(new MenuItem(3, "Productos"));
    menu.addMenuItem(new MenuItem(4, "Notificaciones", "(3)"));
    menu.addMenuItem(new Exit());

    menu.createMenuLoop();

    return 0;
}

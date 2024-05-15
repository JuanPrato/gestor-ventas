#include "Sales.h"
#include "Exit.h"

Sales::Sales(): MenuItem(1, "Ventas") {
    //ctor
}

Sales::~Sales()
{
    //dtor
}

int Sales::execute(AuthManager &authManager) {
    SalesManager::saveSale(Sale());

    Menu menu(10);
    menu.setHeader("Opciones de ventas:");

    menu.addMenuItem(new MenuItem(1, "Crear una nueva venta"));
    menu.addMenuItem(new MenuItem(2, "Ver ventas"));
    menu.addMenuItem(new Exit());

    menu.createMenuLoop();

    system("cls");

    return 0;
}

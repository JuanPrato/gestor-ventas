#include <iostream>
#include <string.h>
#include <Menu.h>
#include <MenuItem.h>
#include <Sales.h>
#include <Exit.h>

using namespace std;


int main() {

    // MenuItem OPTIONS[] = {"Generar nueva venta", "Productos", "Clientes", "Ventas"};
    Menu menu(10);
    menu.addMenuItem(new Sales());
    menu.addMenuItem(new MenuItem(2, "Clientes"));
    menu.addMenuItem(new MenuItem(3, "Productos"));
    menu.addMenuItem(new MenuItem(4, "Notificaciones", "(3)"));
    menu.addMenuItem(new Exit());

    menu.createMenuLoop();

    return 0;
}

#include <iostream>
#include <string.h>
#include <Menu.h>
#include <MenuItem.h>
#include <Exit.h>

using namespace std;


int main() {

    // MenuItem OPTIONS[] = {"Generar nueva venta", "Productos", "Clientes", "Ventas"};

    MenuItem OPTIONS[] = { MenuItem(1, "Generar nueva venta"), MenuItem(2, "Clientes"), MenuItem(3, "Ventas"), MenuItem(4, "Notificaciones"), Exit() };

    OPTIONS[3].setDecorator("(3)");

    Menu menu(OPTIONS);

    menu.printMenu();

    menu.waitForOption();

    return 0;
}

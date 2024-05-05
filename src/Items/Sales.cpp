#include "Sales.h"
#include <Menu.h>
#include <Ventas.h>

Sales::Sales(): MenuItem(1, "Ventas") {
    //ctor
}

Sales::~Sales()
{
    //dtor
}

void Sales::execute() {
    Menu menu(10);
    menu.addMenuItem(new MenuItem(1, "Crear una nueva venta"));
    menu.addMenuItem(new MenuItem(2, "Ver ventas"));
    menu.addMenuItem(new MenuItem(3, "Volver"));

    //menu.createMenuLoop();

    saveSale(SaleModel());
    getSale();
}

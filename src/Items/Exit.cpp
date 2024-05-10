#include "Exit.h"
#include "MenuItem.h"

Exit::Exit(): MenuItem(0, "Salir") {
}

int Exit::execute(User &user) {
    //cout << "Gracias por usar nuestro programa c:" << endl;
    return 1;
}

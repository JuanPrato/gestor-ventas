#include "Exit.h"
#include "MenuItem.h"

Exit::Exit(): MenuItem(0, "Salir") {
}

int Exit::execute(AuthManager &authManager) {
    //cout << "Gracias por usar nuestro programa c:" << endl;
    return 1;
}

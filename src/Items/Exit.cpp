#include "Exit.h"
#include "MenuItem.h"

Exit::Exit(): MenuItem(0, "Salir") {
}

void Exit::execute(User* user) {
    exit(0);
    return;
}

#include "Exit.h"
#include "MenuItem.h"

Exit::Exit(): MenuItem(0, "Salir") {
}

void Exit::execute() {
    exit(1);
    return;
}

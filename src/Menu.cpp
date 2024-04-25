#include "Menu.h"

Menu::Menu(MenuItem (&opts)[5]): options(opts) {
}

Menu::~Menu() {
}

void Menu::printMenu() {
    cout << "Gestor de ventas: 0.0.1" << endl;
    cout << "Bienvenido {Nombre}: Por favor elige una opcion para continuar" << endl;
    cout << "=======================" << endl;
    for (int i  = 0; i < 5; i++) {
        cout << options[i].getTitleToShow() << endl;
    }
    return;
}

int Menu::waitForOption() {

    int option;

    cin >> option;

    while (!checkIfOptionIsValid(option)) {
        cin >> option;
    }

    system("cls");
    cout << to_string(option);
}

bool Menu::checkIfOptionIsValid(int option) {
    bool isValid = false;
    for (int i  = 0; i < 5 && !isValid; i++) {
        isValid = options[i].getCode() == option;
    }
}

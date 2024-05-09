#include "Menu.h"
#include <Exit.h>

Menu::Menu(int menuItemsQuantity) {
    _optionsQuantity = menuItemsQuantity;
    _options = new MenuItem*[menuItemsQuantity];
}

Menu::~Menu() {
    for (int i=0; i < _currentOptions; i++) {
        delete _options[i];
    }
    delete _options;
}

void Menu::setHeader(string header) {
    this->_header = header;
}

void Menu::setUser(User* user) {
    this->_user = user;
}

void Menu::printMenu() {
    /*
    cout << "Gestor de ventas: 0.0.1" << endl;
    cout << "Bienvenido {Nombre}: Por favor elige una opcion para continuar" << endl;
    cout << "=======================" << endl;
    */
    cout << _header << endl;
    for (int i = 0; i < _currentOptions; i++) {
        cout << _options[i]->getTitleToShow() << endl;
    }
    return;
}

void Menu::addMenuItem(MenuItem* menuItem) {
    _options[_currentOptions] = menuItem;
    _currentOptions++;
}

int Menu::waitForOption() {

    int option;

    cin >> option;

    while (!checkIfOptionIsValid(option)) {
        cout << "Por favor ingresar una opción valida:" << endl;
        cin >> option;
    }
    return option;
}

bool Menu::checkIfOptionIsValid(int option) {
    bool isValid = false;
    for (int i  = 0; i < _currentOptions && !isValid; i++) {
        isValid = _options[i]->getCode() == option;
    }
    return isValid;
}

void Menu::executeOption(int option) {
    for (int i=0; i < _currentOptions; i++) {
        if (_options[i]->getCode() == option) {
            system("cls");
            MenuItem* po = _options[i];
            po->execute(_user);
            return;
        }
    }
}

void Menu::createMenuLoop(bool oneTime) {
    this->printMenu();
    int option = this->waitForOption();
    this->executeOption(option);

    while(!oneTime && true) {
        this->printMenu();
        int option = this->waitForOption();
        this->executeOption(option);
    }
}

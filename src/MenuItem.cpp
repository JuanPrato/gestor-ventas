#include "MenuItem.h"

MenuItem::MenuItem(int code, string title, string decorator) {
    _code = code;
    _title = title;
    _decorator = decorator;
}

string MenuItem::getTitleToShow() {
    return to_string(_code) + ": " + _title + _decorator;
}

void MenuItem::setDecorator(string decorator) {
    _decorator = decorator;
}

int MenuItem::getCode() {
    return _code;
}

void MenuItem::execute() {
    system("pause");
    exit(2);
    return;
}

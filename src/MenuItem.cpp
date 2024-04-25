#include "MenuItem.h"

MenuItem::MenuItem(int code, string title, string decorator) {
    _code = code;
    _title = title;
    _decorator = decorator;
}

MenuItem::~MenuItem() {
    //dtor
}

string MenuItem::getTitleToShow() {
    return to_string(_code) + ": " + _title.append(_decorator);
}

void MenuItem::setDecorator(string decorator) {
    _decorator = decorator;
}

int MenuItem::getCode() {
    return _code;
}

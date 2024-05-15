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

int MenuItem::execute(AuthManager &authManager) {
    cout << "Not implemented";
    return 0;
}

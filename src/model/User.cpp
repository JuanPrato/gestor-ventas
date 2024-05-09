#include "User.h"

User::User() {
    _email = "";
    _password = "";
    _role = -1;
}

/*
User::User(string email, string password, int role) {
    _email = email;
    _password = password;
    _role = role;
}
*/

string User::getEmail() {
    return _email;
}

string User::getPassword() {
    return _password;
}

void User::setEmail(string email) {
    _email = email;
}
void User::setPassword(string password) {
    _password = password;
}
void User::setRole(int role) {
    _role = role;
}

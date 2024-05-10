#include "User.h"
#include <cstring>

User::User() {
    strcpy(_username, "");
    strcpy(_email, "");
    strcpy(_password, "");
    _role = -1;
}

User::User(string username, string email, string password, int role) {
    strcpy(_username, username.c_str());
    strcpy(_email, email.c_str());
    strcpy(_password, password.c_str());
    _role = role;
}

string User::getEmail() {
    return string(_email);
}

string User::getUsername() {
    return string(_username);
}

string User::getPassword() {
    return string(_password);
}
/*
void User::setEmail(string email) {
    _email.assign(email);
}

void User::setUsername(string username) {
    _username.assign(username);
}

void User::setPassword(string password) {
    _password.assign(password);
}
void User::setRole(int role) {
    _role = role;
}
*/

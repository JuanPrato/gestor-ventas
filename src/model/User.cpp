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
    return _email;
}

string User::getUsername() {
    return _username;
}

string User::getPassword() {
    return _password;
}

int User::getRole() {
    return _role;
}

void User::setEmail(string email) {
    strcpy(_email, email.c_str());
}

void User::setUsername(string username) {
    strcpy(_username, username.c_str());
}

void User::setPassword(string password) {
    strcpy(_password, password.c_str());
}
void User::setRole(int role) {
    _role = role;
}


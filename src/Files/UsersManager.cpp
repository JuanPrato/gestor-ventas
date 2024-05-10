#include <iostream>

#include "UsersManager.h"
#include "User.h"

UsersManager::UsersManager() {
    throw "Utility class";
}

const char* UsersManager::FILE_NAME = "usuarios.ntp";

User* UsersManager::login(string email, string password) {

    FILE *p = fopen(FILE_NAME, "rb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return NULL;
    }

    User* user = new User();
    int readCount = fread(user, sizeof(User), 1, p);

    while (readCount != 0 && email.compare(user->getEmail()) != 0) {
        readCount = fread(user, sizeof(User), 1, p);
    }

    fclose(p);
    if (readCount == 0 || password.compare(user->getPassword()) != 0) {
        User* u = new User();
        return u;
    }

    return user;
}

void UsersManager::registerAccount(User user) {
    FILE *p = fopen(FILE_NAME, "wb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return;
    }

    fwrite(&user, sizeof(User), 1, p);
    fclose(p);
}

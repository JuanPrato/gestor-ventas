#include <iostream>
#include "Usuarios.h"

const char* USER_FILE_NAME = "usuariosR.ntp";


User* login(string email, string password) {

    FILE *p = fopen(USER_FILE_NAME, "rb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return NULL;
    }

    User* user = new User;
    int readCount = fread(user, sizeof(User), 1, p);

    while (readCount != 0 && user->getEmail() != email) {
        readCount = fread(user, sizeof(User), 1, p);
    }

    fclose(p);

    if (readCount == 0 || user->getPassword() != password) {
        user = new User;
        cout << user->getEmail();
        return user;
    }

    return user;
}

void registerAccount(string username, string password, int role) {
    FILE *p = fopen(USER_FILE_NAME, "wb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return;
    }

    User* user = new User;
    user->setEmail(username);
    user->setPassword(password);
    user->setRole(role);

    fwrite(user, sizeof(User), 1, p);
    fclose(p);

    delete user;
}

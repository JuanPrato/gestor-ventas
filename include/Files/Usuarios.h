#ifndef USUARIOS_H
#define USUARIOS_H

#include <iostream>
#include <string.h>

User login(string username, string password);

void createAccount(string username, string password, int role);

#endif // USUARIOS_H

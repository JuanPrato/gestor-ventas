#ifndef USUARIOS_H
#define USUARIOS_H

#include <iostream>
#include <string.h>
#include <User.h>

User* login(string username, string password);

void registerAccount(string username, string password, int role);

#endif // USUARIOS_H

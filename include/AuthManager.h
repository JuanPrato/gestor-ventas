#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H

#include <User.h>

class AuthManager
{
    public:
        AuthManager();
        User* askForLogin();

    protected:

    private:
};

#endif // AUTHMANAGER_H

#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H

#include <User.h>

class AuthManager
{
    public:
        AuthManager();
        virtual ~AuthManager();
        void askForLogin();
        User* getUser();
        void updateUser(User *user);

    protected:

    private:
        User* _user;
};

#endif // AUTHMANAGER_H

#ifndef USERSMANAGER_H
#define USERSMANAGER_H

#include <string>

#include "DataManager.h"
#include "User.h"

using namespace std;

class UsersManager: public DataManager {
    public:
        UsersManager();
        static User* login(string username, string password);
        static void registerAccount(User user);

    protected:

    private:
        static const char* FILE_NAME;
};

#endif // USERSMANAGER_H

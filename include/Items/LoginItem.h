#ifndef LOGINITEM_H
#define LOGINITEM_H

#include <AuthManager.h>
#include <MenuItem.h>

class LoginItem: public MenuItem {
    public:
        LoginItem();
        virtual ~LoginItem();
        int execute(AuthManager &authManager);

    protected:

    private:
};

#endif // LOGINITEM_H

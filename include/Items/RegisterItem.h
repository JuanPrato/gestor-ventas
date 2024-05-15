#ifndef REGISTERITEM_H
#define REGISTERITEM_H

#include <string.h>

#include <AuthManager.h>
#include <User.h>
#include <MenuItem.h>

class RegisterItem : public MenuItem
{
    public:
        RegisterItem();
        virtual ~RegisterItem();
        int execute(AuthManager &authManager);

    protected:

    private:
};

#endif // REGISTERITEM_H

#ifndef REGISTERITEM_H
#define REGISTERITEM_H

#include <string.h>

#include <User.h>
#include <MenuItem.h>

class RegisterItem : public MenuItem
{
    public:
        RegisterItem();
        virtual ~RegisterItem();
        void execute(User* user);

    protected:

    private:
};

#endif // REGISTERITEM_H

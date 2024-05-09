#ifndef LOGINITEM_H
#define LOGINITEM_H

#include <MenuItem.h>

class LoginItem: public MenuItem {
    public:
        LoginItem();
        virtual ~LoginItem();
        void execute(User* user);

    protected:

    private:
};

#endif // LOGINITEM_H

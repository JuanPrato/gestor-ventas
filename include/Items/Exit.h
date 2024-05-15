#ifndef EXIT_H
#define EXIT_H

#include <AuthManager.h>
#include <MenuItem.h>

class Exit : public MenuItem {
    public:
        Exit();
        virtual int execute(AuthManager &authManager);

    protected:

    private:
};

#endif // EXIT_H

#ifndef EXIT_H
#define EXIT_H

#include <MenuItem.h>

class Exit : public MenuItem {
    public:
        Exit();
        virtual void execute(User* user = NULL);

    protected:

    private:
};

#endif // EXIT_H

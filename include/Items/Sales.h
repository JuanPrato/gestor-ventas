#ifndef SALES_H
#define SALES_H

#include <MenuItem.h>

class Sales: public MenuItem {
    public:
        Sales();
        virtual ~Sales();
        virtual void execute(User* user);

    protected:

    private:
};

#endif // SALES_H

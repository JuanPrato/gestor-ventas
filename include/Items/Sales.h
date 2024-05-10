#ifndef SALES_H
#define SALES_H

#include "Menu.h"
#include "Sale.h"
#include "SalesManager.h"
#include "MenuItem.h"

class Sales: public MenuItem {
    public:
        Sales();
        virtual ~Sales();
        int execute(User &user);

    protected:

    private:
};

#endif // SALES_H

#ifndef SALESMANAGER_H
#define SALESMANAGER_H

#include <iostream>

#include "DataManager.h"
#include "Sale.h"

using namespace std;

class SalesManager: public DataManager {
    public:
        SalesManager();
        static Sale* getSale();
        static void saveSale(Sale sale);

    protected:

    private:
        static const char* FILE_NAME;
};

#endif // SALESMANAGER_H

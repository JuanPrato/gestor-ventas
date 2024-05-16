#ifndef SALE_H
#define SALE_H

#include "string"
#include <SaleItem.h>

using namespace std;

class Sale
{
    public:
        Sale();
        SaleItem* getProducts();

    protected:

    private:
        SaleItem _products[10];
        string _client;
        float _price;
};

#endif // SALE_H

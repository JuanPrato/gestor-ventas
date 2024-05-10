#ifndef SALE_H
#define SALE_H

#include "string"

using namespace std;

class Sale
{
    public:
        Sale();
        string getProduct();

    protected:

    private:
        string _product;
        string _client;
        float _price;
};

#endif // SALE_H

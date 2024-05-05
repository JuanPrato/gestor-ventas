#ifndef SALEMODEL_H
#define SALEMODEL_H

#include <string>

using namespace std;

class SaleModel
{
    public:
        SaleModel();
        string getProduct();

    protected:

    private:
        string _product;
        string _client;
        float _price;
};

#endif // SALEMODEL_H

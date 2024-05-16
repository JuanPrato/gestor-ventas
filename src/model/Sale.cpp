#include "Sale.h"

Sale::Sale() {
    _products[0] = SaleItem();
    _client = "Juan";
    _price = 19.9f;
}

SaleItem* Sale::getProducts() {
    return _products;
}

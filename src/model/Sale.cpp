#include "Sale.h"

Sale::Sale() {
    _product = "producto";
    _client = "Juan";
    _price = 19.9f;
}

string Sale::getProduct() {
    return _product;
}

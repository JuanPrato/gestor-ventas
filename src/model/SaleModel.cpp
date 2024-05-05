#include "SaleModel.h"

SaleModel::SaleModel() {
    _product = "producto";
    _client = "Juan";
    _price = 19.9f;
}

string SaleModel::getProduct() {
    return _product;
}

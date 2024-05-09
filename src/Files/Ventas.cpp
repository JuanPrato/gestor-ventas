#include <iostream>

#include "Ventas.h"

const char* FILE_NAME = "ventas.ntp";

SaleModel* getSale() {

    FILE *p = fopen(FILE_NAME, "rb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return NULL;
    }

    SaleModel sale;

    fread(&sale, sizeof(SaleModel), 1, p);

    fclose(p);

    cout << sale.getProduct() << endl;

    return &sale;
}

void saveSale(SaleModel sale) {

    FILE *p = fopen(FILE_NAME, "wb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return;
    }

    fwrite(&sale, sizeof(SaleModel), 1, p);

    fclose(p);

}

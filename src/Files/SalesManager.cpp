#include "SalesManager.h"

SalesManager::SalesManager() {
   throw "Utility class";
}

const char* SalesManager::FILE_NAME = "ventas.ntp";

Sale* SalesManager::getSale() {

    FILE *p = fopen(FILE_NAME, "rb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return NULL;
    }

    Sale sale;

    fread(&sale, sizeof(Sale), 1, p);

    fclose(p);

    cout << sale.getProduct() << endl;

    return &sale;
}

void SalesManager::saveSale(Sale sale) {

    FILE *p = fopen(FILE_NAME, "wb");

    if (p == NULL){
        cout << "No se pudo abrir el archivo.";
        return;
    }

    fwrite(&sale, sizeof(Sale), 1, p);

    fclose(p);

}

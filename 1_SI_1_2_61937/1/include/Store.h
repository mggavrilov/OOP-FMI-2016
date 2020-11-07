#ifndef STORE_H
#define STORE_H

#include "Product.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

static const int NUM = 100;

class Store
{
    public:
        Store();
        virtual ~Store();
        void addProduct(int);
        void deleteProduct(int);
        void changeProduct(int);
        void printProducts();
        void saveProducts();
        void loadProducts();
        //static Product *products = new Product[100];
        Product products[100];
        int n;
    protected:
    private:
};

#endif // STORE_H

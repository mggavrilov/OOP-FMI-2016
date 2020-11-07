#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

class Product
{
    public:
        Product();
        Product(string, string, string, string, string, double, int);
        virtual ~Product();
        void setBrand(string);
        void setModel(string);
        void setCategory(string);
        void setColor(string);
        void setSize(string);
        void setPrice(double);
        void setCount(int);
        string getBrand() const;
        string getModel() const;
        string getCategory() const;
        string getColor() const;
        string getSize() const;
        double getPrice() const;
        int getCount() const;
        void printProduct() const;
        void saveProduct();
        void loadProduct();
    protected:
    private:
        static int itemCounter;
        int SKU, nCount;
        string brand, model, category, color, s_size;
        double price;
};

#endif // PRODUCT_H

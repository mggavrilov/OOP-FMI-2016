#include "Product.h"

int Product::itemCounter = 0;

Product::Product()
{
    itemCounter++;
    SKU = itemCounter;
}

Product::Product(string brand, string model, string category, string color, string s_size, double price, int nCount)
{
    itemCounter++;
    SKU = itemCounter;

    if(category != "Men" && category != "Women" && category != "Kids") {
        cout << "Error: Wrong category!";
        return;
    }

    if(s_size != "S" && s_size != "M" && s_size != "L" && s_size != "XL" && s_size != "XXL") {
        cout << "Error: Wrong size!";
        return;
    }

    this->brand = brand;
    this->model = model;
    this->category = category;
    this->color = color;
    this->s_size = s_size;
    this->price = price;
    this->nCount = nCount;
}

Product::~Product()
{
    //dtor
}

void Product::setBrand(string a) { brand = a; }
void Product::setModel(string a) { model = a; }
void Product::setCategory(string a) {
    if(a != "Men" && a != "Women" && a != "Kids") {
        cout << "Error: Wrong category!";
        return;
    }

    category = a;
}
void Product::setColor(string a) { color = a; }
void Product::setSize(string a) {
    if(a != "S" && a != "M" && a != "L" && a != "XL" && a != "XXL") {
        cout << "Error: Wrong size!";
        return;
    }

    s_size = a;
}
void Product::setPrice(double a) { price = a; }
void Product::setCount(int a) { nCount = a; }
string Product::getBrand() const { return brand; }
string Product::getModel() const { return model; }
string Product::getCategory() const { return category; }
string Product::getColor() const { return color; }
string Product::getSize() const { return s_size; }
double Product::getPrice() const { return price; }
int Product::getCount() const { return nCount; }

void Product::printProduct() const {
    cout << SKU << "\t" << brand << "\t" << model << "\t" << category << "\t" << color << "\t" << s_size << "\t" << price << "\t" << nCount << endl;
}

void Product::saveProduct() {
    ofstream file;
    file.open("products.txt", ios::app);
    file << brand << " " << model << " " << category << " " << color << " " << s_size << " " << price << " " << nCount << endl;
    file.close();
}



#include "Store.h"

Store::Store()
{
    n = 0;
    cout << "Store created successfully." << endl;
}

Store::~Store()
{
    delete [] products;
}

void Store::addProduct(int x = 0) {
    Product product = Product();
    int nCount;
    string brand, model, category, color, s_size;
    double price;
    cout << "Brand: ";
    cin >> brand;
    product.setBrand(brand);
    cout << "Model: ";
    cin >> model;
    product.setModel(model);
    cout << "Category (Men, Women, Kids): ";
    cin >> category;
    product.setCategory(category);
    cout << "Color: ";
    cin >> color;
    product.setColor(color);
    cout << "Size (S, M, L, XL, XXL): ";
    cin >> s_size;
    product.setSize(s_size);
    cout << "Price: ";
    cin >> price;
    product.setPrice(price);
    cout << "Count: ";
    cin >> nCount;
    product.setCount(nCount);

    if(x == 0) {
        products[n] = product;
        n++;
    }
    else {
        products[x] = product;
    }
}

void Store::deleteProduct(int x) {
    for(int i = x; i <= n; i++)
    {
        products[i-1] = products[i];
    }

    n--;
}

void Store::changeProduct(int x) {
    addProduct(x-1);
}

void Store::printProducts() {
    cout << "No\tSKU\tBrand\tModel\tCat\tColor\tSize\tPrice\tCount" << endl;
    for(int i = 0; i < n; i++) {
        cout << (i+1) << "\t";
        products[i].printProduct();
    }
}

void Store::saveProducts() {
    for(int i = 0; i < n; i++) {
        products[i].saveProduct();
    }
}

void Store::loadProducts() {
    ifstream file;
    string line;
    file.open("products.txt");
    while(getline(file, line)) {
        if(line != "") {
            stringstream linestream(line);
            string data;

            Product product = Product();
            int nCount;
            string brand, model, category, color, s_size;
            double price;

            linestream >> brand >> model >> category >> color >> s_size >> price >> nCount;

            product.setBrand(brand);
            product.setModel(model);
            product.setCategory(category);
            product.setColor(color);
            product.setSize(s_size);
            product.setPrice(price);
            product.setCount(nCount);

            products[n] = product;
            n++;
        }
    }
    file.close();
}

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
    store = Store();
    store.loadProducts();
    n = 0;
}

ShoppingCart::~ShoppingCart()
{
    delete [] cartProducts;
}

void ShoppingCart::addProduct(int x, int m) {
    cartProducts[n] = store.products[x-1];
    store.products[x-1].setCount(store.products[x-1].getCount() - m);
    indexes[n] = x - 1;
    cartProducts[n].setCount(m);
    n++;
}

void ShoppingCart::deleteProduct(int x) {
    store.products[indexes[x-1]].setCount(store.products[x-1].getCount() + cartProducts[x-1].getCount());
    for(int i = x; i <= n; i++)
        {
            cartProducts[i-1] = cartProducts[i];
        }

        n--;
}

void ShoppingCart::printCartProducts() {
    cout << "No\tSKU\tBrand\tModel\tCat\tColor\tSize\tPrice\tCount" << endl;
    for(int i = 0; i < n; i++) {
        cout << (i+1) << "\t";
        cartProducts[i].printProduct();
    }
}

void ShoppingCart::printProducts() {
    store.printProducts();
}

void ShoppingCart::checkout() {
    double finalPrice = 0;
    cout << "Checkout Success. Items bought:" << endl;
    printCartProducts();
    for(int i = 0; i < n; i++) {
        finalPrice += (cartProducts[i].getPrice() * cartProducts[i].getCount());
    }
    cout << "Final price: " << finalPrice << endl;

    ofstream file;
    file.open("products.txt");
    for(int i = 0; i < store.n; i++) {
            cout << "I=" << i << endl;
            cout << "N=" << store.n << endl;
        file << store.products[i].getBrand() << " " << store.products[i].getModel() << " " << store.products[i].getCategory() <<
        " " << store.products[i].getColor() << " " << store.products[i].getSize() << " " << store.products[i].getPrice() << " " << store.products[i].getCount() << endl;
    }
    file.close();
    store.n = 0;
    store.loadProducts();
}

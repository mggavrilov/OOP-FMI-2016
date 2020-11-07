#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <Store.h>
#include <fstream>

using namespace std;

const int N = 100;
class ShoppingCart
{
    public:
        ShoppingCart();
        virtual ~ShoppingCart();
        void addProduct(int, int);
        void deleteProduct(int);
        void printProducts();
        void printCartProducts();
        void checkout();
    protected:
    private:
        Product *cartProducts = new Product[N];
        Store store = Store();
        int n;
        int indexes[100];
};

#endif // SHOPPINGCART_H

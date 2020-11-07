#include <iostream>
#include <string>
#include <Store.h>
#include <ShoppingCart.h>

using namespace std;

int main()
{
    string storeName;
    char choice;

    cout << "Enter the name of your store: ";
    cin >> storeName;

    ShoppingCart cart = ShoppingCart();

    do {
        cout << "Welcome to " << storeName << endl;
        cout << "D\tDisplay all products" << endl;
        cout << "A\tAdd a product to shopping cart" << endl;
        cout << "K\tDelete a product from shopping cart" << endl;
        cout << "S\tDisplay products in shopping cart" << endl;
        cout << "C\tCheckout" << endl;
        cout << "Q\tQuit" << endl;
        cout << "Choice: ";

        cin >> choice;

        switch(choice) {
            case 'D':
                cart.printProducts();
                break;
            case 'A':
                cart.printProducts();
                int x, n;
                cout << "Enter the index of the product which you want to buy: ";
                cin >> x;
                cout << "Enter amount of items you want to buy: ";
                cin >> n;
                cart.addProduct(x, n);
                break;
            case 'K':
                cart.printCartProducts();
                int y;
                cout << "Enter the index of the product which you want to delete: ";
                cin >> y;
                cart.deleteProduct(y);
                break;
            case 'S':
                cart.printCartProducts();
                break;
            case 'C':
                cart.checkout();
                break;
                //intentional fall-through - exit after checkout
            case 'Q':
                break;
        }
    }
    while(choice != 'Q');


    return 0;
}

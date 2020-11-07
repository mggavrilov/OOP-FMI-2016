#include <iostream>
#include <string>
#include <Store.h>

using namespace std;

int main()
{
    string storeName;
    char choice;

    cout << "Enter the name of your store: ";
    cin >> storeName;

    Store store = Store();

    do {
        cout << "Welcome to " << storeName << endl;
        cout << "A\tAdd new product" << endl;
        cout << "K\tDelete product" << endl;
        cout << "C\tChange product" << endl;
        cout << "D\tDisplay products" << endl;
        cout << "S\tSave products" << endl;
        cout << "L\tLoad products" << endl;
        cout << "Q\tQuit" << endl;
        cout << "Choice: ";

        cin >> choice;

        switch(choice) {
            case 'A':
                store.addProduct(0);
                break;
            case 'K':
                store.printProducts();
                int x;
                cout << "Enter the index of the product which you want to delete: ";
                cin >> x;
                store.deleteProduct(x);
                break;
            case 'C':
                store.printProducts();
                int y;
                cout << "Enter the index of the product which you want to change: ";
                cin >> y;
                store.changeProduct(y);
                break;
            case 'D':
                store.printProducts();
                break;
            case 'S':
                store.saveProducts();
                break;
            case 'L':
                store.loadProducts();
            break;
            case 'Q':
                return 0;
        }
    }
    while(choice != 'Q');


    return 0;
}

#include <iostream>
#include "RealEstate.h"

using namespace std;

int main()
{
    RealEstate realEstate = RealEstate();
    int choice;

    do {
        cout << "1. Add estate" << endl;
        cout << "2. Delete estate" << endl;
        cout << "3. Search estates by type" << endl;
        cout << "4. Search estates by price" << endl;
        cout << "5. Search estates by area" << endl;
        cout << "6. Search plots by available communications" << endl;
        cout << "7. Search estates by city" << endl;
        cout << "8. List estates from certain type (descending price order)" << endl;
        cout << "9. List all estates" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        int estateType;
        int communicationType;
        double min, max;
        string city;

        switch(choice) {
            case 1:
                realEstate.addEstate();
                break;
            case 2:
                realEstate.deleteEstate();
                break;
            case 3:
                cout << "Search for FLAT (1), HOUSE (2), PLOT (3): ";
                cin >> estateType;
                realEstate.searchEstateType(--estateType);
                break;
            case 4:
                cout << "Enter minimum price: ";
                cin >> min;
                cout << "Enter maximum price: ";
                cin >> max;
                realEstate.searchPrice(min, max);
                break;
            case 5:
                cout << "Enter minimum area: ";
                cin >> min;
                cout << "Enter maximum area: ";
                cin >> max;
                realEstate.searchArea(min, max);
                break;
            case 6:
                cout << "Search estates which have WATER (1), ELECTRICITY (2), PHONE (3), ROAD (4), CANAL (5): ";
                cin >> communicationType;
                realEstate.searchCommunications(--communicationType);
                break;
            case 7:
                cout << "Enter city name: ";
                cin >> city;
                realEstate.searchCity(city);
                break;
            case 8:
                int estateType;
                cout << "List FLAT (1), HOUSE (2), PLOT (3) (descending price order): ";
                cin >> estateType;
                realEstate.sortEstateType(--estateType);
                break;
            case 9:
                realEstate.printEstates();
                break;
        }
    } while(choice != 0);

    return 0;
}

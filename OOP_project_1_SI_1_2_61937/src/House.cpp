#include "House.h"

    House::House() : Estate() {
        estateType = HOUSE;
        cout << "Rooms: ";
        cin >> rooms;
        cout << "Floors: ";
        cin >> floors;
        cout << "Yard area: ";
        cin >> yardArea;
    }

    House::House(string city, string address, string owner, double price, double area, int rooms, int floors, double yardArea) : Estate(city, address, owner, price, area) {
        estateType = HOUSE;
        this->rooms = rooms;
        this->floors = floors;
        this->yardArea = yardArea;
    }

    House::~House()
    {
    //dtor
    }

    int House::getRooms() const { return rooms; }
    int House::getFloors() const { return floors; }
    double House::getYardArea() const { return yardArea; }
    void House::setRooms(int rooms) { this->rooms = rooms; }
    void House::setFloors(int floors) { this->floors = floors; }
    void House::setYardArea(double yardArea) { this->yardArea = yardArea; }

    void House::printEstate() {
        Estate::printEstate();
        cout << "Rooms: " << rooms << endl;
        cout << "Floors: " << floors << endl;
        cout << "Yard area: " << yardArea << endl;
    }

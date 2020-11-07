#include "Flat.h"

    Flat::Flat() : Estate() {
        estateType = FLAT;
        cout << "Rooms: ";
        cin >> rooms;
        cout << "Floor: ";
        cin >> floor;
    }

    Flat::Flat(string city, string address, string owner, double price, double area, int rooms, int floor) : Estate(city, address, owner, price, area) {
        estateType = FLAT;
        this->rooms = rooms;
        this->floor = floor;
    }

    Flat::~Flat() {}

    int Flat::getRooms() const { return rooms; }
    int Flat::getFloor() const { return floor; }
    void Flat::setRooms(int rooms) { this->rooms = rooms; }
    void Flat::setFloor(int floor) { this->floor = floor; }

    void Flat::printEstate() {
        Estate::printEstate();
        cout << "Rooms: " << rooms << endl;
        cout << "Floor: " << floor << endl;
    }

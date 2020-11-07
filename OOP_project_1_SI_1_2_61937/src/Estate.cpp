#include "Estate.h"

    Estate::Estate() {
        cout << "City: ";
        cin >> city;
        cout << "Address: ";
        cin >> address;
        cout << "Owner: ";
        cin >> owner;
        cout << "Price: ";
        cin >> price;
        cout << "Area: ";
        cin >> area;
    }

    Estate::Estate(string city, string address, string owner, double price, double area) {
        this->city = city;
        this->address = address;
        this->owner = owner;
        this->price = price;
        this->area = area;
    }

    Estate::~Estate() {}

    string Estate::getCity() const { return city; }
    string Estate::getAddress() const { return address; }
    string Estate::getOwner() const { return owner; }
    double Estate::getPrice() const { return price; }
    double Estate::getArea() const { return area; }
    int Estate::getEstateType() const { return estateType; }
    void Estate::setCity(string city) { this->city = city; }
    void Estate::setAddress(string address) { this->address = address; }
    void Estate::setOwner(string owner) { this->owner = owner; }
    void Estate::setPrice(double price) { this->price = price; }
    void Estate::setArea(double area) { this->area = area; }
    void Estate::setEstateType(int estateType) { this->estateType = static_cast<EstateType>(estateType); }

    void Estate::printEstate() {
        cout << "City: " << city << endl;
        cout << "Address: " << address << endl;
        cout << "Owner: " << owner << endl;
        cout << "Price: " << price << endl;
        cout << "Area: " << area << endl;
        cout << "Price per square meter: " << (price/area) << endl;
    }

    bool Estate::hasCommunication(int communicationType) { return false; }

    bool operator<(const Estate &e1, const Estate &e2) {
        cout << "OPERATOR< FUNCTION" << endl;
        cout << e1.price << " <> " << e2.price << " " << (e1.price < e2.price) << endl;
            return e1.price < e2.price;
    }

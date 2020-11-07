#ifndef ESTATE_H
#define ESTATE_H

#include <string>
#include <iostream>

using namespace std;

enum EstateType {
    FLAT,
    HOUSE,
    PLOT
};

class Estate
{
    public:
        Estate();
        Estate(string city, string address, string owner, double price, double area);
        virtual ~Estate();

        string getCity() const;
        string getAddress() const;
        string getOwner() const;
        double getPrice() const;
        double getArea() const;
        int getEstateType() const;
        void setCity(string city);
        void setAddress(string address);
        void setOwner(string owner);
        void setPrice(double price);
        void setArea(double area);
        void setEstateType(int estateType);

        virtual void printEstate();
        virtual bool hasCommunication(int communicationType);

        friend bool operator<(const Estate &e1, const Estate &e2);

    protected:
        EstateType estateType;

    private:
        string city;
        string address;
        string owner;
        double price;
        double area;
};

#endif // ESTATE_H

#ifndef HOUSE_H
#define HOUSE_H

#include "Estate.h"

class House : public Estate
{
    public:
        House();
        House(string city, string address, string owner, double price, double area, int rooms, int floors, double yardArea);
        virtual ~House();

        int getRooms() const;
        int getFloors() const;
        double getYardArea() const;
        void setRooms(int rooms);
        void setFloors(int floors);
        void setYardArea(double yardArea);

        void printEstate();

    protected:

    private:
        int rooms;
        int floors;
        double yardArea;
};

#endif // HOUSE_H

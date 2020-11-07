#ifndef FLAT_H
#define FLAT_H

#include "Estate.h"

class Flat : public Estate
{
    public:
        Flat();
        Flat(string city, string address, string owner, double price, double area, int rooms, int floor);
        virtual ~Flat();

        int getRooms() const;
        int getFloor() const;
        void setRooms(int rooms);
        void setFloor(int floor);

        void printEstate();

    protected:

    private:
        int rooms;
        int floor;
};

#endif // FLAT_H

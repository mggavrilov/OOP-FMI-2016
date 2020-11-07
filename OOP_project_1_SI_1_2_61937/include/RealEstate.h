#ifndef REALESTATE_H
#define REALESTATE_H

#include <iostream>
#include <vector>
#include <string>
#include "Estate.h"
#include "Flat.h"
#include "House.h"
#include "Plot.h"

using namespace std;

class RealEstate
{
    public:
        RealEstate();
        virtual ~RealEstate();

        void searchPrice(double min, double max);
        void searchArea(double min, double max);
        void searchCity(string city);
        void searchEstateType(int estateType);
        void sortEstateType(int estateType);
        void searchCommunications(int communicationType);
        void addEstate();
        void deleteEstate();
        void printEstates();

    protected:

    private:
        vector<Estate*> estates;
};

#endif // REALESTATE_H

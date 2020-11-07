#include "RealEstate.h"

RealEstate::RealEstate()
{
    //ctor
}

RealEstate::~RealEstate()
{
    for(unsigned i = 0; i < estates.size(); i++) {
        delete estates[i];
    }
}

void RealEstate::searchPrice(double min, double max) {
    for(unsigned i = 0; i < estates.size(); i++) {
        if(estates.at(i)->getPrice() >= min && estates.at(i)->getPrice() <= max) {
            cout << (i+1) << ":" << endl;
            estates.at(i)->printEstate();
            cout << endl;
        }
    }
}

void RealEstate::searchArea(double min, double max) {
    for(unsigned i = 0; i < estates.size(); i++) {
        if(estates.at(i)->getArea() >= min && estates.at(i)->getArea() <= max) {
            cout << (i+1) << ":" << endl;
            estates.at(i)->printEstate();
            cout << endl;
        }
    }
}

void RealEstate::searchCity(string city) {
    for(unsigned i = 0; i < estates.size(); i++) {
        if(!city.compare(estates.at(i)->getCity())) {
            cout << (i+1) << ":" << endl;
            estates.at(i)->printEstate();
            cout << endl;
        }
    }
}

void RealEstate::searchEstateType(int estateType) {
    for(unsigned i = 0; i < estates.size(); i++) {
        if(estates.at(i)->getEstateType() == estateType) {
            cout << (i+1) << ":" << endl;
            estates.at(i)->printEstate();
            cout << endl;
        }
    }
}

void RealEstate::sortEstateType(int estateType) {
    vector<Estate*> sortedEstates;

    for(unsigned i = 0; i < estates.size(); i++) {
        if(estates.at(i)->getEstateType() == estateType) {
            sortedEstates.push_back(estates.at(i));
        }
    }

    Estate *tempEstate;
    for(unsigned i = 0; i < sortedEstates.size() - 1; i++) {
        for(unsigned j = 0; j < sortedEstates.size() - i - 1; j++) {
            if((*sortedEstates.at(j)) < (*sortedEstates.at(j+1))) {
                tempEstate = sortedEstates.at(j);
                sortedEstates.at(j) = sortedEstates.at(j+1);
                sortedEstates.at(j+1) = tempEstate;
            }
        }
    }

    for(unsigned i = 0; i < sortedEstates.size(); i++) {
        cout << "#" << (i+1) << endl;
        sortedEstates.at(i)->printEstate();
        cout << endl;
    }
}

void RealEstate::searchCommunications(int communicationType) {
    for(unsigned i = 0; i < estates.size(); i++) {
        if(estates.at(i)->getEstateType() == PLOT) {
            if(estates.at(i)->hasCommunication(communicationType)) {
                cout << (i+1) << ":" << endl;
                estates.at(i)->printEstate();
                cout << endl;
            }
        }
    }
}

void RealEstate::addEstate() {
    cout << "Please select the type of the estate." << endl;
    cout << "1. Flat" << endl;
    cout << "2. House" << endl;
    cout << "3. Plot" << endl;
    cout << "Type of the estate: ";
    int estateType;
    cin >> estateType;

    switch(estateType) {
        case 1:
        {
            Flat *flat = new Flat();
            estates.push_back(flat);
            break;
        }
        case 2:
        {
            House *house = new House();
            estates.push_back(house);
            break;
        }
        case 3:
        {
            Plot *plot = new Plot();
            estates.push_back(plot);
            break;
        }
        default:
            cout << "Invalid estate type!" << endl;
            break;
    }
}

void RealEstate::deleteEstate() {
    for(unsigned i = 0; i < estates.size(); i++) {
        cout << "#" << i << endl;
        estates.at(i)->printEstate();
        cout << endl;
    }

    cout << "Select the index of the estate you'd like to delete: ";
    int choice;
    cin >> choice;

    estates.erase(estates.begin() + choice);
}

void RealEstate::printEstates() {
    for(unsigned i = 0; i < estates.size(); i++) {
        cout << "#" << (i+1) << endl;
        estates.at(i)->printEstate();
        cout << endl;
    }
}

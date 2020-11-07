#include "Plot.h"

Plot::Plot() {
    estateType = PLOT;
    int choice;
    cout << "Does the estate have water? (0=No 1=Yes): ";
    cin >> choice;
    if(choice)
        communications.push_back(WATER);
    cout << "Does the estate have electricity? (0=No 1=Yes): ";
    cin >> choice;
    if(choice)
        communications.push_back(ELECTRICITY);
    cout << "Does the estate have a landline (phone)? (0=No 1=Yes): ";
    cin >> choice;
    if(choice)
        communications.push_back(PHONE);
    cout << "Does the estate have a road? (0=No 1=Yes): ";
    cin >> choice;
    if(choice)
        communications.push_back(ROAD);
    cout << "Does the estate have a canal? (0=No 1=Yes): ";
    cin >> choice;
    if(choice)
        communications.push_back(CANAL);
}

Plot::~Plot()
{
    //dtor
}

bool Plot::hasCommunication(int communicationType) {
    for(unsigned i = 0; i < communications.size(); i++) {
        if(communications.at(i) == communicationType)
            return true;
    }

    return false;
}

void Plot::printEstate() {
    Estate::printEstate();
    for(unsigned i = 0; i < communications.size(); i++) {

    }
}

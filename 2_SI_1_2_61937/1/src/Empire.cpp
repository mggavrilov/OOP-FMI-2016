#include "Empire.h"

Empire::Empire()
{
    //ctor
}

Empire::Empire(string name) {
    this->name = name;
}

Empire::~Empire()
{
    //dtor
}

int Empire::getPopulation() {
    return population.size();
}

void Empire::addCitizen(int citizenType) {
    Slave slave = Slave();
    Trader trader = Trader();
    Soldier soldier = Soldier();
    Scholar scholar = Scholar();
    Priest priest = Priest();
    Archer archer = Archer();
    Swordsman swordsman = Swordsman();
    Emperor emperor = Emperor();

    switch(citizenType) {
        case SLAVE:
            population.push_back(&slave);
            break;
        case TRADER:
            population.push_back(&trader);
            break;
        case SOLDIER:
            population.push_back(&soldier);
            break;
        case SCHOLAR:
            population.push_back(&scholar);
            break;
        case PRIEST:
            population.push_back(&priest);
            break;
        case ARCHER:
            population.push_back(&archer);
            break;
        case SWORDSMAN:
            population.push_back(&swordsman);
            break;
        case EMPEROR:
            population.push_back(&emperor);
            break;
        default:
            cout << "Invalid citizen type!";
    }
}

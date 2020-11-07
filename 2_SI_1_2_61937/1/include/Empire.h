#ifndef EMPIRE_H
#define EMPIRE_H

#include "CitizenEnum.h"
#include "Slave.h"
#include "Trader.h"
#include "Soldier.h"
#include "Scholar.h"
#include "Priest.h"
#include "Archer.h"
#include "Swordsman.h"
#include "Emperor.h"
#include <string>
#include <vector>

using namespace std;

class Empire
{
    public:
        Empire();
        Empire(string);
        virtual ~Empire();
        void addCitizen(int);
        int getPopulation();
    protected:
    private:
        string name;
        vector<Slave*> population;
};

#endif // EMPIRE_H

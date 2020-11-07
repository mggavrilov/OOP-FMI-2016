#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "Soldier.h"

class Swordsman : public Soldier
{
    public:
        Swordsman();
        Swordsman(string, int);
        virtual ~Swordsman();
        void work();
    protected:
    private:
};

#endif // SWORDSMAN_H

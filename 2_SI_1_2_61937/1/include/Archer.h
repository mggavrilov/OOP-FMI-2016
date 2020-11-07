#ifndef ARCHER_H
#define ARCHER_H

#include "Soldier.h"

class Archer : public Soldier
{
    public:
        Archer();
        Archer(string, int);
        virtual ~Archer();
        void work();
    protected:
    private:
};

#endif // ARCHER_H

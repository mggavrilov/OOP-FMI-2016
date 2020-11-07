#ifndef SOLDIER_H
#define SOLDIER_H

#include "Slave.h"

class Soldier : public Slave
{
    public:
        Soldier();
        Soldier(string, int);
        virtual ~Soldier();
        void work();
    protected:
    private:
};

#endif // SOLDIER_H

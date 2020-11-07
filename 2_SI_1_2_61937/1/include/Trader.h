#ifndef TRADER_H
#define TRADER_H

#include "Slave.h"

class Trader : public Slave
{
    public:
        Trader();
        Trader(string, int);
        virtual ~Trader();
        void work();
    protected:
    private:
};

#endif // TRADER_H

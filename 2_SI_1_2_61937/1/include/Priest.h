#ifndef PRIEST_H
#define PRIEST_H

#include "Slave.h"

class Priest : public Slave
{
    public:
        Priest();
        Priest(string, int);
        virtual ~Priest();
        void work();
    protected:
    private:
};

#endif // PRIEST_H

#ifndef SCHOLAR_H
#define SCHOLAR_H

#include "Slave.h"

class Scholar : public Slave
{
    public:
        Scholar();
        Scholar(string, int);
        virtual ~Scholar();
        void work();
    protected:
    private:
};

#endif // SCHOLAR_H

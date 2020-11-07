#ifndef EMPEROR_H
#define EMPEROR_H

#include "Swordsman.h"
#include "CitizenEnum.h"

class Emperor : public Swordsman
{
    public:
        Emperor();
        Emperor(string, int);
        virtual ~Emperor();
        void work();
    protected:
    private:

};

#endif // EMPEROR_H

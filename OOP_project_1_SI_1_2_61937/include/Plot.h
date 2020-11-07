#ifndef PLOT_H
#define PLOT_H

#include "Estate.h"
#include <vector>

enum Communication {
    WATER,
    ELECTRICITY,
    PHONE,
    ROAD,
    CANAL
};

class Plot : public Estate
{
    public:
        Plot();
        virtual ~Plot();

        void printEstate();
        bool hasCommunication(int communicationType);

    protected:

    private:
        vector<Communication> communications;
};

#endif // PLOT_H

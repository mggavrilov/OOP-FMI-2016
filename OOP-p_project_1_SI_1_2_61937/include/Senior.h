#ifndef SENIOR_H
#define SENIOR_H

#include "Junior.h"
#include "Tester.h"

class Senior : public Junior, public Tester
{
    public:
        Senior();
        Senior(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName, string osName);
        virtual ~Senior();

    protected:
    private:
};

#endif // SENIOR_H

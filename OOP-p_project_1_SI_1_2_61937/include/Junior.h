#ifndef JUNIOR_H
#define JUNIOR_H

#include "Employee.h"

class Junior : public virtual Employee
{
    public:
        Junior();
        Junior(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName);
        virtual ~Junior();

    protected:
    private:
};

#endif // JUNIOR_H

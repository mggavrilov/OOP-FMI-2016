#ifndef TESTER_H
#define TESTER_H

#include "Employee.h"

class Tester : public virtual Employee
{
    public:
        Tester();
        Tester(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName, string osName);
        virtual ~Tester();

        void setOS(string osName);
        string getOS() const;
    protected:
        string osName;
    private:
        ostream& print(ostream& out) const;
        istream& enter(istream& in);
};

#endif // TESTER_H

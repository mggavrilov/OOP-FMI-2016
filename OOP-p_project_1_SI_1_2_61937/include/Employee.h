#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

enum WorkPosition {
    JUNIOR,
    TESTER,
    SENIOR
};

class Employee
{
    public:
        Employee();
        Employee(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName);
        virtual ~Employee();

        void setName(string name);
        void setEGN(unsigned egn);
        void setAddress(string setAddress);
        void setEmploymentDate(string employmentDate);
        void setWorkPosition(int position);
        string getName() const;
        unsigned getEGN() const;
        string getAddress() const;
        string getEmploymentDate() const;
        int getWorkPosition() const;
        void setProject(string);
        string getProject() const;

        friend ostream& operator<< (ostream &out, const Employee &employee);
        friend istream& operator>> (istream &in, Employee &employee);

        virtual ostream& print(ostream& out) const;
        virtual istream& enter(istream &in);
    protected:
        WorkPosition position;
        string projectName;
        string name;
        unsigned egn;
        string address;
        string employmentDate;
    private:
};

#endif // EMPLOYEE_H

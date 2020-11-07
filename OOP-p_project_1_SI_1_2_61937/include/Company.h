#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"
#include "Junior.h"
#include "Tester.h"
#include "Senior.h"

using namespace std;

class Company
{
    public:
        Company();
        Company(string companyName, string companyAddress, string companyCEO);
        virtual ~Company();

        void setName(string companyName);
        void setAddress(string companyAddress);
        void setCEO(string companyCEO);
        string getName() const;
        string getAddress() const;
        string getCEO() const;

        ostream& printCompany(ostream& out);
        istream& addEmployee(istream &in, int);
        void fireEmployee(int);
        istream& changeEmployee(istream &in, int);
        Employee& searchName(string);
        Employee& searchEGN(unsigned);
        vector<Employee*> searchProject(string);

        friend ostream& operator<< (ostream &out, const Company &company);
        friend istream& operator>> (istream &in, Company &company);
    protected:
    private:
        string companyName;
        string companyAddress;
        string companyCEO;
        vector<Employee*> employees;
};

#endif // COMPANY_H

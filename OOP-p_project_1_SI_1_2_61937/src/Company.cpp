#include "Company.h"

Company::Company() {}

Company::Company(string companyName, string companyAddress, string companyCEO) {
    this->companyName = companyName;
    this->companyAddress = companyAddress;
    this->companyCEO = companyCEO;
}

Company::~Company()
{
    for(unsigned i = 0; i < employees.size(); i++) {
        delete employees[i];
    }
}

void Company::setName(string companyName) { this->companyName = companyName; }
void Company::setAddress(string companyAddress) { this->companyAddress = companyAddress; }
void Company::setCEO(string companyCEO) { this->companyCEO = companyCEO; }
string Company::getName() const { return companyName; }
string Company::getAddress() const { return companyAddress; }
string Company::getCEO() const { return companyCEO; }

ostream& Company::printCompany(ostream &out) {
    out << "Company name: " << companyName << endl;
    out << "Company address: " << companyAddress << endl;
    out << "Company CEO: " << companyCEO << endl;

    return out;
}

istream& Company::addEmployee(istream &in, int employeeType) {

    switch(employeeType) {
        case 1:
        {
            Junior *junior = new Junior();
            in >> *junior;
            employees.push_back(junior);
            break;
        }
        case 2:
        {
            Tester *tester = new Tester();
            in >> *tester;
            employees.push_back(tester);
            break;
        }
        case 3:
        {
            Senior *senior = new Senior();
            in >> *senior;
            employees.push_back(senior);
            break;
        }
        default:
            break;
    }

    return in;
}

void Company::fireEmployee(int choice) {
    employees.erase(employees.begin() + choice);
}

istream& Company::changeEmployee(istream &in, int choice) {
    in >> *employees.at(choice);

    return in;
}

Employee& Company::searchName(string name) {
    int returnValue;
    for(unsigned i = 0; i < employees.size(); i++) {
        if(!name.compare(employees.at(i)->getName())) {
            returnValue = i;
        }
    }
    return *employees.at(returnValue);
}

Employee& Company::searchEGN(unsigned egn) {
    int returnValue;
    for(unsigned i = 0; i < employees.size(); i++) {
        if(employees.at(i)->getEGN() == egn) {
            returnValue = i;
        }
    }
    return *employees.at(returnValue);
}

vector<Employee*> Company::searchProject(string project) {
    vector<Employee*> returnEmployees;
    for(unsigned i = 0; i < employees.size(); i++) {
        if(!project.compare(employees.at(i)->getProject())) {
            returnEmployees.push_back(employees.at(i));
        }
    }
    return returnEmployees;
}

ostream& operator<< (ostream &out, const Company &company)
{
    for(unsigned i = 0; i < company.employees.size(); i++) {
        out << "#" << i << ":" << endl;
        out << (*company.employees.at(i));
        out << endl;
    }

    return out;
}

istream& operator>> (istream &in, Company &company)
{
    in >> company.companyName >> company.companyAddress >> company.companyCEO;

    return in;
}

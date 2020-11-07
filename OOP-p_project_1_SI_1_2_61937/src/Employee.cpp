#include "Employee.h"

Employee::Employee() {}

Employee::~Employee() {}

Employee::Employee(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName) {
    this->name = name;
    this->egn = egn;
    this->address = address;
    this->employmentDate = employmentDate;
    this->position = position;
    this->projectName = projectName;
}

void Employee::setName(string name) { this->name = name; }
void Employee::setEGN(unsigned egn) { this->egn = egn; }
void Employee::setAddress(string address) { this->address = address; }
void Employee::setEmploymentDate(string employmentDate) { this->employmentDate = employmentDate; }
void Employee::setWorkPosition(int position) { this->position = static_cast<WorkPosition>(position); }
void Employee::setProject(string projectName) { this->projectName = projectName; }
string Employee::getName() const { return name; }
unsigned Employee::getEGN() const { return egn; }
string Employee::getAddress() const { return address; }
string Employee::getEmploymentDate() const { return employmentDate; }
int Employee::getWorkPosition() const { return position; }
string Employee::getProject() const { return projectName; }

ostream& operator<< (ostream &out, const Employee &employee)
{
    return employee.print(out);
}

istream& operator>> (istream &in, Employee &employee)
{
    return employee.enter(in);
}

ostream& Employee::print(ostream& out) const {
    out << "Name: " << name << endl;
    out << "EGN: " << egn << endl;
    out << "Address: " << address << endl;
    out << "Employment date: " << employmentDate << endl;
    out << "Position: ";
    switch(position) {
        case JUNIOR:
            out << "Junior";
            break;
        case TESTER:
            out << "Tester";
            break;
        case SENIOR:
            out << "Senior";
            break;
    }
    out << endl;
    out << "Project they're working on: " << projectName << endl;

    return out;
}

istream& Employee::enter(istream &in) {
    in >> name >> egn >> address >> employmentDate >> projectName;

    return in;
}

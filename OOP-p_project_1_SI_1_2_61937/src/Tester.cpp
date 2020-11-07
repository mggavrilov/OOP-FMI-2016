#include "Tester.h"

Tester::Tester() : Employee()
{
    position = TESTER;
}

Tester::Tester(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName, string osName) : Employee(name, egn, address, employmentDate, position, projectName) {
    position = TESTER;
    this->osName = osName;
}

Tester::~Tester()
{
    //dtor
}

void Tester::setOS(string osName) { this->osName = osName; }
string Tester::getOS() const { return osName; }

ostream& Tester::print(ostream& out) const {
    Employee::print(out);
    out << "OS they're testing on: " << osName << endl;

    return out;
}

istream& Tester::enter(istream& in) {
    Employee::enter(in);
    in >> osName;

    return in;
}

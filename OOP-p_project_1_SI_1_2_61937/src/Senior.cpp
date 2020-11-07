#include "Senior.h"

Senior::Senior() : Employee()
{
    position = SENIOR;
}

Senior::Senior(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName, string osName) : Employee(name, egn, address, employmentDate, position, projectName) {
    position = SENIOR;
    this->osName = osName;
}
Senior::~Senior()
{
    //dtor
}

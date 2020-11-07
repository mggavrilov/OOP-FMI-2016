#include "Junior.h"

Junior::Junior() : Employee() {
    position = JUNIOR;
}

Junior::Junior(string name, unsigned egn, string address, string employmentDate, WorkPosition position, string projectName) : Employee(name, egn, address, employmentDate, position, projectName) {
    position = JUNIOR;
}

Junior::~Junior()
{
    //dtor
}

#include "Slave.h"

Slave::Slave() {}

Slave::Slave(string name, int age) {
    this->name = name;
    this->age = age;
}

Slave::~Slave()
{
    //dtor
}

void Slave::work() {
    cout << "Slave working." << endl;
}

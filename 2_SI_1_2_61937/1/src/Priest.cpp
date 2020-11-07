#include "Priest.h"

Priest::Priest() {}

Priest::Priest(string name, int age) : Slave(name, age)
{
    //ctor
}

Priest::~Priest()
{
    //dtor
}

void Priest::work() {
    cout << "Performing ritual." << endl;
}

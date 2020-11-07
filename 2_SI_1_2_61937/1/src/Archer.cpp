#include "Archer.h"

Archer::Archer() {}

Archer::Archer(string name, int age) : Soldier(name, age)
{
    //ctor
}

Archer::~Archer()
{
    //dtor
}

void Archer::work() {
    cout << "Archer fighting." << endl;
}

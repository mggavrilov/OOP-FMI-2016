#include "Soldier.h"

Soldier::Soldier() {}

Soldier::Soldier(string name, int age) : Slave(name, age)
{
    //ctor
}

Soldier::~Soldier()
{
    //dtor
}

void Soldier::work() {
    cout << "Fighting against enemy." << endl;
}

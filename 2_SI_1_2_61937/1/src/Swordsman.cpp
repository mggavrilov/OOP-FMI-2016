#include "Swordsman.h"

Swordsman::Swordsman() {}

Swordsman::Swordsman(string name, int age) : Soldier(name, age)
{
    //ctor
}

Swordsman::~Swordsman()
{
    //dtor
}

void Swordsman::work() {
    cout << "Swordsman fighting." << endl;
}

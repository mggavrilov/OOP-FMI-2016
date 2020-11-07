#include "Emperor.h"

Emperor::Emperor() {}

Emperor::Emperor(string name, int age) : Swordsman(name, age)
{
    //ctor
}

Emperor::~Emperor()
{
    //dtor
}

void Emperor::work() {
    cout << "Ruling the empire." << endl;
}

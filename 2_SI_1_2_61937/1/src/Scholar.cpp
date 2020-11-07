#include "Scholar.h"

Scholar::Scholar() {}

Scholar::Scholar(string name, int age) : Slave(name, age)
{
    //ctor
}

Scholar::~Scholar()
{
    //dtor
}

void Scholar::work() {
    cout << "Researching science." << endl;
}

#include "Trader.h"

Trader::Trader() {}

Trader::Trader(string name, int age) : Slave(name, age)
{
    //ctor
}

Trader::~Trader()
{
    //dtor
}

void Trader::work() {
    cout << "Trading." << endl;
}

#ifndef SLAVE_H
#define SLAVE_H

#include <string>
#include <iostream>

using namespace std;

class Slave
{
    public:
        Slave();
        Slave(string, int);
        virtual ~Slave();
        virtual void work();
    protected:
    private:
        string name;
        int age;
};

#endif // SLAVE_H

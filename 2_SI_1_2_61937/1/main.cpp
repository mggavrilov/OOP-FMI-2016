#include "Empire.h"

using namespace std;

void menu(Empire &empire) {
    int choice;
    string input, ignore;

    string citizenType;
    int type;
    int amount;

    do {
        cout << "1. Add citizens to the empire" << endl;
        cout << "2. List citizens" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Usage: add <slave|trader|soldier|scholar|priest|archer|swordsman|emperor> <amount>" << endl;
                cout << "Input: ";
                cin >> ignore >> citizenType >> amount;

                if(citizenType == "slave")
                    type = 0;
                else if(citizenType == "trader")
                    type = 1;
                else if(citizenType == "soldier")
                    type = 2;
                else if(citizenType == "scholar")
                    type = 3;
                else if(citizenType == "priest")
                    type = 4;
                else if(citizenType == "archer")
                    type = 5;
                else if(citizenType == "swordsman")
                    type = 6;
                else
                    type = 7;

                for(int i = 0; i < amount; i++)
                {
                    empire.addCitizen(type);
                }

                cout << amount << " citizens added to the empire." << endl;

                break;
            case 2:
                cout << "The empire has " << empire.getPopulation() << " citizens." << endl;
                break;
            case 3:
                break;
        }
    } while(choice != 3);
}


int main()
{
    Slave *s = new Soldier("Achilles", 20);
    s->work();

    Slave *s1 = new Trader("Adam", 24);
    s1->work();

    Slave *s2 = new Emperor("Julius Caesar", 50);
    s2->work();

    delete s;
    delete s1;
    delete s2;

    Empire RomanEmpire("Roman Empire");
    menu(RomanEmpire);

    return 0;
}

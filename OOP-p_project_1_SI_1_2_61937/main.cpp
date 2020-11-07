#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

int main()
{
    Company company = Company();
    int choice;

    do {
        cout << "1. Enter company information" << endl;
        cout << "2. Print company information" << endl;
        cout << "3. Add employee" << endl;
        cout << "4. Fire employee" << endl;
        cout << "5. Change employee information" << endl;
        cout << "6. Search employee by name" << endl;
        cout << "7. Search employee by EGN" << endl;
        cout << "8. List people working on a certain project" << endl;
        cout << "9. Print all employees" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Name, Address, CEO:" << endl;
                cin >> company;
                break;
            case 2:
                company.printCompany(cout);
                break;
            case 3:
                {
                    cout << "Please select the position of the employee." << endl;
                    cout << "1. Junior" << endl;
                    cout << "2. Tester" << endl;
                    cout << "3. Senior" << endl;
                    cout << "Employee work position: ";
                    int employeeType;
                    cin >> employeeType;
                    if(employeeType == 1)
                        cout << "Name, EGN, Address, Employment Date, Project Name:" << endl;
                    else
                        cout << "Name, EGN, Address, Employment Date, Project Name, OS Name:" << endl;
                    company.addEmployee(cin, employeeType);
                    break;
                }

            case 4:
                {
                    cout << company;
                    cout << "Select the index of the employee you'd like to fire: ";
                    int choice;
                    cin >> choice;
                    company.fireEmployee(choice);
                    break;
                }
            case 5:
                {
                    cout << company;
                    cout << "Select the index of the employee you'd like to change: ";
                    int choice;
                    cin >> choice;
                    cout << "Name, EGN, Address, Employment Date, Project Name, (OS Name):" << endl;
                    company.changeEmployee(cin, choice);
                    break;
                }
            case 6:
                {
                    string name;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << company.searchName(name);
                    break;
                }
            case 7:
                {
                    unsigned egn;
                    cout << "Enter EGN: ";
                    cin >> egn;
                    cout << company.searchEGN(egn);
                    break;
                }
            case 8:
                {
                    string project;
                    cout << "Enter project name: ";
                    cin >> project;
                    vector<Employee*> employees = company.searchProject(project);
                    for(unsigned i = 0; i < employees.size(); i++) {
                        cout << "#" << i << ":" << endl;
                        cout << *employees.at(i);
                        cout << endl;
                    }
                    break;
                }
                break;
            case 9:
                cout << company;
                break;
        }
    } while(choice != 0);

    return 0;
}

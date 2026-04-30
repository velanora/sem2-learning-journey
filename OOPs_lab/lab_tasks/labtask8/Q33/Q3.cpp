#include <iostream>
#include"Q3.h"
using namespace std;

int Employee::maxlimit = 5;
int Employee::employeeCount = 0;

Employee::Employee() : name("unknown"), ID(0)
{
    if (employeeCount < maxlimit)
    {
        employeeCount++;
    }
    else
    {
        cout << "This library is full!! \nYou cannot add more books\n";
    }
}

Employee::Employee(string name, int ID)
{
    if (employeeCount < maxlimit)
    {
        this->name = name;
        this->ID = ID;
        employeeCount++;
    }
    else
    {
        cout << "No more employees can be added! \n";
    }
}

Employee::~Employee()
{
    employeeCount--;
    cout << "employee removed \n";
}

void Employee::display()
{
    cout << "Current number of employees : " << employeeCount << endl;
}



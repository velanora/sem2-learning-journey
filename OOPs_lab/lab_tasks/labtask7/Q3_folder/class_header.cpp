#include <iostream>
#include <cstring>
#include "class_header.h"
using namespace std;

// default constructor
Employee::Employee() : name("Unknown"), basic_salary(0), ID(0) {}

// parameterized constructor
Employee::Employee(string n, double bs, int id) : name(n), basic_salary(bs), ID(id) {}

// member function
double Employee::bonus()
{
    if (basic_salary > 0)
    {
        int bonus = basic_salary * 10 / 100;
        basic_salary += bonus;
        return bonus;
    }

    // in case of default constructor
    return 0.0;        

}
// member function
void Employee::display()
{
    cout << "Employee name : " << name << endl;
    cout << "Employee Basic salary: " << basic_salary << endl;
    cout << "Employee ID : " << ID << endl;
    cout << "Bonus amount : " << bonus()<<endl;
    cout << "Employee Basic salary after 10% bonus : " << basic_salary << endl;
}
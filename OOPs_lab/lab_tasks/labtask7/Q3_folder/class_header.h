#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    string name;
    double basic_salary;
    int ID;

    public :

    Employee();
    Employee(string n, double bs, int id);
    double bonus();
    void display();

};

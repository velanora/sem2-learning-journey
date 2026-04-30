#include<iostream>
#include <string>
using namespace std;

class Employee
{
    private :
    static int maxlimit;
    static int employeeCount;
    string name;
    int ID;

    public :

    Employee();


    Employee(string name, int ID);

    ~Employee();

    static void display();


};

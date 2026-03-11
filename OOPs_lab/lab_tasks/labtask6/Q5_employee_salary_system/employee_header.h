#include<iostream>
#include<string>
using namespace std;


class Employee
{
    private :
        string name;
        int ID;
        int basic_salary;

    public :
        void input_Data();
        int calculate_Bonus();
        void display_Details();


};
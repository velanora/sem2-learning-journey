#include<iostream>
#include<limits>
#include"employee_header.h"
using namespace std;

void Employee::input_Data()
{
    cout<<"Enter name : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,name);
    cout<<"Enter ID : ";
    cin>>ID;
    cout<<"Enter salary : ";
    cin>>basic_salary;

}
        
int Employee::calculate_Bonus()
{
    float bonus = basic_salary*10/100;
    return bonus;

}
        
void Employee::display_Details()
{
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<ID<<endl;
    cout<<"basic Salary : "<<basic_salary<<endl;
    int bonus = calculate_Bonus();
    cout<<"Bonus : "<<bonus<<endl;
    int final_salary = basic_salary + bonus;

    cout<<"Final salary : "<<final_salary<<endl;

}
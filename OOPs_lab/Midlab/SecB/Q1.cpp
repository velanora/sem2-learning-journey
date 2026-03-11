#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    string name;
    int id;
    int basic_salary;

};

void net_salary(int &p)
{
    if(p>60000)
    {
        int deduct = (p*0.5)/100;
        p = p-deduct;
    }
}
int main()
{

    Employee e1;

    cout<<"Enter the employee  name : ";
    getline(cin, e1.name);
    cout<<"Enter the employee ID : ";
    cin>>e1.id;
    cout<<"Enter the basic Salary : ";
    cin>>e1.basic_salary;

    net_salary(e1.basic_salary);

    cout<<"--------- Employee Details -------- "<<endl;
    cout<<"Employee name : "<< e1.name<<endl;
    cout<<"Employee ID : "<<e1.id<<endl;
    cout<<"Net salary after deduction of tax : "<<e1.basic_salary<<endl;
    cout<<"----------------------------------"<<endl;
    
    

    return 0;
}
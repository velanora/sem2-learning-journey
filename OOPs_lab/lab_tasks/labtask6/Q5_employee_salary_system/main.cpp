#include<iostream>
#include"employee_header.h"
using namespace std;

int main()
{
    int N;
    cout<<"Enter number of employees : ";
    cin>>N;

    Employee emp[N];


    for (int i = 0; i < N; i++)
    {
        cout<<"======= Employee "<<i+1<<" ========"<<endl;
        emp[i].input_Data();
        emp[i].display_Details();
    }
    
}
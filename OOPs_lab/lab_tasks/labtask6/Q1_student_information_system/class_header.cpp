#include<iostream>
#include<string>
#include"class_header.h"

using namespace std;

//member function definition

void Student::input()
{
    cout<<"-----Taking Input------"<<endl;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter Roll no. : ";
    cin>>roll;
    cout<<"Enter Marks :";
    cin>>marks;
};

void Student::display()
{
    cout<<"-----Displaying------"<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"Roll no. : "<<roll<<endl;
    cout<<"Marks : "<<marks<<endl;
};


// labtask7
// Q1

#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    string name;
    int roll_no;
    int marks;

    public: 
    // Default constructor
    Student()
    {
        name = "Unknown name";
        roll_no =0;
        marks = 0;

    }

    // parameterized constructor
    Student(string n, int r, int m)
    {
        name = n;
        roll_no = r;
        marks = m;

    }

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_no<<endl;
        cout<<"Marks : "<<marks<<endl;
    }

};

int main()
{
    cout<<"----Default constructor called ----"<<endl;
    Student s1;
    s1.display();
    cout<<endl;

    cout<<"----Parameterized constructor called ----"<<endl;
    Student s2("Ali", 1234, 80);
    s2.display();
    cout<<endl;

}
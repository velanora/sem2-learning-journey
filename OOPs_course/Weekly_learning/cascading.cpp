#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    double gpa;

    public :
    // list initializer method
    student() : name(""), age(0),gpa(0.0){}

    student& setname(string n)
    {
        this->name = n;
        return *this;
    }

    student& setage(int age)
    {
        this->age = age;
        return *this;
    }

    student& setgpa(double gpa)
    {
        this->gpa = gpa;
        return *this;
    }

    void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"gpa : "<<gpa<<endl;
    }

};

int main()
{
    student s1;

    s1.show();

    s1.name("Ali").age(18).gpa(3.2);

    s1.show();
}
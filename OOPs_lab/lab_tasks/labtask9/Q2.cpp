#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    protected:
    string name;
    int age;

    public:

    Person() {}

    Person(int a, string n): age(a), name(n){}

    void set_person_details(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display_person()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class AcademicRecord : public virtual Person
{
    protected: 
    float GPA;
    string Major;

    public :

    AcademicRecord( float g, string m) :  GPA(g), Major(m)  {}

    void setAcademicDetails(string n, int a, float gpa , string m)
    {
        set_person_details(n, a);
        GPA = gpa;
        Major = m;
    }

    void DisplayAcademicDetails()
    {
        display_person();
        cout<<"GPA : "<<GPA<<endl;
        cout<<"Major : "<<Major<<endl;
    }
    
};

class Scholarship : public virtual Person, public AcademicRecord
{
    private :
    int scholarshipAmount;
    public :

    Scholarship( string n,int a,float g, string m, int sm ): Person(a, n), AcademicRecord( g,m) , scholarshipAmount(sm) {};

    void Evaluate_scholarship()
    {
        if(GPA >=3.5 && age < 25)
        {
            scholarshipAmount = 50000;
        }
        else{
            scholarshipAmount = 0;
        }

    }

    void displayScholarshipDetails()
    {
        DisplayAcademicDetails();
        cout<<"scholarship : "<<scholarshipAmount<<endl;

    }
};
int main()
{ 
    Scholarship s("Areej",20, 3.0, "CS", 0);

    s.Evaluate_scholarship();
    s.displayScholarshipDetails();


    return 0;
}
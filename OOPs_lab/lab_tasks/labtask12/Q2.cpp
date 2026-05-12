#include<iostream>
using namespace std;

class Professor
{
    int ID;
    string name;
    string specialization;

    public :
    Professor(int id, string n, string s) : ID(id), name(n), specialization(s) {};

    void display_professor()
    {
        cout<<"Professor ID : "<<ID<<endl;
        cout<<"Professor Name "<<name<<endl;
        cout<<"specialization : "<<specialization<<endl;
    }
};

class Department
{
    string depName;
    Professor * prof;

    public :
    Department(string dN, Professor* p)
    {
        depName = dN;
        prof = p;
    }

    void display_dep()
    {
        cout<<"Department name : "<<depName<<endl;
        prof->display_professor();
        cout<<endl;
    }
};

int main()
{
    Professor p1(1, "Awais" , "ENT");
    Professor p2(2,"Talha","orthopadic surgen" );

   
    Department D1("ENT department ", &p1);
    Department D2("orthopadic department" , &p2);

    D1.display_dep();
    D2.display_dep();

}



















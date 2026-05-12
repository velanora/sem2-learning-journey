// Inheritance  , Access specidfier

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    protected:
    char *name;
    int age;

    public :


    Person() :  age(0)
    {
        name = new char[strlen("Unknown")+ 1];
        strcpy(name, "unknown");
    };
    Person(const char* n, int a): age (a)
    {
        name = new char[strlen(n)+ 1];
        strcpy(name, n);
    };

    void display_info()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

    ~Person()
    {
        delete[] name;
    }

};

class Employee : public Person
{
    protected:
    int ID;
    char *depart;

    public :
    Employee(): ID(0), Person()
    {

        depart = new char[strlen("unknown")+ 1];
        strcpy(depart, "unknown");
    };

    Employee(int id, const char* dep, const char* n, int a) : ID(id) , Person(n, a) 
    {
        depart = new char[strlen(dep)+ 1];
        strcpy(depart, dep);


    };

    ~Employee()
    {
        delete[] depart;
    }

    void display_employee()
    {
        display_info();
        cout<<"ID : "<<ID<<endl;
        cout<<"Department : "<<depart<<endl;
    }
};

class manager: public Employee
{
    protected:
    int teamsize;
    int bonus;

    public:    

    manager() : teamsize(0), bonus(0), Employee(){};

    manager(const char* n, int a, int id,const char *dep, int t, int b): teamsize(t), bonus(b), Employee(id, dep ,n, a) {};

    void display_fullprofile()
    {
        display_employee();
        cout<<"Team size : "<<teamsize<<endl;
        cout<<"Bonus : "<<bonus<<endl;
    }
};

int main()
{
    manager m1("fatima",18, 14,"AI",8, 7000);
    m1.display_fullprofile();
}


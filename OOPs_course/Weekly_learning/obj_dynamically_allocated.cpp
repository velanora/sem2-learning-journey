#include<iostream>
#include<cstring>
using namespace std;

class Welcome
{
    char *name;
    int age;

    public :

    Welcome() :  age(0) {
        name = new char[8];
        strcpy(name, "Unknown");
    }

    Welcome(const char* n, int a)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
    }

    void set(const char* n, int a)
    {
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
    }


    void display()
    {
        cout<<"Welcome"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }


    ~Welcome()
{
    delete[] name;
}

};

int main()
{
    Welcome * ptrObj = new Welcome[3];
    ptrObj[0].set("Ali", 18);
    ptrObj[1].set("Ahmed", 17);
    ptrObj[2].set("Khan", 19);

    ptrObj[0].display();
    ptrObj[1].display();
    ptrObj[2].display();


    delete[] ptrObj;

    return 0;
}
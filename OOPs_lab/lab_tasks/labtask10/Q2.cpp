#include<iostream>
#include<cstring>
using namespace std;
class student
{
    public:
    char* name ;
    int roll_no;

    student(const char* n, int r)
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        roll_no = r;
    }

    void showData()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
    }

    ~student()
    {
        delete[] name;
        cout<<"destructor called"<<endl;
    }

};
int main()
{
    student s1("Usman",  101);
    student s2 = s1;

    s1.showData();
    s2.showData();

    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    public:
    char* name ;
    int roll_no;

    // parameterized copy constructor
    student(const char* n, int r)
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        roll_no = r;
    }

    // deep copy constructor
    student(const student&S)
    {
        name = new char[strlen(S.name)+1];
        strcpy(name, S.name);
        roll_no = S.roll_no;
    }

    // display function
    void showData()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
    }

    void update_name(const char *n)
    {
        delete[] name;
        name = new char[strlen(n)+1];
        strcpy(name, n);

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

    cout<<"----Before update----"<<endl;
    s1.showData();
    s2.showData();

    s2.update_name("Ali");

    cout<<"----After update----"<<endl;
    s1.showData();
    s2.showData();

    return 0;
}
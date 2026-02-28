#include<iostream>
using namespace std;

// pointer to a structure
/* struct car
{
    int regno;
    string name;
};
int main()
{
    car c1 = {1234,"honda"};
    car *ptr1 = &c1;

    cout<<(*ptr1).regno<<endl;              // accessing structure member through dereferncing and dot operator
    cout<<(ptr1)->name<<endl;               // accessing structure member through arrow

    return 0;


} */

// pointer as a data member of structure
struct student
{
    int id;
    string *p_name;
};

int main()
{
    string name = "areej fatima";
    student s1;
    s1.id =344;
    s1.p_name = &name;

    cout<<"accessing structure member through normal variable : "<<s1.id<<endl;
    cout<<"accessing structure member through pointer variable : "<<*s1.p_name<<endl;

    return 0;
}


// May Pass Structure Variable or Object to Function.


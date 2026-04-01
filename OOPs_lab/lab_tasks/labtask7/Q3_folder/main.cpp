// labtask7
// Q1

#include <iostream>
#include <cstring>
#include"class_header.h"
using namespace std;

int main()
{
    Employee e1;
    Employee e2("Ali" , 1234, 30);

    cout<<"----Details of employee 1----"<<endl;
    e1.display();
    cout<<"----Details of employee 2----"<<endl;
    e2.display();

}
#include<iostream>
using namespace std;

int main()
{
    
    /* int *p = NULL;
    cout<<"address of p : "<<p<<endl;
    p = new int(10);

    cout<<"address of p : "<<p<<endl;
    cout<<"value of p : "<<*p<<endl;

    *p = 11;
    cout<<"address of p : "<<p<<endl;
    cout<<"value of p : "<<*p<<endl; */

    int a = 30;
    int &b = a;

    cout<<"address of a : "<<&a<<endl;
    cout<<"value of a : "<<a<<endl; 

    cout<<"address of b : "<<&b<<endl;
    cout<<"value of b : "<<b<<endl; 




}
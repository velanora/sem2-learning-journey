#include<iostream>
using namespace std;

int main()
{
    /* int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;

    int*ptra = &a;
    int*ptrb = &b;

    int sum = *ptra + *ptrb;

    cout<<*ptra<<"+"<<*ptrb<<"="<<sum<<endl; */

    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;

    int*ptra = &a;
    int*ptrb = &b;

    int max;
    max = (*ptra>*ptrb)?*ptra:*ptrb;

    cout<<"Maximum number : "<<max<<endl;

    return 0;

}
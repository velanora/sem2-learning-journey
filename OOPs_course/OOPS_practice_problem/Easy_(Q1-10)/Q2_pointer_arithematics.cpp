/*
Q2. Pointer Arithmetic: Perform ++, --, +, - operations on an integer pointer and
observe changes.
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    
    int ages[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Age of student  "<<i+1<<" : ";
        cin>>*(ages+i);
    }
    
    int *p_ages = ages;

    cout<<"printing the even digits through pointer arithematics"<<endl;
    for (int i = 0; i < n; i++)
    {
       if(*(p_ages) % 2 == 0)
       {
          cout<<i<<"-->"<<*p_ages<<"\n";
       }
       p_ages++;   // pointer++
    }

    cout<<"printing the odd digits through pointer arithematics"<<endl;
    for (int i = 0; i < n; i++)
    {
       if(*(p_ages) % 2 == 1)
       {
          cout<<i<<"-->"<<*p_ages<<"\n";
       }
       p_ages--;   // pointer--
    }

    return 0;
}
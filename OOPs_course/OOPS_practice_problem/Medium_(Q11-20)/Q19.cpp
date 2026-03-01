/* Q19 Implement a Simple Calculator Using Function Pointers: Perform +,-,*,/
operations using function pointers. */
#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
int subtract(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
int divide(int a, int b)
{
    return a/b;
}

int main()
{

    int num1,num2;
    char operation;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    cout<<"Enter the operation : ";
    cin>>operation;

    int (*p)(int ,int) = nullptr;               // function pointer

    if ( operation == '+')
    {
        p = &add;
        cout<<"Adding "<<num1<<" and "<<num2<<endl;
        cout<<"result : "<<p(num1,num2)<<endl;
    }
    else if (operation == '-')
    {
        p = &subtract;
        cout<<"subtracting "<<num2<<" from "<<num1<<endl;
        cout<<"result : "<<p(num1,num2)<<endl;
    }
    else if (operation == '*')
    {
        p = &multiply;
        cout<<"Multiplying "<<num1<<" and "<<num2<<endl;
        cout<<"result : "<<p(num1,num2)<<endl;
    }
    else if (operation == '/')
    {
        p = &divide;
        cout<<"dividing "<<num1<<" by "<<num2<<endl;
        cout<<"result : "<<p(num1,num2)<<endl;
    }
    else 
    {
        cout<<"Invalid operator"<<endl;
    }


    return 0;
}
// 
/* 
#include<iostream>
using namespace std;
void func(int*a, int*b, int**result)
{
    if(*a>*b)
    {
        **result = *a;
    }
    else
    {
        **result = *b;
    }
}

int main()
{
    int temp = 0;
    int *ptr = &temp;
    int a = 10;
    int b = 20;

    cout<<"TEMP :"<<temp<<endl;
    cout<<"*ptr :"<<*ptr<<endl;
    func( &a, &b, &ptr);
    cout<<"TEMP :"<<temp<<endl;
    cout<<"*ptr :"<<*ptr<<endl;

    return 0;
} */

#include<iostream>
using namespace std;

int* func(int length)
{
    int*ptr = new int [5];

    for (int i = 0; i < 5; i++)
    {
        *(ptr+i)=(i+1);
    }

    return ptr;
    
}                
int main()
{
    int size ;
    cin>>size;
    int*received_array = func (size);

    cout<<"Value stored in other function"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"\n"<<*(received_array+i);
    }
    
    cout<<"  "<<endl;

    delete[] received_array;
    received_array = NULL;

}


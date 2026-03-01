/* Q24. Function Returning a Pointer to an Array: Create a function that returns a pointer to
an integer array.*/

#include<iostream>
#include<cstring>
using namespace std;

int* create_array(int N)
{
    int *arr = new int[10];

    for (int i = 0; i <= 10; i++)
    {
        arr[i]= N*(i+1);
    }
    
    return arr;
}

int main()
{
    int Num;
    cout<<"Enter the number : ";
    cin>>Num;
    int *p = create_array(Num);

    cout<<"----Multiple of "<<Num<<"-----"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;

    delete[] p;

    return 0;
}
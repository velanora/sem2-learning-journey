/*Passing Arrays to Functions Using Pointers: Implement function sum(int *arr,
int size) to find sum of elements.*/
#include<iostream>
using namespace std;

void sum(int *ptr,int size)
{
    int sum=0;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum+= *(ptr+i*size+j);
        }
    }
    cout<<"sum of array : "<<sum;

}

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        cout<<"----row 1---"<<endl;
        for (int j = 0; j < n; j++)
        {
            cout<<"element "<<j+1;
            cin>>arr[i][j];
        }
    }

    sum(&arr[0][0],n);
    


    return 0;

}

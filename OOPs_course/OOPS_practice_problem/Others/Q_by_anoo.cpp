/* Rotate an array to the left by k position */

#include<iostream>
#include<string>
using namespace std;
int main()
{

    int arr[]={ 3, 4,9,6,7, 11};
    int N = sizeof(arr)/ sizeof(arr[0]);

    int k ;
    cout<<"Enter the number of k : ";
    cin>>k;
    while(k>N)
    {
        cout<<"Invalid input!! \nYou entered number greater than "<<k<<endl;
        cout<<"Enter the number again : ";
        cin>>k;
    }
    cout<<endl;

    // loop to display original array
    cout<<"Original array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
         
    }
    cout<<endl;


    int j= 0;
    int temp[k];
    // loop to  rotate numbers by k position
    for (int i = 0; i < N; i++)
    {
        if(i<k)
        {
            // storing starting numbers (k) in a temp array

            temp[j]= arr[i];
            j++;
        }
        
        arr[i]= arr[i+k];
        
    }

    j=0;                  // resetting to zero

    // loop to move starting numbers (k) to last
    for (int i = 0; i < N; i++)
    {
        if( i == N-k)
        {
            while(j<k)
            {
                arr[i+j]= temp[j];
                j++;
            }
            break;
        }
    }
    

    // loop to display rotated array
    cout<<"Rotated array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;

    return 0;
    

}
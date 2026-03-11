/* Q21 : Pointer-Based Prime Number Finder: Find all prime numbers in a given range using
pointers*/

#include<iostream>
using namespace std;

int main()
{

    int start, end;
    cout<<"Enter the start of range : ";
    cin>>start;
    cout<<"Enter the end of range : ";
    cin>>end;

    int *p_start = &start, *p_end = &end;
    bool prime = true;

    cout<<"Prime numbers from "<<*p_start<<" to "<<*p_end<<" : ";
    for (int i = *p_start; i < *p_end; i++)
    {
        prime = true;
        for (int j = i-1; j>1; j--)
        {
            if(i%j== 0)
            {
                prime = false;
                continue;
            }
            
        }

        if(prime == true)
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}
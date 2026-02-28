/* 13 : Find Frequency of an Element in an Array Using Pointers: Count occurrences of an
integer in an array using pointers.*/

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    char str1[n];
    cin.ignore();
    cout<<"Enter the string : ";
    cin.getline(str1,n);
    char*ptr1= str1;
    int count =0;

    for (int i = 0;  *(ptr1+i) != '\0'; i++)
    {
        count =1;
        if(*(ptr1+i) == ' ')
        {
            continue;
        }

        // Check if character already counted
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++)
        {
            if (*(ptr1 + i) == *(ptr1 + k))
            {
                alreadyCounted = true;
                break;
            }
        }

        // whether we will skip this alphabet or not??
        if (alreadyCounted)
        {
            continue;
        }

        for (int j = i+1;*(ptr1+j) != '\0' ; j++)
        {
            if(*(ptr1+i)==*(ptr1+j))
            {
                count++;
            }
        }
        cout<<"the alphabet "<<*(ptr1+i)<<" comes "<<count<<" times"<<endl;
        
    }

   return 0;
}
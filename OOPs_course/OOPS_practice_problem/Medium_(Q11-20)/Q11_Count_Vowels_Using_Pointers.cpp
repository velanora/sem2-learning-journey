/*
11. Count Vowels Using Pointers: Traverse a character array using pointers and count
vowels.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    char arr[n];

    cin.ignore();
    cin.getline(arr,n);
    char* ptr = arr;

    int count = 0;
    for (int i = 0; *(ptr+i)!='\0' ; i++ )
    {
        if(*(ptr+i)=='a' ||*(ptr+i) =='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u' || *(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' ||*(ptr+i)=='U')
        {
            count++;
        }

    }

    cout<<"vowels : "<<count<<endl;
    
    return 0;
}
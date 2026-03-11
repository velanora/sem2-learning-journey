/*
Q3. Pointer to an Array: Access an integer array using pointers instead of indexing.
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int marks[n];
    int *p_marks= marks;

    for (int i = 0; i < n; i++)
    {
        cout<<"marks of subject 1 : ";
        cin>>*(marks+i);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"marks of subject 1 : "<<*(p_marks+i)<<endl;
    }

    return 0;
}
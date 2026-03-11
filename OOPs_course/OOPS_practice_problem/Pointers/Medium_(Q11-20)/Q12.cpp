// 12. Copy String Without Using strcpy(): Copy one string to another using pointers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    char str1[n+n];
    char str2[n];

    cin.ignore();
    cout<<"Enter string number 1 : ";
    cin.getline(str1,n+n);

    cout<<"Enter string number 2 : ";
    cin.getline(str2,n);

    char*ptr1 = str1;
    char*ptr2= str2;
    int count=0;
    
    // loop for counting string 1 elements
    int i=0;
    while(*(ptr1+i) != '\0')
    {
       count++;
       i++;
    }

    *(ptr1+i) =' ';
    count++;

    int j = 0;
    while( *(ptr2+j) != '\0' )
    {
        *(ptr1+count+j) = *(ptr2+j);
        j++;
    }
    *(ptr1+count+j) ='\0';


    cout<<"string 1 after cancatenation : ";
    puts(ptr1);
    
    return 0;

}
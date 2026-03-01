/* 22. Concatenate Two Strings Using Pointers: Implement strcat() functionality with
pointers.*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    char str1[50] , str2[50];
    cout<<"Enter string 1 : ";
    fgets(str1,50,stdin);
    cout<<"Enter string 2 : ";
    fgets(str2, 50,stdin);


    // strcspn will returns the index of first occurance of '\n' and replaces the index with '\0'.

    str1[strcspn(str1, "\n")]== 0;   
    str2[strcspn(str2, "\n")]== 0;

    char *p_str1 = str1;
    char *p_str2 = str2;

    strcat(p_str1, p_str2);     


    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
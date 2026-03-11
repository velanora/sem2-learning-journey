/* 23. Implement strrev() Using Pointers: Reverse a string without using built-in functions. */

#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    char str1[50];
    char *p_str1 = str1;

    cout<<"Enter the string : ";
    fgets(p_str1 , 50, stdin);

    char str2[50];
    char *p_str2 = str2;
    int count = strlen(p_str1);


    if (p_str1[count - 1] == '\n')
        count--;

    int j=0;
    for (int i = count-1; i >= 0 ; i--)
    {
        p_str2[j] = p_str1[i];
        j++;
    }
    p_str2[j] = '\0';


    for (int i = 0; p_str2[i] != '\0' ; i++)
    {
        p_str1[i] = p_str2[i];
        j++;
    }

    cout<<"string after reversed : "<<(str1);

    return 0;
}

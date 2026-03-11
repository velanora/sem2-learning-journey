/*27. Find Palindromes in a String Using Pointers: Check if a word in a sentence is a
palindrome*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cout << "Enter the string : ";
    cin.ignore();
    getline(cin, str);
    string *p = &str;

    int count = 0;
    for (int i = 0; p[i] != '\n'; i++)
    {
        for (int i = 0 + count; p[i] != '\0'; i++)
        {

            count++;
        }
    }

    return 0;
}
/*Replace Vowels in a String Using Pointers: Replace vowels with ‘*’ in a dynamically
allocated string*/


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);
    string *p= &str;

    

    for (int i = 0;i < p->length(); i++)
    {
        if ((*p)[i]=='a' || (*p)[i]=='e' || (*p)[i]=='i' ||(*p)[i]== 'o' || (*p)[i]=='u' || (*p)[i]=='A' || (*p)[i]=='E' || (*p)[i]=='I' || (*p)[i]=='O' || (*p)[i]=='U')
        {
            (*p)[i] = '*';
        }
    }

    for (int i = 0; i < (*p).length() ; i++)   //
    {
        cout<<(*p)[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}

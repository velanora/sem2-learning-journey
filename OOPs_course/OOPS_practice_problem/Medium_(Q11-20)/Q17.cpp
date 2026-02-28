#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size : ";
    cin>>n;
    char str[n];
    
    cin.ignore();
    cout<<"enter the string : ";
    cin.getline(str,n);
    char *ptr = str;
    int unique = 0;

    for (int i = 0; *(ptr+i) != '\0'; i++)
    {

        // ignoring the space char
        bool unique = true;
        if (*(ptr+i) == ' ') 
        {
            continue;
        }
        
        // checking if the char is unique??
        for (int j = 0; *(ptr+j)!='\0'; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(*(ptr+i) == *(ptr+j) )
            {
                unique = false;
                break;
            }
        }

        //skipping the iteration if it's not unique
        if (unique == false)
        {
            continue;
        }
        else
        {
            cout<<*(ptr+i)<<"  is unique "<<endl;
        }
    
    }
    
    return 0;
}
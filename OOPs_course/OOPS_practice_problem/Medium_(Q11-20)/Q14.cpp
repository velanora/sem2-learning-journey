/*14. Sorting Strings Using Pointers: Sort an array of strings using pointer manipulation.*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 
    int n,l;
    cout<<"Enter the number of rows : ";
    cin>>n;
    cout<<"Enter the length : ";
    cin>>l;

    char str[n][l];
    char (*ptr)[l] = str;



    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the string "<<i+1<<" : ";
        cin.getline(str[i],l);
    }
    
    
    int count = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (  *(*(ptr+i)+0)  < *(*(ptr+j)+0) )
            {
                char temp[l];
                strcpy(temp, *(ptr + i));      // temp = string i
                strcpy(*(ptr + i), *(ptr + j)); // string i = string j
                strcpy(*(ptr + j), temp);  // string j = string i
                
            }
            
        }
        
    }

    cout<<"--------Swapping-------"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr+i);
        cout<<endl;
    }
    

    return 0;
}
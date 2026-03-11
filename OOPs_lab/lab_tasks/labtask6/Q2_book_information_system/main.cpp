#include<iostream>
#include<string>
#include"book_header.h"

using namespace std;

int main()
{
    Book books[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"===== BOOK "<<i+1<<" ==== "<<endl;
        books[i].input();
        books[i].display();
        cout<<endl;
    }
    
    return 0;

}
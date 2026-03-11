#include<iostream>
#include<limits>
#include<string>
#include"book_header.h"
using namespace std;

void Book::input()
{
    cout<<"-----Taking Input------"<<endl;
    cout<<"Enter title name : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, title);
    cout<<"Enter author name : ";
    getline(cin, name);
    cout<<"Enter price :";
    cin>>price;
};

void Book::display()
{

    cout << "-----Displaying------" << endl;
    cout << "Title name : " << title << endl;
    cout << "Author name : " << name << endl;
    cout << "Price :" << price << endl;
};
#include<iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string title;
        string name;
        int price;

    public :
        void input();
        void display();
};
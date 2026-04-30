   #include<iostream>
#include <string>
using namespace std;

class LibraryBook
{
    private :
    static int maxBooks;
    static int bookCount;
    string name;
    int ID;

    public :

    LibraryBook() : name("unknown"), ID(0)
    {
        if(bookCount< maxBooks)
        {
            bookCount++;
        }
        else
        {
            cout<<"This library is full!! \nYou cannot add more books\n";
        }
    }


    LibraryBook(string name, int ID)
    {
        if(bookCount<= maxBooks)
        {
            this->name = name;
            this->ID = ID;
            bookCount++;
        }
        else
        {
            cout<<"This library is full!! \nYou cannot add more books\n";
        }
    }

    ~LibraryBook()
    {
       bookCount--;
       cout<<"Book removed or returned\n";
    }

   static void display()
    {
        cout<<"Current count of books : "<<bookCount<<endl;

    }
};

int LibraryBook::maxBooks = 5;
int LibraryBook::bookCount = 0;

int main()
{
    LibraryBook b1;
    b1.display();

    LibraryBook b2("nanhay doggy ",4562);
    b2.display();

    LibraryBook b3;
    b3.display();

    LibraryBook b4("Lakarhara", 784);
    b4.display();

    LibraryBook b5;
    b5.display();

}
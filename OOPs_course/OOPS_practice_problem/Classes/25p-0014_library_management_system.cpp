/*
In a library management system, each book is assigned a unique book ID that cannot be changed once
it is given, so it should be stored as a constant data member. Each book also has a title and author
name, which are stored dynamically using pointers. The library wants to keep track of how many
book objects are created in the program, so a static data member should also be included in the 
class for this purpose. Since dynamic memory is used, special care is needed when copying one 
object into another. If shallow copy is used, only the pointer addresses of the title and author
will be copied, and both objects will share the same memory location, which may cause problems
when one object is modified or destroyed. To avoid this issue, the class must implement deep
copy so that separate memory is allocated for each copied object. Design a complete class named
Book with an appropriate constructor to initialize all data members, a destructor to
deallocate memory, and a copy constructor to perform deep copy. Also include suitable 
setter, getter, and display functions. In the main function, create one or more objects,
copy one object into another, and modify the copied object to show that the original object
 remains unchanged.*/

#include<iostream>
#include<cstring>
using namespace std;

class BOOK
{
    int const ID;
    char *title ;
    char *author;
    static int track;  // static data member

    public:

    // default constructor
    BOOK() : ID(1)//initializer list method
    {
        title = new char[strlen("Unknown") + 1];
        author = new char[strlen("Unknown") + 1];

        strcpy(title, "Unknown");
        strcpy(author, "Unknown");

        track++;
    }

    // parameterized constructor
    BOOK(int id,const char *t,const char *a) : ID(id) // initializer list method
    {
        // reallocating it again according to the new data passes as arguments
        title = new char[strlen(t) + 1];
        author = new char[strlen(a) + 1];

        // copying the arguments in data members of object
        strcpy(title, t);
        strcpy(author, a);

        track++;

    }

    // copy constructor
    BOOK(const BOOK &b ) :  ID(b.ID+10)// initializer list method but updating for each obj
    {
        // Allocating it again according to the data of the object from which it copying is done
        title = new char[strlen(b.title)+1];
        author = new char[strlen(b.author)+1];

        // copying the data members of obj1 into data members of obj2
        strcpy(title, b.title);
        strcpy(author, b.author);

        track++;
    }

    // setter (mutator) function
    void setter(const char *t,const char *a)
    {
        // deleteing the present memory
        delete[] title; 
        delete[] author;

        // reallocating it again according to the new data passes as arguments
        title = new char[strlen(t)+ 1];
        author = new char[strlen(a)+ 1];

        // copying the arguments in data members of object
        strcpy(title, t);
        strcpy(author, a);
    }


    // getter functions called in display function
    const int getter_ID()
    {
        return ID;
    }

    const string getter_title()
    {
        return title;
    }

    const string getter_author()
    {
        return author;
    }


    // displaying all the data members
    void display()
    {
        cout << "ID: " <<getter_ID()<< endl;
        cout << "Title: " <<getter_title() << endl;
        cout << "Author: " <<getter_author()<< endl;
    }

    // A member function to return the track(private) to main
    static int Track()
    {
        return track;
    }

    // Destructor
    ~BOOK()
    {
        delete[] title ;
        delete[] author;
    }

};

// initializing the static data member
int BOOK::track=0;


int main()
{
    BOOK b1; // default constructor called


    // copy constructor called
    BOOK b2(b1); // Deep copy

    // parameterized constructor called
    BOOK b3(24, "Arella", "zara"); 
    

    cout<<"-----Original----"<<endl;
    b1.display();
    cout<<endl;
    b2.display();
    cout<<endl;
    b3.display();
    cout<<endl;
    cout<<endl;

    b1.setter("Lalalala", "sara");
    cout<<"-----After updating object 1----"<<endl;
    b1.display();
    cout<<endl;
    b2.display();
    cout<<endl;
    b3.display();
    cout<<endl;
    cout<<endl;
    

    b2.setter("Kadoo", "Ali");

    cout<<"-----After updating object 2----"<<endl;
    b1.display();
    cout<<endl;
    b2.display();
    cout<<endl;
    b3.display();
    cout<<endl;
    cout<<endl;



    cout<<"Total number of objects : "<<BOOK::Track();

    return 0;

}
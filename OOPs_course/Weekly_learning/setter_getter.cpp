/*
Setter (Mutator): a member function that
assigns a value to a class data member

Getter (Accessor): a function that reads/gets a
value from a class data member.
*/

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int width;
        int length;

    public:
        // setter function
        void setup_width(int w)
        {
            width = w;
        }
        // setter function
        void setup_length(int l)
        {
            length = l;
        }
        // getter function
        int display_width()
        {
            return width;
        }
        // getter function
        int display_length()
        {
            return length;
        }
        int area()
        {
            return length*width;
        }

};

int main()
{
    int w,l;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the width : ";
    cin>>w;

    Rectangle r1;


    r1.setup_width(w);
    r1.setup_length(l);

    cout<<"width : "<<r1.display_width()<<endl;
    cout<<"length : "<<r1.display_length()<<endl;
    cout<<"Area : "<<r1.area()<<endl;

    return 0;

}
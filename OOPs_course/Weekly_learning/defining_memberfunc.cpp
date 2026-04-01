// Defining member function

#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

    // in-line function
    // private member function
    void setup(int w, int l)               
    {
        width = w;
        length = l;
    }

    public:
        // out-of-line function
        void calc_area();


        // in-line function
        // public member function
        void display_area()
        {
            int area = length*width;
            cout<<"Area : "<<area<<endl;
        }

};

// out-of-line function

void Rectangle::calc_area()
{
    int w,l;
    cout<<"Enter the width : ";
    cin>>w;
    cout<<"Enter the length : ";
    cin>>l;
    // accessing private member function
    setup(w,l);                                 

    cout<<"Width : "<<width<<endl;
    cout<<"Length : "<<length<<endl;
}

int main()
{
    Rectangle r1;
    // accessing public functions
    r1.calc_area();
    r1.display_area();


    return 0;
}

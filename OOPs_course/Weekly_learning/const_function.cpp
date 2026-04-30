#include<iostream>
using namespace std;
class Rectangle 
{

    int len;
    int width;

    public :

    void set_l(int l) 
    {
        len = l;
    }

    int get_l() const
    {
        // len++;  // error
        return len;
    }

    void set_w(int w);
    int get_w() const;


    void display()
    {
        cout<<"width : "<<width<<endl<<"length : "<<len<<endl<<"Area : "<<get_l()*get_w()<<endl;
    }
};

void Rectangle::set_w(int w) {
    width = w;
}

int Rectangle::get_w() const{

    //width++; // error
    return width;
}



int main()
{
    Rectangle R1;
    R1.set_l(3);
    R1.set_w(4);
    R1.display();
}
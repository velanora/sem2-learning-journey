#include<iostream>
using namespace std;

class Rectangle
{
    public :
    float length,width;
    void set(int l , int w)
    {
        length = l;
        width = w;
    }
    int calculate();
};

int Rectangle::calculate()
{
    return length * width;;
}

int main()
{
    Rectangle r1;
    r1.set(2,4);
    cout<<r1.calculate()<<endl;
}
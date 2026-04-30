#include<iostream>
using namespace std;


class Vector
{

    // operator overloading "
    public: 
    int x,y;
    Vector(int x=0, int y=0)  {}

    Vector operator+(Vector& other)
    {
        Vector *resultant = new Vector(0,0);
        resultant->x = x + other.x;
        resultant->y = y + other.y;
        return *resultant;
    }

    void show()
    {
        cout<<x<<" "<<y;
    }
};

int main()
{
    Vector V1(1,2) , V2(3,4);
    Vector V3 = V1 + V2;

    V3.show();

    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    int x, y;
    public :

    Demo (int x, int y): x(x ) , y(y){}

    // case 1
    Demo operator + ( const Demo &obj)
    {
        Demo temp(0 , 0);
        temp.x = this->x + obj.x;
        temp.y = this->y +obj.y;
        return temp;
    }

    // case 2
    int operator & (const  int a)
    {
        
        
    }

    Demo operator = (const int a)
    {
        Demo temp(0,0);
        temp.x = a;
        return temp;
    }


    void display()
    {
        cout<<x<<" "<<y<<endl;
    }


};


int main()
{
    // + operator
    Demo d1(3, 4), d2(1, 1);
    Demo d3 = d1 + d2;

    d3.display();


    Demo a1(0,0);



    // - operator
    int a =  &a1;

}
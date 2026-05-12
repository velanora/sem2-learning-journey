#include<iostream>
using namespace std;

class Demo
{
    int x;
    public :

    Demo (int x): x(x ) {}



    Demo operator ++ (int)
    {
        Demo temp = *this;
        x++;
        return temp;

    };

    void display()
    {
        cout<<x<<" "<<endl;
    }


     Demo& operator ++ ()
    {
        x++;
        return *this;
    };

   friend ostream& operator<<(ostream& out, const Demo & D);
   friend istream& operator>>(istream& in, Demo &D);

};

    ostream& operator<<(ostream& out, const Demo & D)
    {
        out<<"Demo : "<<D.x<<endl;
        return out;
    }

    istream& operator>>(istream& in, Demo &D)
    {
        cout<<"enter : ";
        in>>D.x;
        return in;
    }

int main()
{
    Demo d1(9);
    Demo d2(8);

    cout<<d1++;
    cout<<++d2;

}

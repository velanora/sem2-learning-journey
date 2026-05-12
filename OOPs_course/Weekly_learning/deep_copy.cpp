#include <iostream>
using namespace std;

class Demo
{
    int x;
    int *p;

public:
    Demo()
    {
        x = 0;
        p = new int;
        *p = 0;
    }

    Demo(const Demo &d)
    {
        p = new int;
        *p = *(d.p);
        x = d.x;
    }

    void set(int pp, int xx)
    {
        delete p;
        p = new int;
        *p = pp;
        x = xx;
    }

    ~Demo()
    {
        delete p;
    }

    void display()
    {
        cout << x << endl
            << *p << endl;
    }
};

int main()
{
    Demo d1;
    Demo d2 = d1;
    d1.display();
    d2.display();

    d2.set(6, 5);
    d1.display();
    d2.display();
}
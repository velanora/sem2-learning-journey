#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A : default" << endl;
    }
    A(int a)
    {
        cout <<"A : parameterized" << endl;
    }
};

class B : public A{

    public :
    B()
    {
        cout<<"B default "<<endl;
        cout<<endl;
    }
    
    B (int x) : A(x)
    {
        cout<<"B parameterized"<<endl;
    }
};

int main()
{
    B b1;
    B b2(2);

    return 0;
}
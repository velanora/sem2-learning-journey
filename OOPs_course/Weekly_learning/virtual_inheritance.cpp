#include <iostream>
using namespace std;

class A
{
    public :
    A()
    {
        cout<<"class A"<<endl;
    }
    void foo()
    {
        cout<<"Foo in A"<<endl;
    }
};

class B   : public  virtual A
{
    public :
    B()
    {
        cout<<"class B"<<endl;
    }
};

class C : public virtual  A
{
    public :
    C()
    {
        cout<<"class C"<<endl;
    }
};

class D : public B , public C
{
    public :
    D()
    {
        cout<<"class D"<<endl;
    }
};

int main()
{
    D D1;
    D1.foo();
}

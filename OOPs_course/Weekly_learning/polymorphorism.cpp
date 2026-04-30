#include <iostream>
using namespace std;

class A
{
    public :
    
    void virtual show()
    {
        cout<<"Base"<<endl;
    }

    virtual ~A()
    {
        cout<<"Destructor Base"<<endl;

    }
};


class B  : public  A
{
    public :
    void show()
    {
        cout<<"derived"<<endl;
    }

    ~B()
    {
        cout<<"Destructor Derived"<<endl;
    }
};


int main()
{
    A * ptr = new B();

    ptr->show();
    delete ptr;
    
}

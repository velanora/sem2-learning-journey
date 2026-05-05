#include<iostream>

using namespace std;

class M
{
    public :
    virtual void func()
    {
        cout<<"M func"<<endl;
    }
    void show()
    {
        cout<<"M show"<<endl;
    }
    void go()
    {
        func();
        show();
    }

};

class N : public M
{
    public :
    void func()
    {
        cout<<"N func"<<endl;
    }
    void show()
    {
        cout<<"N func"<<endl;
    }
};

int main()
{
    M* ptr = new N;
    ptr->go();
    ptr->show();
    cout<<endl;

    // Object slicing
    M obj = *new N;  // M obj = N obj -----> object copied but with only M part ----> N is lost
    obj.go();
    obj.show();
   

}
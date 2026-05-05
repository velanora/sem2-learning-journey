#include<iostream>

using namespace std;

class P
{
    public :
    virtual void alpha()
    {
        cout<<"P alpha"<<endl;
    }
    void beta()
    {
        cout<<"P beta"<<endl;
    }
    void execute()
    {
        beta();
        alpha();
    }

};

class Q : public P
{
    public :
    void alpha()
    {
        cout<<"Q alpha"<<endl;
    }
    void beta()
    {
        cout<<"Q beta"<<endl;
    }
};

int main()
{
    P* ptr = new Q;
    ptr->alpha();
    ptr->beta();
    ptr->execute();
    cout<<endl;

    // Object slicing
    P obj = *new Q;  // P obj = Q obj -----> object copied but with only P part ----> Q is lost
    obj.alpha();
    obj.beta();
    obj.execute();

}
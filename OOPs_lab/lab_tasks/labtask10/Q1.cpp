// Labtask 11
// Q1

#include<iostream>
using namespace std;

class Distance
{
    protected:
    int feet;
    int inches;

    public :

    Distance() : feet(0), inches(0) {};

    Distance(int f, int i): feet(f), inches(i)
    {
        conversion();
    }

    void conversion()
    {
        feet += inches/12;
        inches = inches % 12;
    }

    Distance operator +(const Distance &D)
    {
        Distance temp(0,0);
        temp.feet = this->feet + D.feet;
        temp.inches = this->inches + D.inches;

        temp.conversion();
        return temp;
    }

    bool operator == (const Distance &D)
    {

        return (feet == D.feet && inches == D.inches);
       
    }

    void show_data() const
    {
        cout<<"Feet : "<<feet<<endl;
        cout<<"Inches :"<<inches<<endl;
    }
};

int main()
{
    Distance D1(4, 15);
    Distance D2(6, 12);
    if(D2 == D1)
    {
        cout<<"Both distances are equal "<<endl;

    }
    Distance D3;
    D3 = D1 + D2;
    D3.show_data();
}

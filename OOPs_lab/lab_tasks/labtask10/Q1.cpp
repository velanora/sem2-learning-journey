#include <iostream>
#include <cstring>
using namespace std;
class Distance
{
private:
    int inch;
    int feet;

public:

Distance() : feet(0), inch(0) {};
Distance(int f , int i) : feet(f), inch(i) {};

Distance operator + (Distance &D)
{
    Distance resultant;
    resultant.inch =  inch + D.inch;
    resultant.feet = feet + D.feet;
    return resultant;
}

void feet_to_inch(int &f,int &i)
{
    f += inch/12;
    inch = inch%12;
}


void setdata(int f, int i)
{
    feet= f;
    inch = i;
}

void showData()
{
    feet_to_inch(feet, inch);
    cout<<"Feet : "<<feet<<endl;
    cout<<"Inches : "<<inch<<endl;
}

};

int main()
{
    Distance D1;
    Distance D2(2, 14);
    D1.setdata(1,24);

    Distance D3 = D1 + D2;
    D3.showData();
    
    return 0;
}
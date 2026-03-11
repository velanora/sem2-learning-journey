#include<iostream>
#include"rectangle_header.h"
using namespace std;

int main()
{
    Rectangle r1;
    r1.input();
    int area = r1.calculate_area();

    cout<<"Area of rectangle "<<area<<endl;

    return 0;
}
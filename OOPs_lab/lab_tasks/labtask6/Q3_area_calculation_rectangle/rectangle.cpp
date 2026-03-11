#include<iostream>
#include"rectangle_header.h"

using namespace std;

void Rectangle::input()
{
    int l,w;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the width : ";
    cin>>w;

    length = l;
    width = w;
}
int Rectangle::calculate_area()
{
   int area = length*width;
    
   return area;

}

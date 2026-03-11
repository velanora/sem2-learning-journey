/** ! Question1)Write a C++ program that implements a Rectangle
class with methods to calculate its area and perimeter. Two objects of the
Rectangle class are created, and their members are initialized with specific
lengths and widths.for rectangle1 (l=8 w=8)for rectngle2(length =16 width =4) The program should calculate the area and perimeter for
both instances. Additionally, it should determine which rectangle has the
greater area.*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void Setup(int l, int w)
    {
        length = l;
        width = w;
    }
    int calculate_area()
    {
        int area = length * width;
        return area;
    }

    int Calculate_perimeter();
};

int Rectangle::Calculate_perimeter()
{
    int perimeter = 2 *(length +width);
    return perimeter;
}

int main()
{

    Rectangle r1, r2;
    r1.Setup(8, 8);
    int area_r1 = r1.calculate_area();
    cout<<"Area of rectangle 1 : "<<area_r1<<endl;
    cout<<"Perimeter of rectangle 1 : "<<r1.Calculate_perimeter()<<endl;

    r2.Setup(16, 4);
    int area_r2 = r2.calculate_area();
    cout<<"Area of rectangle 2 : "<<area_r2<<endl;
    cout<<"Perimeter of rectangle 2 : "<<r2.Calculate_perimeter()<<endl;


    if (area_r1 > area_r2)
    {
        cout << "Area of rectangle 1 is greater than area of rectangle 2 " << endl;
    }
    else if (area_r1 < area_r2)
    {
        cout << "Area of rectangle 2 is greater than area of rectangle 1 " << endl;
    }
    else
    {
        cout << "Area of rectangle 1 is equal to area of rectangle 2 " << endl;
    }
    

    return 0;
}

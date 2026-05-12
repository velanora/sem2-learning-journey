/* Question 2 Write a C++ program
that defines a Triangle class with methods to calculate its area and perimeter.
Two instances of the Triangle class are created, and their parameters are
initialized with specific side lengths. The program should calculate the area
and perimeter for both instances. Additionally, it should determine which
triangle has the greater area and print out its details. The objects are
defined as triangle1.init(8, 6, 10) and triangle2.init(6, 8, 10).

Hints:
perimeter = sum of all sides
s = perimeter() / 2
Area = s(s

    side1)(s -side2)(s
    side3)
    */

#include <iostream>

using namespace std;

class Triangle
{
private:
    int side_1;
    int side_2;
    int side_3;

    public :

    
    void init(int s1, int s2, int s3)
    {
        side_1=s1;
        side_2 =s2;
        side_3 = s3;
    }

    int calculate_area();
    int calculate_perimeter();

} ;

int Triangle::calculate_perimeter()
{
    int perimeter = side_1 + side_2 + side_3;
    return perimeter;
}

int Triangle::calculate_area()
{
    int s = calculate_perimeter() / 2;
    int area = s * ( s - side_1 ) * ( s - side_2 ) * ( s - side_3 );  
    return area;
}
int main()
{
    Triangle t1, t2;

    t1.init(8,6,10);
    int area_t1 = t1.calculate_area();

    t2.init(6,8,10);
    int area_t2 = t2.calculate_area();
    

    if( area_t1 > area_t2 )
    {
        cout << "Area of triangle 1 is greater than area of triangle 2 " << endl;
        cout<<"-----Details of Triangle 1-----"<<endl;
        cout<<"Perimeter of triangle 1 : "<<t1.calculate_perimeter()<<endl;
        cout<<"Area of triangle 1 : "<<t1.calculate_area()<<endl;

    }
    else if (area_t1 < area_t2)
    {
        cout << "Area of triangle 2 is greater than area of triangle 1 " << endl;
        cout<<"-----Details of Triangle 2-----"<<endl;
        cout<<"Perimeter of triangle 2 : "<<t2.calculate_perimeter()<<endl;
        cout<<"Area of triangle 2 : "<<t2.calculate_area()<<endl;
    }
    else
    {
        cout << "Area of triangle 1 is equal to area of triangle 2 " << endl;

        cout<<"-----Details of Triangle 1-----"<<endl;
        cout<<"Perimeter of triangle 1 : "<<t1.calculate_perimeter()<<endl;
        cout<<"Area of triangle 1 : "<<t1.calculate_area()<<endl;

        cout<<"-----Details of Triangle 2-----"<<endl;
        cout<<"Perimeter of triangle 2 : "<<t2.calculate_perimeter()<<endl;
        cout<<"Area of triangle 2 : "<<t2.calculate_area()<<endl;

    }

}
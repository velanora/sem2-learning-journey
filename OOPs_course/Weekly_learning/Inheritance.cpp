//

#include<iostream>
using namespace std;

class Polygon
{

    protected : 

    int numVertices;
    float xCoord, yCoord;

    public : 
    
void set(float x, float y, int nV);

};

void Polygon::set(float x, float y, int nV)
{
    xCoord = x;
    yCoord = y;
    numVertices = nV;
}

class Triangle : public Polygon
{
    protected:
    float zCoord;

    public : 
    void setZ(float z);
    float area();
    void display();

};

float Triangle::area()
{
    return 0.5*xCoord*zCoord;
}

void Triangle::setZ(float z)
{
    zCoord = z;
}

void Triangle::display()
{
    cout<<"X coordinate : "<<xCoord<<endl;
    cout<<"Z coordinate : "<<zCoord<<endl;
}

int main()
{
    Triangle t1;
    t1.set(3.5 , 4.8 ,  7);
    t1.setZ(4.4);
    t1.display();
    cout<<"Area "<<t1.area();

    return 0;

}

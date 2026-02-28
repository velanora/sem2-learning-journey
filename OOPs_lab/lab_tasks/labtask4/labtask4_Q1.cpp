#include<iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    float price;

};
int main()
{

    Car quantity[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the model of car "<<i+1<<"  :";
        cin>>quantity[i].model;
        cout<<"Enter the year of car "<<i+1<<"  :";
        cin>>quantity[i].year;
        cout<<"Enter the price of car "<<i+1<<"  :";
        cin>>quantity[i].price;

        cout<<endl;
    }

    cout<<"Car with price above 50000 : "<<endl;

    for (int i = 0; i < 3; i++)
    {
        if(quantity[i].price>=50000)
        {

            cout<<"Model : "<<quantity[i].model<<endl;;
            cout<<"Year : "<<quantity[i].year<<endl;
            cout<<"Price : "<<quantity[i].price<<endl;

        }
    }

    return 0;


}
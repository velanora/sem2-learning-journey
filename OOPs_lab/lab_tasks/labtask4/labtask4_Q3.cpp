#include<iostream>
using namespace std;

struct camera
{
    int megapixels;
    
};

struct mobiles
{
    camera cam;
    long int  price;
};

mobiles cam_data[5];


void five_in_one(int size)
{
    long int price=0;
    int highest = 0;
    float sum = 0.0;
    float average= 1.0;
    int count = 0;

    cout<<"Displaying the information of all the mobiles ";
    for (int i = 0; i < size; i++)
    {
        cout<<"Megapixel for mobile "<<i+1<<" : "<<cam_data[i].cam.megapixels<<endl;

        cout<<"Price for mobile "<<i+1<<" : "<<cam_data[i].price<<endl;
    }
    cout<<endl;

    for (int i = 0; i < size; i++)
    {
        if(price < cam_data[i].price)
        {
            price = cam_data[i].price;
        }
    }
    cout<<"Most expensive price : "<<price<<endl;
    cout<<endl;


    for (int i = 0; i < size; i++)
    {
        if(highest < cam_data[i].cam.megapixels)
        {
            highest = cam_data[i].cam.megapixels;
        }
    }
    cout<<"Most highest camera megapixel : "<<highest<<endl;
    cout<<endl;



    for (int i = 0; i < size; i++)
    {
        sum += cam_data[i].price;
    }
    average = (float) sum/size;
    cout<<"Average price : "<<average<<endl;
    cout<<endl;


    for (int i = 0; i < size; i++)
    {
        if(cam_data[i].cam.megapixels >= 50)
        {
            count++;
        }
    }
    
    cout<<"Mobiles with camera >50 MP : "<<count<<endl;
    cout<<endl;

    
    
}


int main()
{
    
    for (int i = 0; i < 5; i++)
    {

        cout<<"Enter the megapixel for mobile (>0)"<<i+1<<" : ";
        cin>>cam_data[i].cam.megapixels;
        if(cam_data[i].cam.megapixels <= 0)
        {
            cout<<"You entered invalid megapixel "<<endl;
            cout<<"enter the megapixel for mobile (>0)"<<i+1<<" again : ";
            cin>>cam_data[i].cam.megapixels;

        }

        cout<<"Enter the price for mobile (>=0)"<<i+1<<" : ";
        cin>>cam_data[i].price;
        if(cam_data[i].cam.megapixels < 0)
        {
            cout<<"You entered invalid price "<<endl;
            cout<<"enter the price for mobile (>=0)"<<i+1<<" again : ";
            cin>>cam_data[i].price;
        }


    }

    five_in_one(5);
    

}

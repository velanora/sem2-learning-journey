#include<iostream>
using namespace std;

struct address
{
    string city;
    string country;
};

struct contact_info
{
    string name;
    long int phone_no;
    address ad;
};

int main()
{
    contact_info data[2];
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter the name of person "<<i+1<<" :";
        cin>>data[i].name;
        cout<<"Enter the phone no. of person "<<i+1<<" :";
        cin>>data[i].phone_no;
        cout<<"Enter the city of person "<<i+1<<" :";
        cin>>data[i].ad.city;
        cout<<"Enter the country of person "<<i+1<<" :";
        cin>>data[i].ad.country;

        cout<<endl;
    }

    cout<<"----Displaying data of 10 people-----"<<endl;

    for (int i = 0; i < 2; i++)
    {
        cout<<"Name of person "<<i+1<<" :"<<data[i].name<<endl;
        cout<<"Phone no. of person "<<i+1<<" :"<<data[i].phone_no<<endl;
        cout<<"City of person "<<i+1<<" :"<<data[i].ad.city<<endl;
        cout<<"Country of person "<<i+1<<" :"<<data[i].ad.country<<endl;

        cout<<endl;
    }
    


    return 0;
}
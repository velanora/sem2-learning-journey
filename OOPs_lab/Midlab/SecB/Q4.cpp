#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct mobiles
{
    string name;
    int price;
    int resolution;
    int aperture;
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Resolution : " << resolution <<" MP "<< endl;
        cout << "Apertures : " << aperture << endl;
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of mobiles : ";
    cin >> n;

    mobiles m[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, m[i].name);
        cout << "Enter the price : ";
        cin >> m[i].price;
        cout << "Enter the resolution : ";
        cin >> m[i].resolution;
        cout << "Enter the apendure : ";
        cin >> m[i].aperture;
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i].resolution >= 1200)
        {
            cout << "------- Mobiles with resolution >= 1200 MP ------" << endl;
            m[i].display();
        }
    }

    return 0;
}
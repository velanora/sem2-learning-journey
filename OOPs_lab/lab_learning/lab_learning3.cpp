#include<iostream>
using namespace std;


int main()
{


    int **twoarray = new int*[5];

    for (int i = 0; i < 5; i++)
    {
        *(twoarray+i) = new int[3];
    }
    

    cout<<"student : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<"marks : ";
        for (int j = 0; j < 3; j++)
        {
            cin>>*(*(twoarray+i)+j);
        }

    }

    for (int i = 0; i < 5; i++)
    {
        delete[] (twoarray+i) ;
    }

    delete[] twoarray;
    

}
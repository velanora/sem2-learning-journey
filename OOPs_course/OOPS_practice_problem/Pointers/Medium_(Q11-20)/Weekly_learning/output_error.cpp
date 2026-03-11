// output questions

#include<iostream>
using namespace std;

int main()
{

    // memory leak concept
    /* 
    int *p = new int(10);
    p = new int(20);
    cout<<*p<<endl; */                        //gives 20 but address of 10 is lost (memory leak)


    // deleting memory and NULL

    /*   
    int *p = new int(10);
    delete p;
    p= NULL;                                  // runtime error

    */


    //Aliasing

    /*
    int *p = new int(10);
    int *q=p;
    delete p;
    cout<<*q<<endl;  */                        // garbage value
    

    // const pointer vs pointer to const

    /* int x=10, y=20;
    const int *p = &x;                          //pointer to a const int
    p = &y;
    *p= 30;                                     // gives compile time error   (the value at that address can't be changed)  

    cout<<x<<" "<<endl;
    cout<<y<<" "<<endl; */

    // pointer const


    /* int x=10, y=20;
    int * const p = &x;                          //pointer to a const int
    p = &y;                                        // gives compile time error  (the address in p can't be changed)
    *p= 30;                                         

    cout<<x<<" "<<endl;
    cout<<y<<" "<<endl; */

    // array of ptr
/* 
    int a=10, b=20, c= 30;
    int *arr[5]={&a,&b,&c};

    cout<<arr[1]<<endl;                                     // gives address
     */


     // missing deallocation
/* 
    int **arr = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i]= new int[5];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete[] (arr+i);
    }

    delete[] arr;
     */


     
    
    return 0;
}
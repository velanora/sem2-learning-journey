#include<iostream>
#include"result_header.h"
using namespace std;

int main()
{
    Result r[2];

    for (int i = 0; i < 2; i++)
    {
        cout<<"======= student "<<i+1<<" ========"<<endl;
        r[i].input_data();
        r[i].display_result();
    }
    
}
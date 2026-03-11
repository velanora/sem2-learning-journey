#include<iostream>
#include"result_header.h"

void Result::input_data()
{
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the Roll number : ";
    cin>>roll_no;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter marks of subject "<<i+1<<" : ";
        cin>>subject_marks[i];
        if ( subject_marks[i] <0 || subject_marks[i] >100 )
        {
            cout<<"Invalid marks /n Enter marks of subject "<<i+1<<" again : ";
            cin>>subject_marks[i];
        }
    }
}

float Result::calculate_average()
{
    float avg=1.0;
    float sum=0.0;

    for (int i = 0; i < 5; i++)
    {
        sum += subject_marks[i];
        
    }

    avg = sum / (float) 5.0;

    return avg;
}

void Result::display_result()
{                                   // input
    cout<<"----- Marks ----- "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Subject "<<i+1<<" : "<<subject_marks[i]<<endl;
    }

    float avg;
    avg = calculate_average();                     // average

    cout<<"Average : "<<avg<<endl;


    if(avg >= 50.0)
    {
        cout<<" PASS "<<endl;
    }
    else
    {
        cout<<" FAIL "<<endl;
    }

}
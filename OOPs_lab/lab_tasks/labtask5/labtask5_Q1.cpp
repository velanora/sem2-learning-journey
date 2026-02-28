#include<iostream>
using namespace std;
#include <string>
#include <limits>
#include<iomanip>

struct student
{
    string name;
    int ID;
    int subject_count;
    float scores[5];
};

void processPersonData(student *std)
{
    float average = 0.0f;
    float sum= 0.0f;
    float highest = 0.0f;
    float second_highest = 0.0f ;
    for (int i = 0; i < std->subject_count; i++)
    {
        sum += std->scores[i];
        if (highest < std->scores[i]) 
        {
            second_highest = highest;
            highest = std->scores[i];
        }
        else if(second_highest < std->scores[i])
        {
            second_highest = std->scores[i];
        } 
    }
    average = (float)  ( sum/ std->subject_count);


    cout<<"student record"<<endl
    <<"============================="<<endl
    <<"Name :"<<std->name<<endl
    <<"ID :"<<std->ID<<endl
    <<"Average score : "<<fixed<<setprecision(2)<<average<<endl;

    cout<<"Scores : ";
    for (int i = 0; i < std->subject_count; i++)
    {
        cout<<fixed<<setprecision(2)<<std->scores[i]<<"  ";
    }
    cout<<endl; 
    
    cout<<"Second Highest score : "<<second_highest<<endl;
    
    cout<<"============================="<<endl;
}

int main()
{
    student std_array[2];

    for (int i = 0; i < 2; i++)
    {
        
        cout<<"Enter data for student "<<i+1<<endl;
        student *p_std = &std_array[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"enter Name: "<< flush;
        getline(cin ,p_std->name);
        cout<<"enter ID: ";
        cin>>p_std->ID;
        cout<<"subject count (0-5): ";
        cin>>p_std->subject_count;

        if( !(p_std->subject_count > 0 && p_std->subject_count < 6) )
        {
            cout<<"invalid input"<<endl;
            cout<<"Enter the number of scores again (0-5): ";
            cin>>p_std->subject_count;
        }

        cout<<"Enter scores : ";
        for (int j = 0; j < p_std->subject_count ; j++)
        {
            cin>>p_std->scores[j];
            if (  !(p_std->scores[j]> 0 && p_std->scores[j]<100)  )
            {
                cout<<"invalid input"<<endl;
                cout<<"Enter the score again (0-5): ";
                cin>>p_std->scores[j];
            }
        }

        // function call
        processPersonData(&std_array[i]);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

}
// Labtask 1
// Q2

#include<iostream>
using namespace std;

// Function to calculate the total obtained marks
void total_func(int N, int*arrA, int *p_obtained)//takes N, addres of arr and obtained marks
{
    for(int i=0; i<N; i++)
    {
        *p_obtained += *arrA;
        arrA++;
    }
}

// Function to calculate percentage
void per_func(int total, int obtained , float* p_per)// takes total and obtained marks and address of percentage variable
{
    *p_per = ((float)obtained*100)/(total);
}

int main()
{
    int N;
    cout<<"Enter number of subjects : ";
    cin>>N;

    int arr_o_marks[N];   // array for obtained marks
    int arr_t_marks[N];   // array for total marks
    
    // Intializing the variables
    int obtained = 0;
    int total = 0;
    float per = 1.0;

    // Array for storing total marks of each subject
    cout<<"***Enter the Total marks of each subject*** : "<<endl;
    for(int i = 0; i<N; i++)
    {
        cout<<"subject number"<<i+1<<" : ";
        cin>>arr_t_marks[i];
        total += arr_t_marks[i]; // adding the total marks of each subj
    }
    cout<<endl;

    // Array for storing Obtained marks of each subject
    cout<<"***Enter the Obtained marks of each subject*** : "<<endl;
    for(int i = 0; i<N; i++)
    {
        cout<<"subject number"<<i+1<<" : ";
        cin>>arr_o_marks[i];
    }
    cout<<endl;

    //total obtained marks Function call
    total_func(N ,arr_o_marks, &obtained);
    cout<<"Total : "<<obtained<<endl;

    // percentage function call
    per_func(total , obtained, &per);
    cout<<"percantage : "<<per<<"%"<<endl;    

    return 0;
}
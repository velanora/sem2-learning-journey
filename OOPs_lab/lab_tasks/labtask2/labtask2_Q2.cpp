// Lab task 2
// Q1

#include<iostream>
using namespace std;

float* cal_training_score(int N)
{
    float*arr = new float [N];

    for (int i = 0; i < N; i++)
    {
        cout<<"Enter the score of teacher "<<i+1<<" : ";
        cin>>*(arr+i);
    }
    
    return arr;
}

void display_score(int N, float**display)
{
     for (int i = 0; i < N; i++)
    {
        cout<<"Teacher "<<i+1<<" : "<<**(display+i)<<endl;
    }
}
 
int main()
{
    int N ;
    cout<<"enter number of teachers: ";
    cin>>N;

    float *received = cal_training_score(N);
    float *arr[N];
    arr[N] = received;
    for (int i = 0; i < N; i++)
    {
        arr[i]= received++;
    }
    
    display_score(N,arr);

    
    return 0;
}
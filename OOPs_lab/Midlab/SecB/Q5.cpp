#include<iostream>
#include<string>
#include<limits>
using namespace std;

int *Merge(int* p_CS ,int *p_SE , int CS_num , int SE_num)
{
    int N = CS_num + SE_num;
    int *merge_arr = new int[N];

    int count = 0;
    for (int i = 0; i < CS_num; i++)
    {
        merge_arr[i] = p_CS[i];
        count++;
    }

    for (int i = 0; i < SE_num; i++)
    {
        merge_arr[count] = p_SE[i];
        count++;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if( merge_arr[i] > merge_arr[j] )
            {
                int temp = merge_arr[i];
                merge_arr[i] = merge_arr[j];
                merge_arr[j] = temp;
            }
        }
    }
    

   return merge_arr;


}
int main()
{

    int CS_num;
    int SE_num;

    cout<<"Enter number of CS students : ";
    cin>>CS_num;
    cout<<"Enter number of SE students : ";
    cin>>SE_num;

    int *CS = new int[CS_num];
    int *SE = new int[SE_num];

    cout<<"----Enter ages of CS students -----"<<endl;
    for (int i = 0; i < CS_num; i++)
    {
        cout<<"Student "<<i+1<<" : ";
        cin>>CS[i];
    }
    
    cout<<"----Enter ages of SE students -----"<<endl;
    for (int i = 0; i < SE_num; i++)
    {
        cout<<"Student "<<i+1<<" : ";
        cin>>SE[i];
    }

    int *ascending_merge_arr = Merge(CS, SE, CS_num, SE_num);

    int total_num  = CS_num + SE_num;
    cout<<"Sorted array "<<endl;
    for (int i = 0; i < total_num; i++)
    {
        cout<<ascending_merge_arr[i]<<" ";
    }
    cout<<endl;

}
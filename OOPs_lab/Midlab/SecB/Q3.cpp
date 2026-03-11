#include<iostream>
#include<string>
using namespace std;

bool To_check(int **pp, int **pp_t ,int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           pp_t[i][j] = pp[j][i];
        }  
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( pp_t[i][j] != pp[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int **original_arr = new int*[n];
    int **transpose_arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
       original_arr[i]= new int[n];
       transpose_arr[i] = new int[n];
    }

    // taking the input from user
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter elements for Row "<<i+1<<" ----"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>original_arr[i][j];
        }  
    }

    bool answer = To_check(original_arr , transpose_arr , n);

    // Displaying transpose 
    cout<<"\n-----transpose----"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<transpose_arr[i][j]<<"  ";
        }  
        cout<<endl;
    }
    cout<<endl;

    if(answer==true)
    {
        cout<<"True symmetric matrix "<<endl;
    }
    else
    {
        cout<<"Not a symmetric matrix "<<endl;
    }

    for (int i = 0; i < n; i++)
    {
       delete[] original_arr[i];
       delete[] transpose_arr[i] ;
    }
    delete[] original_arr;
    delete[] transpose_arr;

    return 0;

}
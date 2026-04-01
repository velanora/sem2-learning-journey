#include<iostream>
using namespace std;


int main()
{

    int row;
    cout<<"Enter the total number of rows";
    cin>>row;
    bool **game = new bool *[row];
    int col;
    cout<<"Enter the total number of columns";
    cin>>col;

    for (int i = 0; i < row; i++)
    {
        *(game+i) = new bool[col];
    }


    cout<<"Enter :"<<endl;
    for (int i = 0; i < row; i++)
    {
        cout<<"Enter "<<col<<" digits for row "<<i+1<<endl;

        for (int j = 0; j < col; j++)
        {
            cin>>*(*(game+i)+j);
        }
    }


    // count loop
    int count_live =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(*(*(game+i)+j) != 0)
            {
                count_live++;
            }
        }
    }
    int hit = 0;
    cout<<"total life enemies"<<count_live<<endl;

    for(int i = 0 ; hit != count_live; i++)
    {
        int row_index , col_index;
        cout<<"Enter the index of row : ";
        cin>>row_index;
        cout<<"Enter the index of colum : ";
        cin>>col_index;


        if( *(*(game+row_index-1) + col_index-1) != 0 )
        {
            *(*(game+row_index-1) + col_index-1) = 0;
            cout<<"Hit. Enemy destroyed"<<endl;
            hit++;
        }
        else
        {
            cout<<"Already dead "<<endl;
        }

    }

    cout<<"All enemies are destroyed "<<endl;
    cout<<"Total hits required: "<<hit<<endl;

    cout<<"Final grid"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<*(*(game+i)+j);
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for (int i = 0; i < row; i++)
    {
        delete [] (game+i);
    }

    delete [] game;

    

    return 0;
}
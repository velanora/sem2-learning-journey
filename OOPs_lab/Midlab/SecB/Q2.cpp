#include<iostream>
#include<string>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    bool **arr = new bool*[n];
    for (int i = 0; i < n; i++)
    {
       arr[i]= new bool[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter elements ( 0 or 1) for Row "<<i+1<<" ----"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }  
        
    }

    int count = 0;
    // displaying the grid
    cout<<"----- Original grid ------ "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
            if(arr[i][j == 1])
            {
                count++;
            }
        }
        cout<<endl;
    }

    int hit = 0;
    int r,c;

    // Hitting enemies loop
    while(hit != count)
    {

        // input for row and column number 
        cout<<"Enter the row number (0 - "<<n-1<<") : ";
        cin>>r;
        while( r < 0 || r > (n-1))
        {
            cout<<"Invalid input !! "<<endl;
            cout<<"Again enter the row number (0 - "<<n-1<<") : ";
            cin>>r;
        }

        cout<<"Enter the column number (0 - "<<n-1<<") : ";
        cin>>c;

        while( c < 0 || c > (n-1))
        {
            cout<<"Invalid input !! "<<endl;
            cout<<"Enter the column number (0 - "<<n-1<<") : ";
            cin>>c;
        }

        if( arr[r][c] == 1)
        {
            arr[r][c] = 0;
            hit++;
            cout<<"Enemy destroyed !!"<<endl;
        }
        else
        {
            cout<<"Already dead! "<<endl;
        }


    }

    cout<<"All enemies are destroyed "<<endl;
    cout<<"total hits "<<hit<<endl;
    // displaying updated grid
    cout<<"----- Updated grid ------ "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
    
}
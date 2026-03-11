/*28. Transpose a Matrix Using Pointers: Find transpose using pointer-based traversal.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int rows,cols;
    
    /* cout<<"Enter the number of columns: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols; */


    int arr[rows][cols];
    int *p = &arr[0][0];

    // input the data
    cout<<"Enter the elements of matrix "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>*(p+i+j*cols);
            cout<<" ";
        }
        cout<<endl;
    }

    // * displaying the transpose of matrix
    cout<<"---Transpose of matrix---"<<endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<*(p+i+j*cols)<<" ";
        }
        cout<<endl;
    }
    
}
/*Pointer-Based Matrix Addition: Add two matrices using only pointer dereferencing.*/

#include<iostream>
using namespace std;

int main()
{

    int A[3][3]= { {2,4,6}, {5,3,9}, {8,3,7}};
    int *pA=&A[0][0];
    int B[3][3] = { {7,4,6}, {8,1,9}, {3,5,7}};
    int *pB=&B[0][0];
    int C[3][3];
    int *pC=&C[0][0];
    

    int sum =0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = *(pA+i*3+j)+ *(pB+i*3+j);
            *(pC+i*3+j) = sum;
        }

    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*(pC+i*3+j)<<" ";
        }
        cout<<endl;
    }
    
    
}
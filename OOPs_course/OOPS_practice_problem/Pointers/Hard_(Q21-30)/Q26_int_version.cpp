/*26. Merge Two Sorted Arrays Using Pointers: Merge two sorted arrays using pointers.*/
#include <iostream>
using namespace std;

int main()
{

    int a[3] = {2, 4, 8};
    int b[3] = {3, 5, 7};
    int c[6];

    int *pa = a;
    int *pb = b;
    int *pc = c;

    int count = 0;

    // Firstly storing in the array
    for (int i = 0; i < 3; i++)
    {
        pc[i] = pa[i];
        count++;
    }

    for (int i = 0; i < 3; i++)
    {
        pc[count] = pb[i];
        count++;
    }


    // Secondly, Sorting the array
    int temp = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if(pc[i]>pc[j])
            {
                temp = pc[i];
                pc[i] = pc[j];
                pc[j] = temp;
            }
        }
        
    }

    // Thirdly Displaying the array
    cout<<"----Sorted array ---"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<pc[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}
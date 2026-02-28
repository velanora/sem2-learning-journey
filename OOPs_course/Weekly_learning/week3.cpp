/* #include <iostream>
using namespace std;

void print(int* arr, int m, int n) 
{
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << *(arr + i * n + j) << " ";
        }
        cout << endl;
    }
}
int main() 
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m = 3, n = 3;
    print(&arr[0][0], m, n);

    return 0;
}  */
/* 
#include <iostream>
using namespace std;

void print(int arr[][3], int m , int n) 
{
   for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
int arr[3][3] = {
{1,2,3},
{4,5,6},
{7,8,9}
};

print(arr, 3 , 3);
return 0;
} */

/* 
#include <iostream>
using namespace std;

int main()
{
    
   int value = 5; // value is const
   int * const ptr = &value; // compile error: cannot convert const int* to int*
   *ptr = 6;


   int* p2;
const int y = 5;
p2 = 

*/

#include<iostream>
using namespace std;
int main()
{
  int a=1;
  char b='A';
  float c=1.44;

  cout<<"int a="<<a<<endl;
  cout<<"char b="<<b<<endl;
  cout<<"float c="<<c<<endl;
  
  return 0;
}

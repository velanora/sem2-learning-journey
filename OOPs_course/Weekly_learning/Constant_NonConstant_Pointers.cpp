#include<iostream>
using namespace std;
int main()
{
    // Pointer to a Constant : (scenario 1)
    // if const is before or after the datatype like :
    // "const int *ptr=&a;" OR "int const *ptr=&a;",
    // then ptr is a pointer to a constant.
    // value at the address in ptr cannot be changed.

    // Constant Pointer : (scenario 2)
    // if const is between * and pointer name like:
    // "int *const ptr=&a;",
    // then ptr is a constant pointer.
    // address in ptr cannot be changed.

    // Constant Pointer to a Constant : (scenario 3)
    // if const is before or after the datatype and
    // also between * and pointer name like:
    // "int const *const ptr=&a;" OR "const int *const ptr=&a;",
    // then ptr is a constant pointer to a constant
    // Both the address in ptr and the value at the address
    // cant be changed.

    // Scenario 1 : pointer to constant value
    const int a=10; // constant
    int const *ptr1=&a;
    // Address in ptr1 can be changed
    // Value at address in ptr1 cant be changed

    // Scenario 2 : constant pointer to value
    int b=20; // variable
    int *const ptr2=&b;
    // Address in ptr2 cant be changed
    // Value at address in ptr2 can be changed

    // Scenario 3 : constant pointer to constant value
    int c=30; // variable
    const int *const ptr3=&c;
    // Address in ptr3 cant be changed
    // Value at address in ptr3 cant be changed

    return 0;
}
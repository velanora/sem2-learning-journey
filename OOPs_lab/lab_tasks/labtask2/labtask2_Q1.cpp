// Lab task 2
// Q1

#include<iostream>
using namespace std;

void scholarship_selection(int*p1,int*p2, int**pp_selected_marks)
{
    **pp_selected_marks = (*p1>*p2)?*p1:*p2;
}
 
int main()
{
    int selected_marks=0;
    int st1,st2;
    cout<<"Enter marks of 1st student : ";
    cin>>st1;
    cout<<"Enter marks of 2nd student : ";
    cin>>st2;

    int *p_selected_marks = &selected_marks;
    scholarship_selection(&st1, &st2, &p_selected_marks);
    cout<<"Selected student marks  : "<<*p_selected_marks<<endl;
    cout<<"selected marks : "<<selected_marks<<endl;

    return 0;
}
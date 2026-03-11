#include<iostream>
#include <string>
using namespace std;

class Result
{
    private :
        string name ;
        int roll_no;
        int subject_marks[5];
         
    public :
        void input_data();
        float calculate_average();
        void display_result();

};
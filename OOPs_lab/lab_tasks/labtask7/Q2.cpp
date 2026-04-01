// labtask7
// Q1

#include <iostream>
#include <cstring>
using namespace std;

class Result
{
    string name;
    int roll_no;
    int marks[5];

public:
    // Default constructor
    Result()
    {
        name = "Unknown name";
        roll_no = 0;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }

    // parameterized constructor
    Result(string n, int r, int m[]) : name(n) , roll_no(r)
    {

        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }

    float average()
    {
        float sum = 0.0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

        float avg = sum / (float)5;
        return avg;
    }

    void display();
};

// out-of-line function definition
void Result::display()
{
    cout << "name : " << name << endl;
    cout << "Roll Number : " << roll_no << endl;
    cout << "Marks : ";

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    float avg = average();

    if (avg >= 50)
    {
        cout << " Status : Pass" << endl;
    }
    else
    {
        cout << "Status : Fail" << endl;
    }
}

int main()
{
    //----Default constructor called ----
    Result s1;
    cout << "-----Displaying result---" << endl;
    s1.display();
    cout << endl;

    //----Parameterized constructor called ----
    int arr[5] = {60, 70, 80, 90, 50};
    Result s2("Ali", 1234, arr);
    cout << "-----Displaying result---" << endl;
    s2.display();
    cout << endl;

    return 0;
}
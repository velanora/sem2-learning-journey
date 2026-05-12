
/*
Challenge question:
Convert player class defined in HW2.cpp
Add Gender and static int count data members for dynamically creating scores array and
Appropriately change Constructor, Destructor, all utility and setter/getter functions. and display count
through a static showcount() function
 */

#include <iostream>
#include <string>
using namespace std;

class player
{
    // non const and non static data
    int ID;
    string name;
    int *scores;
    int size;
    float Average;
    static int count;  // static and non const member
    const char gender; // const and non static member

public:
    player(int id = 0, string n = "unknown", int temp[] = NULL, int s = 0, char g = 'N') : ID(id), name(n), size(s), gender(g)
    {
        count++;
        scores = new int[size];
        if (temp == nullptr)
        {
            for (int i = 0; i < size; i++)
            {
                scores[i] = 1;
            }
        }
        else{
            set_scores(temp);
        }

    }

    void set_scores(int temp[])
    {
        for (int i = 0; i < size; i++)
        {
            scores[i] = temp[i];
        }
    }

    player &calAverage(void)
    {
        int s = 0;
        for (int i = 0; i < size; i++)
        {
            s += this->scores[i];
        }
        this->Average = s / size;
        return (*this);
    }
    //...... Setter or Mutator Functions ......
    player &setId(int i)
    {
        cout << "\nInside setID() function\n";
        ID = i;
        return (*this);
    }

    void print()
    {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Gender : " << gender << endl;

        cout << "Scores: ";
        for (int i = 0; i < size; i++)
        {
            cout << scores[i] << " ";
        }

        cout << endl;
        calAverage();

        cout << "Average: "<< Average<< endl;
        cout << "------------------------" << endl;
    }


    void set_name(string n)
    {
        name = n;
    }

    int getID()
    {
        return ID;
    }

    string getname()
    {
        return name;
    }

    ~player()
    {
        delete[] scores;
        cout << "Inside Destructor" << endl;
    }

    static void showcount() // added
    {
        cout << "Count : " << count << endl;
    }


    friend void Globfun(); // making a stand alone function a friend function
};

// global function
void Globfun()
{
    player p2;
    cout << "Displaying ID from global function :" << p2.ID << "  " << endl;
}

int player::count = 0;

int main()
{
    string s;
    cout << "Enter name : ";
    getline(cin, s);
    int marks[5] = {10, 20, 30, 40, 50};
    player p1(1, s, marks, 5, 'G');
    //cascading function call
    cout<<p1.setId(4).calAverage().getname()<<endl;    //p1.setId(4)=====>p1.calAverage()=====>p
    p1.print();
    cout << "size of object : " << sizeof(p1) << endl;

    return 0;
}
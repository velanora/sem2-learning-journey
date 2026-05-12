
/* 
Challenge question:
Convert player class defined in HW2.cpp
using pointer int *Scores and int size data members for dynamically creating scores array and
Appropriately change Constructor, Destructor, all utility and setter/getter functions.
 */

#include<iostream>
#include<string>
using namespace std;

class player
{
    int ID;
    string name;
    int *scores;
    int size;
    float Average;

    public:


    player(int id= 0, string n="unknown",int temp[]= 0,  int s=0) : ID(id), name(n), size(s)
    {
        scores= new int[size];
        for (int i = 0; i < size; i++)
        {
            scores[i]= 0;
        }

        set_scores(temp);

    }

    void set_scores(int temp[])
    {
        for(int i = 0; i < size; i++)
        {
            scores[i] = temp[i];
        }
    }

    float calAverage()
    {
        float sum= 0.0;
        for (int i = 0; i < size; i++)
        {
            sum += scores[i];
        }
         Average = sum/size;

         return Average;
    }

    void print()
    {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;

        cout << "Scores: ";
        for(int i = 0; i < size; i++)
        {
            cout << scores[i] << " ";
        }

        cout << endl;

        cout << "Average: " << calAverage() << endl;
        cout << "------------------------" << endl;
    }

    void setID(int id)
    {
        ID = id;
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
        cout<<"Inside Destructor"<<endl;
    }
};

int main()
{
    string s;
    getline(cin, s);
    int marks[5] = {10, 20, 30, 40, 50};
    player p1(1, s,marks, 5);
    p1.print();
    cout<<"size of object : "<<sizeof(p1)<<endl;
}
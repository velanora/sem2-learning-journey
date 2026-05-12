#include<iostream>
using namespace std;

class player
{
    int ID;
    string name;
    int scores[5];
    float Average;

    public:

    player() : ID(0), name ("unknown")
    {
        for (int i = 0; i < 5; i++)
        {
            scores[i]= 0;
        }
    }
    player(int id, string n, int temp[]) : ID(id), name(n)
    {
        for (int i = 0; i < 5; i++)
        {
            scores[i]= temp[i];
        }
        
    };

    float calAverage()
    {
        float sum= 0.0;
        for (int i = 0; i < 5; i++)
        {
            sum += scores[i];
        }
         Average = sum/5.0;

         return Average;
    }

    void setID(int id)
    {
        ID = id;
    }

    void set_name(char n)
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
        cout<<"Inside Destructor"<<endl;
    }

};

int main()
{

    int marks[5] = {10, 20, 30, 40, 50};
    player p1(1, "Areej Fatima", marks);
    cout << "Average: " << p1.calAverage() << endl;

}
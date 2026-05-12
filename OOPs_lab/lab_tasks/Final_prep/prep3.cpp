#include<iostream>
using namespace std;
/* 
class student
{
    public :

    string name;
    student(string n)
    {
        name =n;
    }

};

class teacher
{
    public:
    string name;
    teacher(string n)
    {
        name = n;
    }

    void teach(student s)
    {
        cout<<s.name;
    }
};

 */



class option
{
    private:
    string optext;

    public:
    option(string text)
    {
        optext = text;
    }

    void showdata()
    {
        cout<<optext<<" \n";

    }
};

class Question
{
    private:
    string q;
    option op1;
    option op2;
    option op3;
    option op4;

    public :

    Question(string n1,string n2,string n3,string n4 ,string s) : op1(n1), op2(n2), op3(n3), op4(n4), q(s) {};

    void display()
    {
        cout<<q<<endl;
        op1.showdata();op2.showdata();
    }

};

int main()
{
    Question q1( "sdfghjk", "dfghjk", "dfghjk", "dfghjk", "cpp is programming langayge");
    q1.display();

}



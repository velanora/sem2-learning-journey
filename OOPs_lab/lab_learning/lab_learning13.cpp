#include<iostream>
using namespace std;

class option // part class
{
    public :
    string op;

};
class  Question  // whole class
{
    private:
    string statement;
    option op1;
    option op2;
    option op3;
    option op4;
    option op5;


    public : 

    Question(string s, string a,string b, string c, string d ) : op1(a), op2(b){};

    void display()
    {
        cout<<"Question :1"<<statement<<endl;
        cout<<"1."<<endl;
    }
};

int main()
{
    Question Q1(
        "C++ is programming language ",
        "True" ,
        "False",
        "may False",
        "may true"
    );

}
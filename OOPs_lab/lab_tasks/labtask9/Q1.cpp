#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
    public:

    Person(string name, int age): name(name), age(age) 
    {
        cout<<"I am base class constructor"<<endl;
    }

    void get_data()
    {
        cout<<"Enter Name : ";cin>>name;
        cout<<"Enter age : ";cin>>age;
    }

    void show_data()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

class student : public Person
{
    private:
    int roll_num;
    float fee;

    public:

    student(int roll_num, int fee, int a,string n): roll_num(roll_num), fee(fee) ,Person(n,a)
    {
        cout<<"I am derived class constructor"<<endl;

    }

    void set_student_data(int r)
    {
        get_data();
        roll_num = r;
    }

    void calculate_fee(float f)
    {
        fee = f;
        fee = fee+1000;
    }
    void show_student_data()
    {
        show_data();
        cout<<"Roll number : " <<roll_num<<endl;
        cout<<fee<<endl;
    }

};
int main()
{
    student s1( 314, 3000 ,18, "Areej");
   
    s1.show_student_data();

    return 0;
}

#include<iostream>
using namespace std;


class Person
{
    protected:
    char name;
    int age;
    public:

    Person(char name, int age): name(name), age(age) {}

    void get_data()
    {
        cout<<"Enter Name : ";cin>>name;
        cout<<"Enter age : ";cin>>age;
    }

    void show_data()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }

};

class student : public Person
{
    private:
    int roll_num;
    float fee;

    public:

    student(int roll_num, int fee, int a, char n): roll_num(roll_num), fee(fee) ,Person(n,a){}

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

    student s1( 314,24,3000, 'n');
    s1.set_student_data(1);
    s1.calculate_fee(1200);
    s1.show_student_data();


    return 0;
}

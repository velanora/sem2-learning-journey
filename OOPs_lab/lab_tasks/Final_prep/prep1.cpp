// Practicing labtask 6

#include <iostream>
using namespace std;

// Q1

/* class student
{
    string name;
    int roll;
    int marks;

    public:

    void input();

    void display()
    {
        cout<<name<<" "<<roll<<" "<<marks<<endl;
    }

};

void student::input()
{
    cout<<"Enter : ";cin>>name;
    cout<<"Enter : ";cin>>roll;
    cout<<"Enter : ";cin>>marks;
}

int main()
{
    student s1;
    s1.input();
    s1.display();
}  */

// Q2 same as Q1

// Q3

/* class Rectangle
{
    int length;
    int width;

public:
    void set(int l, int w)
    {
        length = l;
        width = w;
    }
    int cal_area();
};

int Rectangle::cal_area()
{
    return length*width;
}

int main()
{
    Rectangle r1;
    r1.set(4, 9);
    cout<<r1.cal_area()<<endl;
} */

/*
class Employee
{
    string name;
    int ID;
    int basic_salary;
    int bonus;

    public :
    void input_data(string n, int id, int bs)
    {
        name = n;
        ID = id;
        basic_salary = bs;
    }

    void cal_bonus(int b)
    {
        bonus = b;
        basic_salary += bonus;
    }

    void display()
    {
        cout<<name<<" "<<ID<<" "<<basic_salary<<endl;
    }
};

int main()
{
    Employee e1;
    e1.input_data("dfgh", 56, 789);
    e1.cal_bonus(7800);
    e1.display();

    return 0;
} */

// labtask 7

// Q2
/* class Result
{
    string name;
    int roll;
    int marks[5];

public:
    Result()
    {
        name = "unknown";
        roll = 0;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }

    Result(string n, int r, int arr[])
    {
        name = n;
        roll = r;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = arr[i];
        }
    }

    int cal_avg()
    {
        float avg= 0, sum =0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

        avg = sum/5;
        return avg;
    }

    void display()
    {
        cout << name << " " << roll << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        int avg = cal_avg();
        cout<<avg<<endl;

        if(avg >= 50)
        {
            cout<<"pass";
        }
        else
        {
            cout<<"fail";
        }
    }
};

int main()
{
    int arr[5 ]= {67 , 68 ,68 ,34 , 78};
    Result r1("fgh", 67, arr);
    r1.display();
} */

// labtask8
// Q1

/* class BankAccount
{
    static int totalBalance;
    int deposit;
    public :

    BankAccount(int d)
    {
        deposit = d;
        totalBalance +=deposit;
    }

    static void current_balance()
    {
        cout<<"Total balanace current :"<<totalBalance<<endl;
    }


    ~BankAccount()
    {
        cout<<"Account closed!!"<<endl;
    }

};

 int BankAccount::totalBalance = 0;

int main()
{
    BankAccount b1(300);
    b1.current_balance();


    BankAccount b2(2300);
    b2.current_balance();

    return 0;
} */


// Q3

/* class library
{
    static int counter;
    int limit = 5;

    public:

    
    library()
    {
        if(counter<limit)
        {
            counter++;
            return;
        }
        cout<<"Library is full!!"<<endl;
    }

    void static current_books()
    {
        cout<<"current number of books "<<counter<<endl;
    }


    ~library()
    {
    
            counter--;
       
        cout<<"book removed!!"<<endl;
    }
};

int library::counter = 0;

int main(){
    library l1;
    l1.current_books();
    library l2;
    l2.current_books();
    library l3,l4,l5;
    l5.current_books();
    library l6;



} */

// labtask 11
// Q2
/* 
class feeSystem
{

     protected:
     int subamount, total;
    public :
    virtual void submitfee()= 0;
    virtual void returnfee()= 0;

    virtual void display()
    {
        

    }

};

class banktransfer
{
    protected:
    int transfee = 100;

    public :

    void submitamount()
    {
        cin>>submitamount;
        total = submitamount - 100;
    }



};


class creditCard
{
     protected:
    int chargesfee = 0.03;
    public :


};
 */
// Labtask 11
// Q1

#include<iostream>
#include<cstring>
using namespace std;

/* class Distance
{
    protected:
    int feet;
    int inches;

    public :

    Distance() : feet(0), inches(0) {};

    Distance(int f, int i): feet(f), inches(i)
    {
        conversion();
    }

    void conversion()
    {
        feet += inches/12;
        inches = inches % 12;
    }

    Distance operator +(const Distance &D)
    {
        Distance temp(0,0);
        temp.feet = this->feet + D.feet;
        temp.inches = this->inches + D.inches;

        temp.conversion();
        return temp;
    }

    bool operator == (const Distance &D)
    {

        return (feet == D.feet && inches == D.inches);
       
    }

    void show_data() const
    {
        cout<<"Feet : "<<feet<<endl;
        cout<<"Inches :"<<inches<<endl;
    }
};

int main()
{
    Distance D1(4, 15);
    Distance D2(6, 12);
    if(D2 == D1)
    {
        cout<<"Both distances are equal "<<endl;

    }
    Distance D3;
    D3 = D1 + D2;
    D3.show_data();
}
 */
/* 

 class  student
 {
    protected:
    char *name;
    int rolln;

    public :

    student()
    {
        name = new char[strlen("unknown")+1];
        strcpy(name, "unknown");
        rolln = 0;
    }

    student( int r,const char *n)
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        rolln = r;
    }

    void showdata()
    {
        cout<< name<<" "<<rolln<<endl;
    }

    ~student()
    {
        delete[] name;
        cout<<"destructor\n";
    }
};

int main()
{
    student s1(101 , "usman");
    student s2= s1;
   
    s1.showdata();
    s2.showdata();
   
}
 */
/* 
 class  student
 {
    protected:
    char *name;
    int rolln;

    public :

    student()
    {
        name = new char[strlen("unknown")+1];
        strcpy(name, "unknown");
        rolln = 0;
    }

    student( int r,const char *n)
    {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        rolln = r;
    }

    student(const student &S)
    {
        name = new char[strlen(S.name)+1];
        strcpy(name, S.name);
        rolln = S.rolln;
    }

    void change_name(const char*n)
    {
        delete[] name;
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }

    void showdata()
    {
        cout<< name<<" "<<rolln<<endl;
    }

    ~student()
    {
        delete[] name;
        cout<<"destructor\n";
    }
};

int main()
{
    student s1(101 , "usman");
    student s2= s1;

    s1.showdata();
    s2.showdata();

    s2.change_name("ahmed");
    s2.showdata();
   
} */


class Paymentsystem
{
    protected:
    int servicefee;
    int amount;
    int total;
    int refund;

    public :
    virtual void pay() = 0;
    virtual void Refund() = 0;

    void display()
    {
        cout<<servicefee<<" "<< amount<<" "<<total<<" "<<refund<<" ";
    }

};

class easypaisa : public Paymentsystem
{
    public:

    void pay()override
    {
        cin>>amount;
         ServiceFee();
        totalamount();
    }

    void ServiceFee()
    {
        servicefee = amount * 0.02;
    }

    void totalamount()
    {
        total = amount - servicefee;
    }

    void Refund()override
    {
        refund =total = amount - servicefee;
    }

};

class jazzcash : public Paymentsystem
{
    public :
    void pay() override
    {
        cin>>amount;
        ServiceFee();
        totalamount();
    }

    void ServiceFee()
    {
        servicefee = amount * 0.05;
    }

    void totalamount()
    {
        total = amount - servicefee;
    }

    void Refund()override
    {
        refund =total = amount - servicefee;
    }




};


int main()
{
    easypaisa e;
    Paymentsystem *p;
    p = &e;

    p->pay();
    p->Refund();
    p->display();

    jazzcash j;
    p = &j;

    p->pay();
    p->Refund();
    p->display();


}
#include<iostream>
using namespace std;

class bankAccount
{
    private :
    static int totalBalance;

    public:

    bankAccount()
    {
        int deposit= 0;
        totalBalance += deposit ;
    }

    bankAccount(int deposit)
    {
        totalBalance += deposit;
    }

    ~bankAccount()
    {
        cout<<"Account closed!\n";
        
    }

    static void display()
    {
        cout<<"Current total balance : "<<totalBalance<<endl;
    }

};

int bankAccount::totalBalance = 0;

int main()
{
    bankAccount A1;
    A1.display();

    bankAccount A2(45);
    A2.display();

    bankAccount A3(20);
    A3.display();

}
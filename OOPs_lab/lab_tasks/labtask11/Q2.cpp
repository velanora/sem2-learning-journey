#include<iostream>
using namespace std;

class FeeSystem
{
    protected :
    int TransactionFee = 100;
    int SubmittedAmount;
    int FinalAmount;
    int RefundAmount;

    public :
    virtual void submit_fee() = 0;
    virtual void return_fee() = 0;

    virtual void display() const
    {
        cout<<"Submitted Fee : "<<SubmittedAmount<<endl;
        cout<<"Total paid : "<<FinalAmount<<endl;
        cout<<"refund Details : "<<RefundAmount<<endl;
    }

};

class BankTransfer : public FeeSystem
{
    public :

    void submit_fee()
    {
        cout<<"Enter the amount for Bank Transfer : ";
        cin>>SubmittedAmount;
        totalAmount();
        return_fee();
    }

    void return_fee() 
    {
        RefundAmount = FinalAmount;
    }

    void totalAmount()
    {
        FinalAmount = SubmittedAmount - TransactionFee;
    }

   
};

class CreditCard : public FeeSystem
{
    public :
    int ProcessingCharges;

    void submit_fee()
    {
        cout<<"Enter the amount for credit Card : ";
        cin>>SubmittedAmount;
        totalAmount();
        return_fee();
        

    }

    void return_fee() 
    {
        RefundAmount = SubmittedAmount;
    }

    void totalAmount()
    {
        ProcessingCharges = SubmittedAmount * 0.03;
        FinalAmount = SubmittedAmount + ProcessingCharges;
    }

};

int main()
{
    FeeSystem *ptr ;
    BankTransfer B1;
    CreditCard C1;

    ptr = &B1;
    ptr->submit_fee();
    ptr->display();


    ptr = &C1;
    ptr->submit_fee();
    ptr->display();


    return 0;

}
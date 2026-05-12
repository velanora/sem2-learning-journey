#include<iostream>
using namespace std;

class PaymentSystem
{
    protected:
    int OriginalAmount;
    float serviceFee;
    float TotalAmount;
    float RefundAmount;
   float feerate;

    public :
    virtual void pay() = 0;
    virtual void refund() = 0;

    void calc()
    {
        serviceFee = OriginalAmount * feerate;
        TotalAmount = OriginalAmount - serviceFee;
    }

    virtual void display()
    {
        cout<<"Original amount : "<<OriginalAmount<<endl;
        cout<<"service Fee : "<<serviceFee<<endl;
        cout<<"Total amount : "<<TotalAmount<<endl;
        cout<<"Refund Amount : "<<RefundAmount<<endl;

    }

};
class EasyPaisa : public PaymentSystem
{
    public :

    EasyPaisa(){
        feerate = 0.02;
    }

    void pay() override
    {
        cout<<"Enter the payment : ";
        cin>>OriginalAmount;
    }


    void refund() override
    {
        RefundAmount = TotalAmount;
    }

    void display()
    {
        cout << "\n--- EasyPaisa Receipt ---\n";
        calc();
        refund();
        PaymentSystem::display();
    }
};



class JazzCash: public PaymentSystem
{
    public :

    JazzCash(){
        feerate = 0.02;
    }

    void pay() override
    {
        cout<<"Enter the payment : ";
        cin>>OriginalAmount;
    }

    void refund() override
    {
        RefundAmount = TotalAmount;
    }

    void display()
    {
        cout << "\n--- JazzCash Receipt ---\n";
        calc();
        refund();
        PaymentSystem::display();
    }
};

int main()
{
    PaymentSystem * ptr;
    JazzCash J1;
    EasyPaisa E1;

    cout<<"+++++++ Jazz Cash Transaction ++++++ "<<endl;
    ptr = &J1;
    ptr->pay();
    ptr->display();

    cout<<"\n+++++++ Easy Paisa Transaction ++++++ "<<endl;
    ptr = &E1;
    ptr->pay();
    ptr->display();


    return 0;
    
}
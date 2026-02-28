#include<iostream>
using namespace std;

void swap(int*pa, int*pb);
void range(int*pa,int*pb,int*p_range);
void mean(int*pa, int*pb ,int*p_mean);
void normalized(int*pa, int*pb, int*p_na ,int*p_nb);

int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    cout<<endl;

    int*ptra = &a;
    int*ptrb = &b;

    int mean_var = 0;
    int range_var = 0;
    int na =0, nb =0;

    int *p_mean = &mean_var;
    int *p_range = &range_var;
    int *p_na = &na;
    int *p_nb = &nb;
    
    swap(ptra,ptrb);
    cout<<"******After swapping****** \n";
    cout<<"num 1 : "<<a<<endl;
    cout<<"num 2 : "<<b<<endl;
    cout<<endl;

    range(ptra,ptrb,&range_var);
    cout<<"Range : "<<range_var<<endl;
    cout<<endl;
    
    
    mean(ptra,ptrb,&mean_var);
    cout<<"Mean : "<<mean_var<<endl;
    cout<<endl;


    normalized(ptra,ptrb,p_na,p_nb);
    cout<<"normalized values "<<endl;
    cout<<"num 1 :"<<na<<endl;
    cout<<"num 2 :"<<nb<<endl;

    return 0;
}

void swap(int*pa, int*pb)
{
    *pa = (*pa)*(*pb);
    *pb = (*pa)/(*pb);
    *pa = (*pa)/(*pb); 
}

void range(int*pa,int*pb,int*p_range)
{
    int max =(*pa > *pb)? *pa : *pb;
    int min =(*pa < *pb)? *pa : *pb;
    *p_range = (max)-(min);
}

void mean(int*pa, int*pb ,int*p_mean)
{
    *p_mean = (*pa+*pb) / 2;
}

void normalized(int*pa, int*pb, int*p_na, int*p_nb)
{
    int na , nb;
    *p_na = (*pa)/(*pa);
    *p_nb = (*pb)/(*pb);
}
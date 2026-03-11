// Labtask5 Q2
#include<iostream>
#include<string>
#include <stdio.h>
#include<iomanip>
#include<limits>
using namespace std;

struct Employee
{

    char employee_name[50];
    char job_title[30];
    int employee_code;
    int month_count;
    float monthly_salary[5];
    float *base_address;

};

void calculate_display_Payroll(Employee *p_emp,int extra_amount)
{
    float sum = 0.0;
    float average = 0.0;

    // Calculating the average
    for (size_t i = 0; i < 5; i++)
    {
        sum +=  p_emp->base_address[i];
    }
    
    average = (float) sum / (float) p_emp->month_count;


    // Calculating the highest salary
    float highest = 0.0;

    for (int i = 0; i < 5; i++)
    {
        if (highest < p_emp->base_address[i]) 
        {
            highest = p_emp->base_address[i];
        }

    }

    // Displaying all the data through -> operator
    cout<<"Name  : "<<p_emp->employee_name<<endl;
    cout<<"Job title : "<<p_emp->job_title<<endl;
    cout<<"Employee code"<<p_emp->employee_code<<endl;

    cout<<"Monthly salaries : ";
    for (int i = 0; i < p_emp->month_count; i++)
    {
        cout<<fixed<<setprecision(2)<<p_emp->base_address[i]<<"  ";
    }
    cout<<endl;


    cout<<"average salary : "<<fixed<<setprecision(2)<<average<<endl;
    cout<<"Highest salary : "<<fixed<<setprecision(2)<<highest<<endl;

    average += extra_amount;
    cout<<"average salary + extra amount : "<<fixed<<setprecision(2)<<average<<endl;
    
}
int main()
{
    // creating an array of instances
    Employee emp[5];

    for (int i = 0; i < 5; i++)
    {
        Employee *p_emp = &emp[i];
        p_emp->base_address = &p_emp->monthly_salary[i];
        


        cout<<"Enter the name  : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        fgets(p_emp->employee_name , 50 , stdin);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter the job title : ";
        fgets(p_emp->job_title , 30 , stdin);
        cout<<"Enter the employee code : ";
        cin>>p_emp->employee_code;

        // number of month must be (0-5)
        cout<<"Enter the number of months (0-5) :";
        cin>>p_emp->month_count ;

        if( p_emp->month_count <= 0 && p_emp->month_count > 5)
        {
            cout<<"invalid input"<<endl;
            cout<<"Enter the number of months again (0-5): ";
            cin>>p_emp->month_count;
        }


        // entering salary for each month and checking that it's positive
        cout<<"enter the monthly salary (>0) : "<<endl;
        for (int i = 0; i < p_emp->month_count; i++)
        {
            cin>>p_emp->monthly_salary[i];
        
            if( p_emp->monthly_salary[i] < 0 )
            {
                cout<<"invalid input"<<endl;
                cout<<"Enter the monthly salary again (>0): ";
                cin>>p_emp->monthly_salary[i];
            }
        }

        int extra_amount = 0;
        cout<<"enter the extra amount :";
        cin>>extra_amount;

        cout<<"============================="<<endl;
        calculate_display_Payroll(p_emp, extra_amount);
        cout<<"============================="<<endl;


    }
    

    


    
    
}
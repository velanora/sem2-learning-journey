#include<iostream>
using namespace std;


int main()
{

    int campus, dep;
    cout<<"Enter number of campuses : ";
    cin>>campus;
    cout<<"Enter number of departments : ";
    cin>>dep;

    int **data = new int *[campus];

    for (int i = 0; i < campus; i++)
    {
        *(data+i)= new int[dep];
    }


    for (int i = 0; i < campus; i++)
    {
        for (int j = 0; j < dep; j++)
        {
            if(i==0)
            {
               cout<<"Enter students for Peshawar Campus " ;
                if(j==0)
                {
                    cout<<"- Computer Science : ";
                    cin>>*(*(data+i)+j);
                }
                else if(j==1)
                {
                    cout<<"- Software Engineering : ";
                    cin>>*(*(data+i)+j);

                }
                else 
                {
                    cout<<"- Data Science";
                    cin>>*(*(data+i)+j);
                
                }


            }
            else if(i==1)
            {
                cout<<"Enter students for Islamabad Campus " ;
                if(j==0)
                {
                    cout<<"- Computer Science : ";
                    cin>>*(*(data+i)+j);
                }
                else if(j==1)
                {
                    cout<<"- Software Engineering : ";
                    cin>>*(*(data+i)+j);
                }
                else if(j==2)
                {
                    cout<<"- Data Science : ";
                    cin>>*(*(data+i)+j);
                }
                else
                {
                    cout<<"Wrong Department"<<endl;
                }

            }
            else if(i==2)
            {
                cout<<"Enter students for Lahore Campus " ;
                if(j==0)
                {
                    cout<<"- Computer Science : ";
                    cin>>*(*(data+i)+j);
                }
                else if(j==1)
                {
                    cout<<"- Software Engineering : ";
                    cin>>*(*(data+i)+j);
                }
                else if(j==2)
                {
                    cout<<"- Data Science : ";
                    cin>>*(*(data+i)+j);
                }
                else
                {
                    cout<<"Wrong Department";
                }
            }
            else
            {
                cout<<"Wrong campus";
            }

           

        }
         cout<<endl;
        
    }

    cout<<"Campuses / Departments | \t CS \t SE \t DS "<<endl;
    cout<<"------------------------------------------------"<<endl;

    for (int i = 0; i < campus; i++)
    {
        if(i==0)
        {
            cout<<"Peshawar Campus \t\t";
        }
        else if(i==1)
        {
            cout<<"Islamabad Campus \t\t";
        }
        else if(i==2)
        {
            cout<<"Lahore Campus \t\t\t";
        }
        else
        {
            cout<<"Wrong campus"<<endl;
        }

        for (int j = 0; j < dep; j++)
        {
            if (j==0)
            {
                cout<<*(*(data+i)+j)<<"\t";
            }
            else if (j==1)
            {
                cout<<*(*(data+i)+j)<<"\t";
            }
            else if (j==2)
            {
                cout<<*(*(data+i)+j)<<"\t";
            }
            else
            {
                cout<<"Wrong department"<<endl;
            }
        }

        cout<<endl;
    }
    


    for (int i = 0; i < campus; i++)
    {
        delete [] (data+i);
    }

    delete [] data;
    




    return 0;

}





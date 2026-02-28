#include<iostream>
using namespace std;

// I could only complete first 4 functions

// 1 enter_quiz_marks
void enter_quiz_marks(int ***&data ,int &n_classes, int *&n_students )
{

    cout<<"Enter number of classes";
    cin>>n_classes;

    data = new int**[n_classes];
    n_students  = new int[n_classes];
    

    for (int i = 0; i < n_classes; i++)     // loop for classs
    {
        cout<<"Class : "<<i+1<<endl;
        cout<<"Enter number of students : ";
        cin>>*(n_students+i);
       


        *(data+i) = new int *[*(n_students+i)];

        // loop for 

        for (int j = 0; j < *(n_students + i); j++)
        {
            int quizzes = *(n_students + i) - j;
            *(*(data+i)+j) = new int [quizzes];

            cout<<"Enter marks for student "<<j+1<<" : ";

            for (int k = 0; k < *(n_students+i)-j; k++)
            {
                cin>>*(*(*(data+i)+j)+k);
            }

            cout<<endl;
        }
    }  
}

void display_quiz_marks( int ***&p_data ,int &n_classes , int *&n_students )
{
    cout<<"Displaying quiz marks: \n"<<endl;

    for (int i = 0; i < n_classes; i++)
    {
        cout<<"Class "<<i+1<<" : "<<endl;

        for (int j = 0; j < *(n_students+i) ; j++)
       {
           cout<<"Student "<<j+1<<" : ";
           

           for (int k = 0; k < (*(n_students+i)-j); k++)
            {
                cout<<*(*(*(p_data+i)+j)+k)<<" ";
            }
            cout<<endl;
       }
       cout<<endl;
    }  

    cout<<endl;
} 

void student_average( int ***&p_data , int *&n_students)
{
    int c_n, s_n;
    cout<<"Enter the class of student : ";
    cin>>c_n;
    cout<<"Enter the students number : ";
    cin>>s_n;

    float sum_of_quizzes = 0.0 ;

    // loop for sum of quizzes     
    int quiz_count = *(n_students +(c_n-1))- (s_n-1);  // to achieve jagged quizzes

    for (int k = 0; k < quiz_count ; k++)  
    {
        sum_of_quizzes += *(*(*(p_data+(c_n-1))+(s_n-1))+k);    
    }

    float student_average = (float) sum_of_quizzes/ quiz_count;

    cout<<"Student "<<s_n<<" in class "<<c_n<<" Average : "<<student_average<<endl;

    cout<<endl;

}

void class_average(int ***&data , int *&n_students  )
{

    int c_n;
    cout<<" Enter the class number : ";
    cin>>c_n;

    float sum = 0.0 ;
    float avg_of_student;
    int total_students = *(n_students + (c_n - 1));
    int quiz_count;

    for (int j = 0; j < total_students  ; j++)   // *((c_n-1 )+ (n_students))     // j is student
    {
        
        avg_of_student = 0.0;
        quiz_count = *(n_students + c_n-1) - j;


        for (int k = 0; k < quiz_count ; k++)
        {
            avg_of_student += *(*(*(data+ c_n -1) +j)+k);
        }


        sum += avg_of_student  / quiz_count;
    }

    float class_avg = (float) sum /  total_students;

    cout<<"Class "<<c_n<<" average : "<<class_avg<<endl;
    
    cout<<endl;

}

int main()
{
    
    int ***data = nullptr;
    int n_classes;
    int *n_students;
    int *n_quizzes;
    
    int option = 0 ;
    char choice ;
    
do
{
    cout<<"Menu"<<endl
    <<"========== QUIZ ANALYSIS SYSTEM =========="<<endl
    <<"1. Enter quiz marks"<<endl
    <<"2. Display quiz marks"<<endl
    <<"3. Calculate student average"<<endl
    <<"4. Calculate class average"<<endl
    <<"5. Find maximum quiz mark in a class"<<endl
    <<"6. Identify best performing class"<<endl
    <<"7. Adjust quiz marks for fairness"<<endl
    <<"8. Exit"<<endl 
    <<"Enter your option:";
    cin>>option;

    if(option == 1)
    {
        choice = 'y';
        enter_quiz_marks(data , n_classes , n_students);
    }
    else if(option == 2)
    {
        choice = 'y';
        cout<<"-----You selected option 2. Display quiz marks---- "<<endl;
        display_quiz_marks(data, n_classes, n_students);
        
    }
    else if(option == 3)
    {
        choice = 'y';
        cout<<"---- You selected option 3. Calculate student average---- "<<endl;
        student_average(data , n_students);
    }
    else if(option == 4)
    {
        choice = 'y';
        cout<<"---- You selected option 4. Calculate class average---- "<<endl;
        class_average(data, n_students);
    }
    else if(option == 5)
    {
        choice = 'y';
        cout<<"----- You selected option 5. Find maximum quiz mark in a class ---- "<<endl;
    }
    else if(option == 6)
    {
        choice = 'y';
        cout<<"---- You selected option 6. Identify best performing class ---- "<<endl;
    }
    else if(option == 7)
    {
        choice = 'y';
        cout<<"---- You selected option 3. Calculate student average ---- "<<endl;
    }
    else if(option == 8)
    {
        choice = 'n';
        cout<<"---- You selected option 8. Exit ---- "<<endl;
    }
    else
    {
        choice = 'y';
        cout<<"---- You selected a wrong option ----"<<endl;
        cout<<"Choose again  "<<endl;
    }

} while (choice == 'Y' || choice == 'y');

    
}
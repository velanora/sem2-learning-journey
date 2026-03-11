/*
Q1. Pointer Basics: Declare an integer pointer, assign a value, print value using both pointer
and variable.
*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    int *p_age = &age;
    
    cout<<"Enter the age : ";
    cin>>*(p_age);


    cout<<"Displaying using variable : "<<age<<endl;
    cout<<"Displaying using pointer : "<<*p_age<<endl;

    return 0;

}


// 1 enter_quiz_marks
void enter_quiz_marks(int ***&p_data ,int &p_classes , int *&p_students , int &p_quizzes )
{
   cout<<"Total number of classes : ";
   cin>>p_classes;
   cout<<endl;

   p_data = new int **[p_classes];

   for (int i = 0; i < p_classes ; i++)
    {

        cout<<"Enter number of students in class "<<i+1<<" : ";
        cin>>*p_students;
        *(p_data+i) = new int *[*p_students];

        for (int j = 0; j < *p_students ; j++)
        {
            p_quizzes= *p_students+j;
            *(*(p_data+i)+j) = new int [p_quizzes];
            cout<<"Enter quiz marks for student "<<j+1<<" : "; 
            

            for (int k =0; k < (p_quizzes-j) ; k++)
            {
                cin>>*(*(*(p_data+i)+j)+k);
            }

            cout<<endl;
        }
    }

    cout<<endl;
}
// 2
void display_quiz_marks( int ***&p_data ,int **&p_classes , int *&p_students , int &p_quizzes)
{
    cout<<"Displaying quiz marks: \n"<<endl;

    for (int i = 0; i < **p_classes; i++)
    {
        cout<<"Class "<<i+1<<" : "<<endl;
        for (int j = 0; j < (*p_students-i) ; j++)
       {
           cout<<"Student "<<j+1<<" : ";

           for (int k = 0; k < (p_quizzes-j); k++)
            {
                cout<<*(*(*(p_data+i)+j)+k)<<" ";
            }
            cout<<endl;
       }
       cout<<endl;
    }  

    cout<<endl;
} 
// 3
void cal_student_average(int ***&p_data, int**&p_classes , int*&p_students , int &p_quizzes)
{
    int class_num;
    cout<<"Enter the class number : ";
    cin>>class_num;

    int student_num;
    cout<<"Enter the student number : ";
    cin>>student_num;

    float quiz_count;
    float sum_of_quizzes = 0;

    for (int i = 0; i < **p_classes; i++)
    {
        for (int j = 0; j < *p_students ; j++)
       {

           for (int k = 0; k < p_quizzes; k++)
            {
                quiz_count++;
            }
            cout<<endl;
       }
       cout<<endl;
    } 
   
    for (int i = (quiz_count-1); i >=0 ; i--)
    {
        sum_of_quizzes += *(*(*(p_data+(class_num-1))+student_num-1)+i) ;
    }

    float student_average = sum_of_quizzes/quiz_count;
    cout<<"Student "<<student_num<<"in class "<<class_num<<"average : "<<student_average<<endl;
    cout<<endl;

}

int main()
{
    int quizzes=0;
    int *students= &quizzes;
    int **classes= &students;

    int ***data = nullptr;

    
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
        enter_quiz_marks( data, classes , students , quizzes );
    }
    else if(option == 2)
    {
        choice = 'y';
        cout<<"You selected option 2. Display quiz marks "<<endl;
        display_quiz_marks(data, classes , students , quizzes  ); 
    }
    else if(option == 3)
    {
        choice = 'y';
        cout<<"You selected option 3. Calculate student average "<<endl;
        cal_student_average(data, classes, students , quizzes);

    }
    else if(option == 4)
    {
        choice = 'y';
        cout<<"You selected option 4. Calculate class average "<<endl;
    }
    else if(option == 5)
    {
        choice = 'y';
        cout<<"You selected option 5. Find maximum quiz mark in a class "<<endl;
    }
    else if(option == 6)
    {
        choice = 'y';
        cout<<"You selected option 6. Identify best performing class "<<endl;
    }
    else if(option == 7)
    {
        choice = 'y';
        cout<<"You selected option 3. Calculate student average "<<endl;
    }
    else if(option == 8)
    {
        choice = 'n';
        cout<<"You selected option 8. Exit "<<endl;
    }
    else
    {
        choice = 'y';
        cout<<"You selected a wrong option"<<endl;
        cout<<"Choose again "<<endl;
    }

} while (choice == 'Y' || choice == 'y');

    
}

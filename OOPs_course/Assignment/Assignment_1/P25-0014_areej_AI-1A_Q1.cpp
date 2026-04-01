#include<iostream>
#include<cstdio>

using namespace std;

void stringconcatenate(char *p_str1, char*p_str2)
{
   int i=0;
   int count = 0;
   while ( *(p_str2+i) != '\0')
   {
      count++;
      i++;
   }
   *(p_str2+i)= ' ';
   count++;
   
   int j = 0;
   while( *(p_str1+j) != '\0')
   {
      *(p_str2 + count+ j)= *(p_str1 + j);
      j++;
   }

   *(p_str2 + count + j)= '\0';
   
   puts(p_str2);
}

void CompressString(char * p_str3)
{

   for (int i = 0; *(p_str3 + i) != '\0' ; i++)
   {

      int j = (i+1);
      while( *(p_str3 + j) != '\0')
      {

         if( *(p_str3 + i) == *(p_str3 + j) )
         {

            for (int k = j; *(p_str3 + k) != '\0'; k++)
            {
               *(p_str3 + k) = *(p_str3 + (k+1));
            }
         }
         else
         {
            j++;
         }
      }
      
   }

   puts(p_str3);
   
}

char* ReverseSentence(char * p_arr, int n2)
{ 
 
   char* str4 = new char[n2];
   
   // lop for storing the p_arr into str4
   for (int i = 0; i <  n2 ; i++)
   {
      *(str4+i) = *(p_arr+i);
   }
   *(str4+n2) = '\0';


   int count = 0;
   for (int i = (n2-1)-(count); i>=0 ; i--)
   {
      
      if(*(str4+i)== ' ' ||  i == 0)
      {

         int j = (i == 0) ? 0 : i + 1;

         while( *(str4+j) !=' ' && *(str4+j)!='\0')
         {
            *(p_arr + count) = *(str4+j);
            j++;
            count++;
         }

         *(p_arr+count++) = ' ';

         
      }
   
   }
    
   p_arr[count - 1] = '\0';

   delete[] str4;
   
   return p_arr;
}

void pluralWords(char **pp_arr, int wordCount , int len)
{

   for (int i = 0; i < wordCount ; i++)
   {
      
      for (int j = (len-1); j>=0 ; j--)
      {
         char *word = *(pp_arr+i);
         
         if( *(word+j) == '\0' )
         {

            if( *(word+(j-1)) == 'h'   &&    (  *(word+(j-2)) == 'c' || *(word+(j-2)) == 's' ) )
            {
               printf("vvvvvvv");
               *(word+(j)) = 'e';
               *(word+(j+1)) = 's';
               *(word+(j+2)) = '\0';
            }
            else if( *(word+(j-1)) == 'x'   ||    ( *(word+(j-2)) == 's' && *(word+(j-3)) == 'i' )  )
            {
               *(word+(j)) = 'e';
               *(word+(j+1)) = 's';
               *(word+(j+2)) = '\0';
            }
            else if(  (  *(word+(j-1)) == 'z' || *(word+(j-1)) == 's' )     &&     (  *(word+(j-1)) != 'a' &&  *(word+(j-1)) != 'e' && *(word+(j-1)) != 'i' && *(word+(j-1)) != 'o' && *(word+(j-1)) != 'u') )
            {
               *(word+(j)) = 'z';
               *(word+(j+1)) = 'e';
               *(word+(j+2)) = 's';
               *(word+(j+3)) = '\0';

            }
            //2
            else if(   *(word+(j-1)) == 'z' &&    ( *(word+(j-2)) == 'a' || *(word+(j-2)) == 'e')    )
            {
               *(word+(j)) = 'z';
               *(word+(j+1)) ='e';
               *(word+(j+2)) = 's';
               *(word+(j+3)) = '\0';
            }
            //3
            else if(   *(word+(j-1)) == 's'    &&    (  *(word+(j-2)) == 'a' || *(word+(j-2)) == 'e')    )
            {
               *(word+(j)) = 'e';
               *(word+(j+1)) = 's';
               *(word+(j+2)) = '\0';
               
            }
            // 4
            else if(  *(word+(j-1)) == 'f' &&  *(word+(j-2)) == 'f' )
            {
               *(word+j) = 's';
               *(word+(j+1)) = '\0';
            }
            // 5
            else if(   *(word+(j-1)) == 'f'   ||    (  *(word+(j-2)) == 'f' &&  *(word+(j-1)) == 'e'))
            {
               if(*(word+(j-1)) == 'f')
               {
                  *(word+(j-1)) = 'v';
                  *(word+(j)) = 'e';
                  *(word+(j+1)) = 's';
                  *(word+(j+2)) = '\0';
               }
               else
               {
                  *(word+(j-2)) = 'v';
                  *(word+(j-1)) = 'e';
                  *(word+(j)) = 's';
                  *(word+(j+1)) = '\0';
               }
            }
            //6
            else if(  *(word+(j-1)) == 'n' && *(word+(j-2)) == 'o'  )
            {
               *(word+(j-2)) = 'a';
               *(word+(j-1)) = '\0';
               
            }
            //7
            else if(  *(word+(j-1)) == 's' && *(word+(j-2)) == 'u'   )
            {
               *(word+(j-2)) = 'i';
               *(word+(j-1)) = '\0';
            }
            //8
            else if(  *(word+(j-1)) == 'y' )
            {
               if (*(word+(j-2)) == 'a' || *(word+(j-2)) == 'e' || *(word+(j-2)) == 'i' || *(word+(j-2)) == 'o' || *(word+(j-2)) == 'u' )
               {
                  *(word+(j)) = 's';
                  *(word+(j+1)) = '\0';
               }
               else
               {
                  *(word+(j)) = 'i';
                  *(word+(j+1)) = 'e';
                  *(word+(j+2)) = 's';
                  *(word+(j+3)) = '\0';
               }
               
            }
            //9
            else
            {
               *(word+(j)) = 's';
               *(word+(j+1)) = '\0';
            }

         }
      }      
   }
}

int main()
{
   
 char choice ;
 int option = 0;
 do
 {
   choice = 'Y';
   cout<<" =========== TEXT PROCESSING ENGINE ==========="<<endl
   <<"1. Merge two strings"<<endl
   <<"2. Compress a string"<<endl
   <<"3. Reverse a sentence"<<endl
   <<"4. Convert singular words to plural"<<endl
   <<"5. Exit"<<endl;

   cout<<"Enter option : ";
   cin>>option;

   if(option == 1)
   {
      choice = 'Y'; 

      cout<<"You selected \noption 1 :Merge two strings"<<endl;
      char* str1= new char[50];
      char* str2= new char[50];
      cin.ignore();

      cout<<"Enter string 1 : ";
      cin.getline(str1,50);

      cout<<"Enter string 2 : ";
      cin.getline(str2,50);
      stringconcatenate(str1,str2);

      delete[] str1;
      delete[] str2;

   }
   else if(option==2)
   {
      choice = 'Y';

      cout<<"----You selected \noption 2 : Compress a string----"<<endl;
      char *str3 = new char[30];
      cin.ignore();
      cout<<"Enter string to be compressed : ";
      cin.getline(str3,30);
      CompressString(str3);
   }
   else if(option==3)
   {
      choice = 'Y'; 

      cout<<"----You selected \noption 3 : Reverse a sentence---- "<<endl;
   
      int n2;
      cout<<"Enter the size : ";
      cin>>n2;
      char arr[n2];

      cin.ignore();
      cout<<"Enter the string to reverse the sentence : ";
      cin.getline(arr,30);

      ReverseSentence(arr, n2);
      puts(arr);

   }
   else if(option==4)
   {
      choice = 'Y';

      cout<<"----You selected \noption 4 : Convert singuylar words to plural----"<<endl;
      int M,N;
      cout<<"Enter number of words";
      cin>>M;
      cout<<"Enter the maximum length of words";
      cin>>N;
      
      char *arr = new char[M*N];
      char *p_arr = arr;

      cin.ignore();
      
      for (int i = 0; i < M; i++)
      {
         cout<<"Enter the word "<<i+1<<" ";
         cin.getline((p_arr), N);
         p_arr += N;  
      }

      p_arr = arr;
      cout<<"Words before updating"<<endl;
      for (int i = 0; i < M; i++)
      {
         cout<<i+1<<" : ";
         puts(p_arr);
         
         p_arr++;
         p_arr += N;
      }

      p_arr = arr;
      pluralWords( &p_arr , M , N );

      p_arr = arr;  
      cout<<"Words after updating"<<endl;
      for (int i = 0; i < M; i++)
      {
         cout<<i+1<<" : ";
         puts(p_arr);
        
         p_arr+=N;
      }

      delete[] arr;

   }
   else if(option==5)
   {
      cout<<"----You selected \noption 5 : exit----"<<endl;
      choice = 'N';
   }
   else
   {
      cout<<"----wrong option----";
      cout<<"Choose again"<<endl;
   }
   
 } while (choice != 'Y');
 
   
}
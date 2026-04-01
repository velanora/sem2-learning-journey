/*  #include<iostream>
using namespace std;

class Test
{
    public:
    static int count1 ;
    int count2 ;

    Test()
    {
        count1++;
        count2 = 10;

    }



};

int Test::count1 =0;

int main()
{
    Test t1,t2;

    t1.count1++;
    t2.count1++;

    t1.count2++;


    cout<<" Line 2 : "<<Test::count1<<endl;
    cout<<" Line 3 : "<<t2.count1<<endl;
    cout<<" Line 5 : "<<t1.count2<<endl;
    cout<<" Line 5 : "<<t2.count2<<endl;

    return 0;
}
 
 */

 #include<iostream>
using namespace std;

class car
{
    public :
    static int totalcars;
    int fuel;
    int model;

    car ()
    {
        fuel =0;
        totalcars++;
    }

};

int main()
{

    // accesed through 

} 
  
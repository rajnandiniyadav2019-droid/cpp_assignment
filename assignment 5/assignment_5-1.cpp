#include<iostream>
using namespace std;
class TDate 
{
    public:
    int day ,month , year;
    
    void AcceptDate()
    {
         cout<<"\nenter the day:";
         cin>>day;
         cout<<"\n enter the month:";
         cin>>month;
         cout<<"\n enter the year: ";
         cin>> year;
    }
	 void PrintDate()
     {
         cout<<"\n day:"<< day<<"\n month:"<<month <<"\n year: "<<year;
     }
};
class person
{
     public:
    string name ;
   int  age , date_of_birth;
   TDate s;
   
     void AcceptPersonData()
     {
        cout<<"\nenter the name :";
        cin>> name;
        cout<<"\nenter age: ";
        cin>>age;
        cout<<"\ndate_of_birth : ";
        cin>>date_of_birth;
          s.AcceptDate();     
     }
	void PrintPersonData()
    {
        cout<<"\n name:"<< name<<"\n age::"<<age<<"\ndate_of_birth : "<< date_of_birth;
        s.PrintDate();
    }
};
int main ()
{
 person s;
 s.AcceptPersonData();
 s.PrintPersonData();      
    return 0;
}
#include<iostream>
using namespace std;
class address
{
    public:
    string cityName ,stateName ;
    int Pincode;
    
    void AcceptAddress()
    {
         cout<<"\nenter the city name:";
         cin>>cityName;
         cout<<"\n enter the state name:";
         cin>>stateName ;
         cout<<"\n enter the pincode ";
         cin>>Pincode;
    }
	 void Printaddress()
     {
         cout<<"\n city name:"<<cityName<<"\n state name:"<<stateName <<"\n Pincode:"<<Pincode;
     }
};
class student
{
     public:
    string  name , courseName , Home_address;

   address s;
   
     void AcceptStudent()
     {
        cout<<"\nenter the name :";
        cin>>name;
        cout<<"\n enter the course Name: ";
        cin>>courseName;
        cout<<"\nenter Home address";
        cin>>Home_address;
          s.AcceptAddress();     
     }
	void PrintStudent()
    {
        cout<<"\n name:"<< name<<"\n cource name::"<<courseName<<"\nhome address: "<< Home_address;
        s.Printaddress();
    }
};
int main ()
{
 student s;
 s.AcceptStudent();
 s.PrintStudent();      
    return 0;
}
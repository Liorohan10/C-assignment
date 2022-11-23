/*Name-Rohan Ganguly
  Roll No.- 2105915
  Section CSE-18
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip> 

using namespace std;
class customer 
{
	public:
	string customername;
  string carmodel;
  char data;
  virtual void get_data()=0;
  virtual void showrent()=0; 
  virtual void calculate()=0;

};
class rent : public customer 
{
	public:
	int days=0,rentalfee=0; 
	void get_data()
	{
	
	  cout << "Please Enter your Name: "; 
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"Please Select a Car"<<endl; 
        cout<<"Enter 'A' for Tesla Model Y."<<endl;
        cout<<"Enter 'B' for Hyundai Verna."<<endl;
        cout<<"Enter 'C' for Ford Escort."<<endl;
        cout<<"Rent prices(per day) are as follows:-"<<endl;
        cout<<"Tesla Model Y - Rs 15000"<<endl;
        cout<<"Hyundai Verna - Rs 1000"<<endl;
        cout<<"Ford Escort - Rs 950"<<endl;
        cout<<endl;
        cout<<"Choose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;

 if(carmodel=="A")
 {
 	
 
		cout<<"You have choosed Tesla Model Y"<<endl;
    cout << "Car details are displayed below:-\n";
		ifstream A("A.txt"); 
    char str[200];
    while(A) 
    {
      A.getline(str, 200);  
      if(A)
      { 
        cout << str << endl;
      }  
    }

  }
  if(carmodel=="B")
  {

    cout << "You have choosed Hyundai Verna" << endl;
    cout << "Car details are displayed below:-\n";
    ifstream B("B.txt");
    char str[200];
    while (B)
    {
      B.getline(str, 200);
      if (B)
      {
        cout << str << endl;
      }
    }
 }
 if(carmodel=="C")
 {

   cout << "You have choosed Ford Escort" << endl;
   cout << "Car details are displayed below:-\n";
   ifstream C("C.txt");
   char str[200];
   while (C)
   {
     C.getline(str, 200);
     if (C)
     {
       cout << str << endl;
     }
   }
}  
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
{
  cout<<"Invaild Car Model. Please try again!"<<endl;
}      
}while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );

    cout << "Please provide following information: "<<endl; 
	
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		cout<<"Calculating rent. Please wait......"<<endl;
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*15000;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*1000;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*950;
    }
void showrent()
    {
    cout << "Car Rental - Customer Invoice"<<endl;
    cout << "Customer Name: "<<customername<<endl;
    cout << "Car Model : "<<carmodel<<endl;
    cout << "Number of days : "<<days<<endl;
    cout << "Total Rental Amount is : Rs "<<rentalfee<<endl;
    
	}
};

int main()
{
  customer *obj;
  rent obj2;
  obj = &obj2;
  obj->get_data();
  obj->calculate();
  obj->showrent();

  return 0;
}



#include<iostream>
#include<string>
using namespace std;

class myClass
  {
   public:
          int a,b,c; 
		  float pi;    	  
	      int carNum,carSeat;
	      string carName,carColor;
	      
  };
void main()
{
	myClass myObj1;
    myObj1.a=50;
    myObj1.b=60;
	myObj1.c=myObj1.a+myObj1.b;
	cout<<"Addition :"<<myObj1.c<<"\n";
	myObj1.carNum=1500;
	myObj1.carName="Ford";
	myObj1.carSeat=5;
	myObj1.carColor="Yello";
	cout<<myObj1.carNum<<"\n";
	cout<<myObj1.carSeat<<"\n";
	cout<<myObj1.carColor<<"\n";
	cout<<myObj1.carName<<"\n";
	//return 0; 
}

#include<iostream>
#include<string>
using namespace std;
 
void addition(string fullName);
void addition(){
	int a,b,c;
	cout<<"first no:"<<"\n";
	cin>>a;
	cout<<"second no:"<<"\n";
	cin>>b;
c=a+b;
cout<<"addition:"<<c<<"\n";
}
int main()
{
   
   addition("manoj");
   addition("manoj");
   addition("manoj");
   addition();
   return 0;
}
void addition(string fullName)
{
   // c=a+b;
   cout<<"full name :"<<fullName<<"patil\n";;
   }


#include<iostream>
#include<string>
using namespace std;
int a,b,c;
string firstName,lastName,fullName;
void concate();
void string_length();
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
//void div(int a,int b);
int main()
{
     /* cout<<"Enter first number:\n";
	  cin>>a;
	  cout<<"Enter second number:\n";
	  cin>>b;*/
      cout<<"Enter first name:\n";
	  cin>>firstName;
	  cout<<"Enter last name:\n";
	  cin>>lastName;
	  concate();
	  string_length();
	  add(3,2);
	  sub(7,3);
	  mul(2,2);
//	  div(6,3);
	  return 0;	
}
void concate()
	{
       
      cout<<"Full name is:"<<firstName<<" "<< lastName<<endl;
    }
void string_length()
{
	cout<<"The length of first name is:"<<firstName.length()<<endl;
    cout<<"The length of last name is:"<<lastName.length()<<endl;
}    
void add(int a,int b)
{
	c=a+b;
	cout<<"Addition is:"<<c<<endl;
}
void sub(int a,int b)
{   
	c=a-b;
	cout<<"Substraction is:"<<c<<endl;
}
void mul(int a,int b)
{
	c=a*b;
	cout<<"Multiplication is:"<<c<<endl;
}
/*void div(int a,int b)
{
	c=a/b;
	cout<<"Division is:"<<c<<endl;
}*/

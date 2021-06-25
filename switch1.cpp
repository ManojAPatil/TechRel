#include<iostream>
using namespace std;

int main()
{
	int x,a,b,c;
	cout<<"Enter the first number\n";
	cin>>a;
	cout<<"Enter the second number\n";
	cin>>b;
	cout<<"Enter your choice\n";
	cin>>x; //choice from 1 to 6
	switch(x)
	{
		case 1:
		       c=a+b;
		       cout<<"addition:"<<c<<endl;
		       break;
		case 2:
		       c=a-b;
			   cout<<"substraction:"<<c<<endl;
			   break;
		case 3:
		       c=a*b;
			   cout<<"multiplication:"<<c<<endl;
			   break;
		case 4:
		       c=a/b;
		       cout<<"division:"<<c<<endl;
		       break;
		case 5:
               c=a%b;
		       cout<<"modulus:"<<c<<endl;
	           break;
		case 6:
		       a++;
		       cout<<"Post increment of a:"<<a<<endl;
		       b++;
		       cout<<"Post increment of b:"<<b<<endl;
		       break;	   	          
	}
return 0;
}

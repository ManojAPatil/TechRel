#include <iostream>
#include<string>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first value\n";
	cin>>a;
	cout<<"Enter second value\n";
	cin>>b;
	if(a>b){
	cout<<"a is greater than b\n";
	}
	else if(a==b){
	cout<<"a is equal to b\n";
	}
	else{
	cout<<"b is greater than a\n";
	}
	//short hand if....else
	string c=(a>b)?"a is greater than b\n":"b is greater than a\n";
	cout<<c;
  return 0;
}


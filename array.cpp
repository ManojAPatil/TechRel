#include<iostream>
#include<string>
using namespace std;
int main()
{
	string cars[4]={"Volvo","BMW","Honda","Mazda"};
	cars[2]="Hero";
	for(int i=0;i<4;i++)
	{ 
	    cout<<cars[i]<<endl;
	}
	return 0;
}

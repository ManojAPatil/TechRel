#include <iostream>
#include<string>
using namespace std;
int main()
{
	string food="Pizza";
	string *a=&food;
	cout <<food<<"\n";
	cout <<&food<<"\n";
	cout<<a<<"\n";
	*a="Vadapav";
	cout<<a<<"\n";
	cout<<food<<"\n";
	  return 0;
}


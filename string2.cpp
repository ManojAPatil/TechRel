#include <iostream>
#include<string>
using namespace std;

int main() {
  string myName;
  cout<<"Enter the full name\n";
  getline(cin,myName);
  cout<<"The full name is:"<<myName<<"\n";
  myName[2]='m';
  cout<<myName<<"\n";
  return 0;
}


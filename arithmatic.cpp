//Programme for arithmetic operation
#include<iostream>

using namespace std;
int main()
{
  int a=20,b=4,c;
  c=a+b;
  cout<<"Sum of "<< a <<" and "<< b <<" is : "<<c<<"\n";
  c=a-b;
  cout<<"Substraction of "<< a <<" and "<< b <<" is : "<<c<<"\n"; 
  c=a*b;
  cout<<"multiplication of "<< a <<" and "<< b <<" is : "<<c<<"\n";
  c=a/b;
  cout<<"Division of "<< a <<" and " << b <<" is :"<<c<<"\n";
  c=a%b;
  cout<<"Modulus of "<< a <<" and " << b <<" is :"<<c<<"\n";
  return 0; 
}

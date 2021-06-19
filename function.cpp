#include<iostream>
using namespace std;
 int a,b;
void addition();
int main()
{
   
   cout<<"Enter first number\n";
   cin>>a;
   cout<<"Enter second number\n";
   cin>>b;
   addition();
   return 0;
}
void addition()
{
    a+=b;
   cout<<"addition :"<<a<<"\n";;
   }


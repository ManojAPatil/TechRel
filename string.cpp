#include<iostream>
#include<string>
using namespace std;

int main()
{
   string firstName="Manoj";
   string lastName="Patil";
   string fullName;
   //string concatenation
   fullName=firstName+" "+lastName;
   cout<<"The full Name is:"<<fullName<<"\n";
   //Length of string
   cout<<"The length of firstName string is:"<<firstName.length()<<"\n";
   cout<<"The length of lastName string is:"<<lastName.length()<<"\n";
   cout<<"The length of fullName string is:"<<fullName.length()<<"\n";
   //Access string character
   cout<<"The first character in firstName is:"<<firstName[0]<<"\n";
   cout<<"The second character in firstName is:"<<firstName[1]<<"\n";
   cout<<"The third character in firstName is:"<<firstName[2]<<"\n";
   cout<<"The fourth character in firstName is:"<<firstName[3]<<"\n";
   cout<<"The fifth character in firstName is:"<<firstName[4]<<"\n";
   cout<<"The sixth character in firstName is:"<<firstName[5]<<"\n";
   //Append strings
   cout<<"The full Name is:"<<firstName.append(lastName)<<"\n";
   //Change string character
   firstName[2]='m';
   cout<<firstName<<"\n";
   return 0;

}

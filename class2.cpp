#include<iostream>
#include<string>
using namespace std;

class myClass{
   	public: 
   	       int empid,empsalary;
   	       string empname;
   	          void emp(int empid,string empname,int empsalary){
			  cout<<"Empid is:"<< empid <<"Empname is:"<< empname;
			  cout<<"Empsalary is:"<< empsalary <<endl;
			  }
			  void emp1(int empid,string empname){
			  cout<<"Empid is:"<< empid <<"Empname is:"<< empname<<endl;
			  }
			  myClass(int empid,string empname,int empsalary){
			  cout<<"Empid is:"<< empid <<"Empname is:"<< empname;
			  cout<<"Empsalary is:"<< empsalary <<endl;
			  }
   };
int main(){
      myClass myObj(1000,"manpj",12000);
      myClass myObj1(1001,"akash",13000);
	  //myObj.empid;
      //myObj.empname;
      myObj.empsalary;
      myObj.emp(1001,"rakesh",15000);
      myObj.emp1(1002,"sandip");
      return 0;
}

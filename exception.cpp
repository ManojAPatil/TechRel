#include<iostream>
using namespace std;

int main(){
     try{
	    int age=15;
	    if(age>=18)
	    {
		     cout<<"Access is granted:You are old enough\n"; 
		}else{
		     throw age;
		}
	  }
     catch(int myNum){
	     cout<<"Access is denied : You must be at least 18 year old\n";
	     cout<<"Age is : "<<myNum<<endl;
	 }

return 0;
}

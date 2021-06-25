#include<iostream>
#include<string>
using namespace std;

class Car{
      public:
          string brand;
          string model;
          int year;
          Car(string x,string y,int z){
		     cout<<"This is constructor\n";
		     brand=x;
		     model=y;
		     year=z;
		  }
};
int main(){
    Car myObj("BMW","X5",2009);
	Car myObj1("Ford","musting",1969);
	cout<<"Brand :"<<myObj.brand << " Model :"<< myObj.model << " Year :"<< myObj.year<<endl;
	cout<<"Brand :"<<myObj1.brand << " Model :"<< myObj1.model << " Year :"<< myObj1.year<<endl;
	return 0;
}

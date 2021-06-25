#include<iostream>
#include<string>
using namespace std;

class myClass{
      public:
         float pi,r,b,result;
         int studroll;
         string studname;
         char div;
         void circle(float r){
         	  result=pi*r*r;
		      cout<<"Area of circle :"<<result<<endl;
		 }
		 void rect(float r,float b);
         myClass(int studroll,string studname,char div){
		 cout<<"Student roll :"<<studroll<<"  Student name:"<< studname<<"  Div:"<<div<<endl;
		 }       
};
void myClass::rect(float r,float b){
		 result=r*b;
		 cout<<"Area of rect :"<<result<<endl;
		 }
int main(){
     myClass myObj(1001,"abc",'A');
     myClass myObj1(1002,"pqr",'B');
     myClass myObj2(1003,"xyz",'C');
     myObj.pi=3.14;
     myObj.circle(5);
     myObj.rect(10,10);
return 0;
}

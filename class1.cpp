#include<iostream>
using namespace std;
class myClass
{
	public:
          float pi,radius,result,area;  //attributes
          float s,side1,side2,side3;
};
int main()
{
      myClass circle;  //object create
	  circle.pi=3.14;
	  circle.radius=4;
	  circle.result=circle.pi*circle.radius*circle.radius;
      cout<<"Area of circle is :"<<circle.result<<endl;
      //------------------------------------------------------------
      myClass triangle;
      triangle.side1=2;
      triangle.side2=2;
      triangle.side3=2;
      triangle.s=triangle.side1+ triangle.side2+triangle.side3/2;
      triangle.result=triangle.s*(triangle.s-triangle.side1)*(triangle.s-triangle.side2)*(triangle.s-triangle.side3);
      triangle.area=sqrt(triangle.result);
	  cout<<"Area of  triangle is:"<<triangle.area<<endl;
	  //--------------------------------------------------------------------------
	  myClass rect;
	  rect.side1=5;
	  rect.side2=4;
	  rect.result=rect.side1*rect.side2;
	  cout<<"Area of rectangle is:"<<rect.result<<endl;
	  rect.result=2*(rect.side1+rect.side2);
	  cout<<"Perimeter of rectangle is:"<<rect.result<<endl;
	        
      
	return 0;  	      
}

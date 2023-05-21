//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
#include<iostream>
using namespace std;
class function{
	
		public:
		
		void display(int r,int area)
		{
			cout<<"Enter the Radious";
			cin>>r;
		
			area=3.14*r*r;
		
			cout<<"Area Of Circle"<<area;
		}
		void display(int l,int w,int r)
		{
			cout<<"Enter the Length";
			cin>>l;
			
			cout<<"Enter the Width";
			cin>>w;
			
			r=l*w;
			
			cout<<"Area of Rectangle"<<r;
		}
		void display(int b,int h,double tri)
		{
			cout<<"Enter the Area Of Base";
			cin>>b;
			
			cout<<"Enter the Area Of Height";
			cin>>h;
			
			tri=b*h/2;
			
			cout<<"Area Of The Traingle"<<tri;
		}
		
		
};
main()
{
		function f1;
		f1.display(0,0);
		f1.display(0,0,0);
		f1.display(0,0,0);
			
}

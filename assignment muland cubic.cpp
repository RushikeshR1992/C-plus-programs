//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class parent{
	
		public:
	
			inline int mul(int a,int b)
			{
				return(a*b);
			}
			inline int cube(int x)
			{
				return(x * x * x);
			}
			input(int a,int b)
			{
			
			}
			
};
main()
{
	parent p1;
	
	int a,b;
		cout<<"Enter the value 1: ";
		cin>>a;
				
		cout<<"Enter the value 2: ";
		cin>>b;
	cout<<"Multiplicatio of two values:"<<p1.mul(a,b)<<endl;
	cout<<"Cube of Three value in Multiplication: "<<p1.cube(a)<<"is:: "<<p1.cube(b);
}

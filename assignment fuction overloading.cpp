/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;
class mathmatic{
	
		public:
			
			void display(int a,int b)
			{
				cout<<"Enter the value of A :";
				cin>>a;

				cout<<"Enter the value of B :";
				cin>>b;
				cout<<endl<<"Sumation of townumbers:"<<a+b<<endl;
				cout<<endl<<"Subtraction of two numbers:"<<a-b<<endl<<endl;
			}
			void display(double a,double b)
			{
				cout<<"Enter the value of A :";
				cin>>a;

				cout<<"Enter the value of B :";
				cin>>b;
				cout<<endl<<"Multiplication of two numbers:"<<a*b<<endl;
				cout<<endl<<"Divition of two numbers:"<<a/b<<endl;
				
			}
};
main()
{
	mathmatic m1;
	
	m1.display(0,0);
	m1.display(0,0);
}

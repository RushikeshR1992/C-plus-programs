#include<iostream>
using namespace std;
class addition{
	
		int a,b;
		
		public:
					
			addition(int a,int b)
			{
				int a1,b2;
				
				a=a1;
				b=b2;			
			}
			void sumation1()
			{

									
				cout<<"Enter the value of A";
				cin>>a;

				cout<<"Enter the value of B";
				cin>>b;
				
				cout<<"Sumation of two numbers"<<a+b<<endl;
			
			}
			
};
class subtraction{
	
		int a,b;
		
		public:
			
		subtraction(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		void subtract()
		{
			cout<<"Enter the A and B";
			cin>>a>>b;
			
			cout<<"Subtraction of two value"<<a-b<<endl;
		}
};
class multiplication{
	
		int a,b;
		
		public:
			
			multiplication(int a1,int b1)
			{
					a=a1;
					b=b1;		
			}
			void mul()
			{
				cout<<"Enter the A and B";
				cin>>a>>b;
				
				cout<<"Multiplication of two number"<<a*b<<endl;		
			}		
};
main()
{
	addition a2(0,0);
	a2.sumation1();
	
	subtraction s2(0,0);
	s2.subtract();
	
	multiplication m1(0,0);
	m1.mul();
	
}

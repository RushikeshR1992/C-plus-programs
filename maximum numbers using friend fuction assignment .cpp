//Write a program to find the max number from given two numbers using 
//friend function 
#include<iostream>
using namespace std;
class maximum{
	
		protected:
			int a,b;
			
		public:
			
			void getdata()
			{
				cout<<"Enter the a :";
				cin>>a;
				
				cout<<"Enter the b :";
				cin>>b;				
			}
			friend void max(maximum m);
};
void max(maximum m)
{
	if(m.a>m.b)
	{
		cout<<"a is largest numbers:"<<m.a;
	}
	else
	{
		cout<<"b is largest numbers:"<<m.b;
	}
}
main()
{
	maximum m1;
	m1.getdata();
	max(m1);
	return 0;
}

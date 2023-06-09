//Write a program to swap the two numbers using friend function without 
//using third variable
#include<iostream>
using namespace std;
class swaping{
	
		protected:
			
			int a,b;
		public:
			
			
			void input()
			{
				cout<<"Before swaping :"<<endl;
				cout<<"Enter the A :";
				cin>>a;
				cout<<"Enter the B :";
				cin>>b;
				
			}
			friend void swap(swaping s);
			
};
void swap(swaping s)
{
	s.a=s.a+s.b;//a=10,b=20(10+20)=a=30
	s.b=s.a-s.b;//a=30,b=20(30-20)=b=10
	s.a=s.a-s.b;//a=30,b=10(30-10)=a=20
	cout<<"After Swaping no:"<<endl;
	cout<<"a="<<s.a<<endl;
	cout<<"b"<<s.b;
}
int main()
{
	swaping s1;
	s1.input();
	swap(s1);
	return 0;
}

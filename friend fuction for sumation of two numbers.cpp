#include<iostream>
using namespace std;
class A{
	
		int a,b;
		
		public:
			
			void input()
			{
				cout<<"Enter the a and b";
				cin>>a>>b;
			}
			friend void add(A ob);
};
void add(A ob)
{
		int c;
		c=ob.a + ob.b;
		cout<<"Sum"<<c;
}
int main()
{
	A a1;
	a1.input();
	add(a1);
}

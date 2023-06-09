//Write a program of to swap the two values using templates

#include<iostream>
using namespace std;

//using generic fuction templates

template<class R>
int swap R(R& x,R& y)
{
	R r;
	r=x;
	x=y;
	y=r;
	return 0;
}
int main()
{
	int a,b;
	
	cout<<"Enetr the two numbers A and B";
	cin>>a>>b;
	
	
	
	swap(a,b);
	cout << a << " " << b << endl;
    return 0;
}


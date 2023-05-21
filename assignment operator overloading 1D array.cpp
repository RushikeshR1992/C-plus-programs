// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class complex{
	
		int a;
		
		public:
			int i[10],n;
			
			complex(int a1=0)
			{
				a=a1;
				
			}
			void display()
	    	{
				cout<<endl<< a<<"+";     // a+bi
			}	
			void process()
			{
				cout<<"Enter size of the array : ";
    			cin>>n;
 
			   cout<<"Enter the matrix size:";
    			for(i=0; i<n; i++)
   				{
        			cout<<a[i];
    			}
			}
			complex operator +(complex obj)
			{
				complex temp;
				
				temp.a[i]= a[i]+ obj.a[i];
				
				return(temp);				
			}
};
main()
{
	complex c1(0),c3(0); 
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
}

/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;
class person{
	
		char name[10];
		int age;
			public:
		
			void initialize(int a1,int b2)
			{
				name[10]=a1;
				age=b2;
			}
			void read()
			{
				cout<<"Enter the Name :";
				cin>>name;
			
				cout<<"Enter the Age :";
				cin>>age;	
			}
			void output()
			{
				cout<<name;
				cout<<age;
			}		
};
class student{
			
			int per;
			
			public:
		
			void init(int per1)
			{
				per=per1;
			}
			void read_p()
			{
				cout<<"Enter the percentage :";
				cin>>per;	
			}	
			void output_p()
			{
				cout<<per;			
			}			
};
class teacher:public person,public student{
		
		int salary;
		
			public:
				
			void tech(int q1)
			{
				salary=q1;
			} 		
			void read_sal()
			{
				cout<<"Enter the Salary :";
				cin>>salary;
			}
			void output_s()
			{
				cout<<salary;	
			}	
};
main()
{
	teacher t1;
	t1.initialize(0,0);
	t1.read()
	t1.output();
	t1.init(0);
	t1.read_p();
	t1.output_p();
	t1.tech(0);
	t1.read_sal();
	t1.output_s();
	
	
}
	


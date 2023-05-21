//Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance) 
#include<iostream>
using namespace std;
class person{
	
		public:
			int name,age;
			
			read()
			{
			
				cout<<"Enter the Name And Age: "<<endl;
				cin>>name>>age;
			}	
			write()
			{
				cout<<"The Peson Nmae is:"<<name<<endl<<"That Person Age Is:"<<age<<endl;
			}
};
class student{
	
		public:
			int per;
			
			read_s()
			{
				cout<<"Enter the Student Percentage";
				cin>>per;
			}
			write_s()
			{
				cout<<per;
			}
};
class teacher :public person,public student{
		
		public:
			int sal;
			
			read_sal()
			{
				cout<<"Enter the Teacher Salary";
				cin>>sal;
			}
			write_sal()
			{
				cout<<sal;
			}
}; 
main()
{
		teacher t1;
		t1.read();
		t1.write();
		t1.read_s();
		t1.write_s();
		t1.read_sal();
		t1.write_sal();
}

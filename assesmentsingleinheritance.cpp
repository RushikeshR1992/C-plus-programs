//Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance)
#include<iostream>
using namespace std;
class cricket{
	
		public:
			int n;
			float avg;
};
class batsman : public cricket{
	
		public:
			
			void run()
			{
				cout<<"Enter the run: ";
				cin>>n;
			}
			void average()
			{
				avg=n/100;
			}
			void display()
			{
				cout<<"Run: "<<n;
				cout<<endl<<"Avrage:"<<avg;
				
			}
};
main()
{
	batsman b1;
	b1.run();
	b1.average();
	b1.display();
}


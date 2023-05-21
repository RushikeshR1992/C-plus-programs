#include<iostream>
using namespace std;
class bank{
	
		int ac_no,balance;
		
		public:
			
		char name[10],type_ac[2];
		int amount, withdraw,limit;

		void Assign_values(int a1,int b1)
		{
			ac_no=a1;
			balance=b1;
					
		}	
		void deposite_amount()
		{
			cout<<"Enter the Name of the Dipositer";
			cin>>name;
			cout<<"Account no";
			cin>>ac_no;
			cout<<"Account type";
			cin>>type_ac;
			cout<<"Balance Accout";
			cin>>balance;
			cout<<"How To withdraw Amount";
			cin>> withdraw;
			
		}	
		void widraw()
		{
			cout<<balance<<endl;
			cout<<withdraw<<endl;
			cout<<name<<endl;
			cout<<balance<<endl;
		}
};
main()
{
	bank b1;
	b1.Assign_values(0,0);
	b1.deposite_amount();
	b1.widraw();
	
}

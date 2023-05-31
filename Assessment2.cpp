//Weading Event Management System
#include<iostream>
using namespace std;
main()
{
		char e_name[10],c_name[10],s_name[10];	
		int gue,minite,server;
		float costp_hour = 18.50,costp_minute =0.40,cost_dinner=20.70;
		float cost1,cost2,cost_ser,totf_cost,tot_cost,cost_one_ser,avg_cost,deposit;
		
		
		
		
			cout<<"************Event Management System************"<<endl;
			
			//Input part
	
			cout<<"Enter The Name Of The Event"<<endl;
			cin>>e_name;
			
			cout<<"Enter The Name Of The First and Last Name"<<endl;
			cin>>c_name>>s_name;
			
			cout<<"Enter The Number Of Guests"<<endl;
			cin>>gue;
			
			cout<<"Enter The Number Of Minutes In The Event"<<endl;
			cin>>minite;
		
			cout<<"=========Event estimate for :";
			cout<<c_name<<s_name;
			cout<<"========="<<endl;
			
			cout<<"Enter The Server:";
			cin>>server;
			
			//claculation part
			
			cost1 = (minite / 60) * costp_hour;
			cost2 = (minite % 60) * costp_minute;
			cost_ser = cost1 + cost2;
			cost_one_ser=cost_ser/gue; 	  //Calculation for Cost Of One Server 
			
			//COST for FOOD
			
			totf_cost = gue * cost_dinner;
			avg_cost = totf_cost /  gue;
			tot_cost = totf_cost + (server * cost_one_ser);
			deposit = tot_cost * 0.25;

			//printing part	
					
			cout<<"The Cost Of One Server:"<<cost_one_ser<<endl;
			cout<<"The Total Cost Of Food:"<<totf_cost<<endl;
			cout<<"Average Cost Per Person"<<avg_cost<<endl<<endl;
			cout<<"Total Cost Is :"<<tot_cost<<endl;
			cout<<"Please Deposite a 25% Deposite To Reserve The Event"<<endl;
			cout<<"The Deposite Needed is :"<<deposit;
			 
			
}	

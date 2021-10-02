#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
	int balance;
	int account_no;
	string branch;
	int trans_amt;
	string cust_name;
	public:
		Bank(){		}
		Bank(string branch,string cust_name,int balance,int account_no);  //parameterised constructor
		Bank& set_openbalance(int);
		Bank& set_branch(string);
		//Bank& set_trans_amt(int);
		Bank& set_cust_name(string);
		Bank& set_account_no(int);
		void trns(char,int);
		void show_detail();
		int get_account_no();
		
};
Bank :: Bank(string branch,string cust_name,int balance,int account_no)
{
	this->balance = balance;
	this->account_no = account_no;
	this->branch = branch;
	this->cust_name = cust_name;
}
Bank& Bank :: set_openbalance(int balance)
{
	this->balance = balance;
	return *this;
}

Bank& Bank :: set_branch(string branch)
{
	this->branch = branch;
	return *this; 
	
}
Bank& Bank :: set_cust_name(string cust_name)
{
	this->cust_name = cust_name;
	return *this;
}
Bank& Bank ::set_account_no(int account_no)
{
	this->account_no = account_no;
	return *this;
}
void Bank :: trns(char t_mode,int trans_amt)
{
	if(t_mode == 'W'||t_mode == 'w'){
		balance = balance - trans_amt;
		cout<<"\nAAPKA PAISA BACHA HUA\n"<<balance;
	}
		
	else if(t_mode == 'D'||t_mode == 'd')
	{
		balance = balance + trans_amt;
		cout<<"\nAAPKA PAISA BACHA HUA\n"<<balance;
	}
		
	else
		cout<<"\nINVALID!!! MODE OF TRANSACTION \n";
}
void Bank :: show_detail()
{
	cout<<"\nCustomer name is::"<<cust_name<<endl;
	cout<<"\nAccount number is::"<<account_no<<endl;
	cout<<"\nBranch name is::"<<branch<<endl;
	cout<<"\nOpening Balance is::"<<balance<<endl;
	//cout<<"\nYour remaining balance is:: "<<balance -trans_amt<<endl;
}
int Bank ::get_account_no()
{
	return account_no;
}
main()
{
	Bank sbi[10];
	int num,c=0;
	string nm="",br="";
	int acn=0,bl=0,i;
	char t_mode;
	int acn2,t_amt;	
	while(1)
	{
	system("cls");	
	cout<<"-------------		main menu     -------------";
	cout<<"\n1-CREATE ACCOUNT\n";
	cout<<"\n2-SHOW DETAILS\n";
	cout<<"\n3-TRANSACTION\n";
	cout<<"\n4-SEARCH DETAILS\n";
	cout<<"\n0-FOR EXIT";
	cout<<"\nPlease Enter your choice:: ";
	cin>>num;
	switch(num)
	{
		case 1:
				
				cout<<"\nEnter your name: ";
				cin>>nm;
				cout<<"\nEnter account number: ";
				cin>>acn;
				cout<<"\nEnter branch name: ";
				cin>>br;
				cout<<"\nEnter your open balance: ";
				cin>>bl;
				sbi[c].set_account_no(acn).set_branch(br).set_cust_name(nm).set_openbalance(bl);		
				c++;
				break;
		case 2:
			for(i=0;i<c;i++)
			 sbi[i].show_detail();
			 break;
		case 3:
			
			
			cout<<"Enter Account No:";
			cin>>acn2;
			for(i=0;i<c;i++)
			{
				if(sbi[i].get_account_no()==acn2)
				break;
			}
			if(i==c)
			cout<<"account number not found";
			else
	     	 {
	     	  cout<<"Enter transaction mode(W-withdrawl or D-Deposit)::";
			  cin>>t_mode;
			  cout<<"Enter transaction amount::";
			  cin>>t_amt;
			  sbi[i].trns(t_mode,t_amt);
	     }
	     break;
			
		case 4:
			cout<<"Enter Account No:";
			cin>>acn;
			for(i=0;i<c;i++)
			{
				if(sbi[i].get_account_no()==acn)
				break;
			}
			if(i==c)
			cout<<"account number not found";
			else
	     	 sbi[i].show_detail();
	     	 
		case 0:
		return 0;
	}
	system("pause");
	}
	
	
}

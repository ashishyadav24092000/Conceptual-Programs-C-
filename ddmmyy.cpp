#include<iostream>
#include<stdlib.h>
using namespace std;
class Mydate
{
	int dd,mm,yy;
	string msg;
	public:
		Mydate()   // default constructor
		{
			dd = 1;
			mm = 1;
			yy = 2001;     
		}	
		Mydate(int d ,int m,int y)   //parameterised constructor 
		{
			dd = d;
			mm = m;
			yy = y;
		}
		Mydate(Mydate &b)   //copy constructor 
		{
			dd = b.dd;
			mm = b.mm;
			yy = b.yy;
		}
		string tostring()
		{
			msg = to_string(dd) + "/" +to_string(mm) + "/" +to_string(yy);
			return msg; 	
		}
			
		
};
main()
{
	//Mydate md;;
	int ddi,mmi,yyi;
	//ddi = 2;
	//mmi = 2;
	//yyi = 2021;
	//cout<<"\nEnter date,month and year\n";
	//cin>>ddi;
	//cin>>mmi;
	//cin>>yyi;
	//cout<<"\nEnter the number whose table is needed to be printed: \n";
	//cin>>num;
	//md.set_date(ddi,mmi,yyi);
	//Mydate date; 
	Mydate date; 
	cout<<date.tostring();
	Mydate date2(20,12,2020);
	cout<<endl<<date2.tostring();	
	Mydate date3 = date2;
	cout<<endl<<date3.tostring();
	
	
}

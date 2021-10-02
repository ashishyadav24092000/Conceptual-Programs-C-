#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class Divide
{
	int a,b;
	public:
	Divide& set_A(int a)
	{
		this->a=a;
		return *this;
	}
	Divide& set_B(int b)
	{
		this->b=b;
		return *this;
	}	
int get_result(){
		if (b==0)
		throw string("Number/Zero");
		else
		return(a/b);
	}
};
main()
{
	int m,n;
	cout<<"Enter any two number";
	cin>>m>>n;
	Divide divide;
	divide.set_A(m).set_B(n);
   try
   {
		int r=divide.get_result();
		cout<<"Result:"<<r;	   	
   }
	
	catch(){
		cerr<<"SOMETHING ERROR";
	}
	cout<<"\nI am here";
}


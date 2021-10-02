#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a;
	public:
	void set_A(int a){
		this->a=a;
	}	
	friend class B;	
};
class B
{
	int a;
	public:
	void set_A(int a){
		this->a=a;
	}	
	int get_Max(A AA){
		if(a>AA.a)
		return a;
		else
		return AA.a;
	}
		
};
main()
{
	int a,b;
	cout<<"Enter any two Numbers";
	cin>>a>>b;
	A aa;
	B bb;
	aa.set_A(a);
	bb.set_A(b);
	cout<<"Max"<<bb.get_Max(aa);
}

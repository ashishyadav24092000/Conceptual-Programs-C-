#include<iostream>
using namespace std;
class calculator
{
	int res;
	public:
		int sum(int , int );
		int sum(int , int, int  );
		int sum(int , int, int ,int  );
		int sum(int , int, int ,int ,int );
		
		
	
};
int calculator :: sum(int a, int b )
{
	res = a+b;
	return res;
	
}
int calculator :: sum(int a, int b, int c )
{
	res = a+b+c;
	return res;
	
	
	
}
int calculator :: sum(int a, int b, int c, int d )
{
	res = a+b+c+d;
	return res;
	
	
}
int calculator :: sum(int a, int b, int c, int d, int e )
{
	res = a+b+c+d+e;
	return res;
	
	
}
main()
{
	calculator sum;
	int a,b,c,d,e;
	cout<<"enter five numbders:"<<endl;
	cin>>a>>b>>c>>d>>e;
	cout<<"\n";
	cout<<sum.sum(a,b)<<endl;
	cout<<sum.sum(a,b,c)<<endl;
	cout<<sum.sum(a,b,c,d)<<endl;
	cout<<sum.sum(a,b,c,d,e)<<endl;
}

#include<iostream>
using namespace std;
class Print_prime
{
	int Lb,Ub;
	public:
		void set_value(int,int);
		void print_value();	
};
void Print_prime :: set_value(int l,int u)
{
	Lb = l;
	Ub = u;
}
void Print_prime :: print_value()
{	int i,j;
	for(i =Lb;i<=Ub;i++)
	{
	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;	
		}
		if(j==i)
			cout<<i<<" ";
	}
}
main()
{
	Print_prime ppm;
	int ll, uu;
	cout<<"\nEnter lower and upper limit\n";
	cin>>ll>>uu;
	ppm.set_value(ll,uu);
	ppm.print_value();
}

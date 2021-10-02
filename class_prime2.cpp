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
{	
	for(int i =Lb;i<=Ub;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c == 2)
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

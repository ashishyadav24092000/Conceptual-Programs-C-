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
	int flag=1;
	for(int i =Lb;i<=Ub;i++)
	{
		flag = 1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break; 
			}
		}
		if(flag == 1)
			cout<<i<<"  ";
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

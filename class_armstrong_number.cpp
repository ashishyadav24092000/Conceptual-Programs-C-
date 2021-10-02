#include<iostream>
#include<math.h>
using namespace std;
class Armstrong
{
	int ll,ul;
	public:
		void set_limits(int,int);
		int count_digits(int);
		int is_armstrong(int);
		void print_armstrong();	
};
inline void Armstrong :: set_limits(int l,int u)
{
	ll = l;
	ul = u;
}
int Armstrong :: count_digits(int c)
{
	int counter=0;
	while(c>0)
	{
		counter++;
		c = c/10;	
	}
	return counter;
}
int Armstrong :: is_armstrong(int nm)
{
	int sum = 0,temp = nm,b,flag=0;
	int a = count_digits(temp);
	while(temp>0)
	{
		b = temp%10;
		sum += pow(b,a);
		temp = temp/10;
	}
	if(sum == nm)
		flag =  1;
	return flag;
}
void Armstrong :: print_armstrong()
{
	for(int i=ll;i<=ul;i++)
	{
		if(is_armstrong(i))
			cout<<i<<" ";
	}
}
main()
{
	Armstrong am;
	int ub,lb;
	cout<<"\nEnter value of upper and lower bound\n";
	cin>>ub>>lb;
	am.set_limits(ub,lb);
	am.print_armstrong();
}

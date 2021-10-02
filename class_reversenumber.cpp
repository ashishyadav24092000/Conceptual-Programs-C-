#include<iostream>
#include<stdlib.h>
using namespace std;
class Reverse_num
{
	int num;
	public:
		void set_number(int);
		int reverse();	
};
void Reverse_num :: set_number(int num)
{
	this->num = num;
}
int Reverse_num :: reverse()
{
	int sum=0,temp;
	for(int i=num;i!=0;i=i/10)
	{
		temp = i%10;
		sum = sum*10 + temp;
	}
	return sum;
}
main()
{
	int number;
	cout<<"\Enter a number which you want to be reversed: ";
	cin>>number;
	Reverse_num rn;
	rn.set_number(number);
	int a = rn.reverse();
	cout<<"\nReverse of the given number "<<number<<" is "<<a;
}

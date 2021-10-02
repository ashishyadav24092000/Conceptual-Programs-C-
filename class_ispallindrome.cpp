#include<iostream>
#include<stdlib.h>
using namespace std;
class Ispallindrome
{
	int num;
	public:
		void set_number(int);
		int pallindrome_or_not();	
};
void Ispallindrome :: set_number(int num)
{
	this->num = num;
}
int Ispallindrome :: pallindrome_or_not()
{
	int sum=0,temp,flag=0;
	for(int i=num;i!=0;i=i/10)
	{
		temp = i%10;
		sum = sum*10 + temp;
	}
	if (sum == this->num)
		flag = 1;
	return flag;
}
main()
{
	int number;
	cout<<"\Enter a number which you want to be reversed: ";
	cin>>number;
	Ispallindrome pn;
	pn.set_number(number);
	int a = pn.pallindrome_or_not();
	if(a==1)
		cout<<number<<" is palllindrome number"<<endl;
	else
		cout<<number<<" is not a palllindrome number"<<endl;
}

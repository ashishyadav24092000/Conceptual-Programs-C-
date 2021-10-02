#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
	int h,m,s;
	public:
		Time& set_H(int h);
		Time& set_M(int m);
		Time& set_S(int s); 
		void showTime();
		
};
Time& Time:: set_S(int s)
{
	this->s=s;
	return *this;
}
Time& Time:: set_M(int m)
{
	this->m=m;
	return *this;
}
Time& Time:: set_H(int h)
{
	this->h=h;
	return *this;
}

void Time:: showTime()
{
	cout<<h<<":"<<m<<":"<<s<<endl;
}

main(){
	
	Time time;
	time.set_H(12).set_M(13).set_S(45);  //method chaining for this pointer(only)
	time.showTime();
	
	
}
		
		

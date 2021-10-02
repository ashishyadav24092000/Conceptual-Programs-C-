#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
	int h,m,s;
	public:
		void setTimeInSecond(int s);
		Time getTime();//Object as a function Return Type
		void showTime();
		
};
void Time:: setTimeInSecond(int s)
{
	this->s=s;
}
Time Time:: getTime()
{
	m=s/60;
	s=s%60;
	h=m/60;
	m=m%60;	
	return *this;
}
void Time:: showTime()
{
	cout<<h<<":"<<m<<":"<<s<<endl;
}

main(){
	
	Time time,r;
	time.setTimeInSecond(3600);
	time.showTime();
	r=time.getTime();
	r.showTime();
	
}
		
		

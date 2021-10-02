#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Add_time
{
	int hour,min,sec;
	public:
		Add_time& set_hour(int hour)
		{
			this->hour = hour;
			return *this;
		}
		Add_time& set_minute(int min)
		{
			this->min = min;
			return *this;
		}

		Add_time& set_second(int sec)
		{
			this->sec = sec;
			return *this;
		}
		string get_time()
		{
			string time = to_string(hour) + "-" + to_string(min) + "-" + to_string(sec) ;
			return time;
		}
		friend  Add_time add(Add_time t1,Add_time t2);
};
Add_time add(Add_time t1,Add_time t2)
{
	Add_time temp;
	temp.sec = t1.sec+t2.sec;
	temp.min = temp.sec/60 + t1.min + t2.min;
	temp.sec = temp.sec%60;
	temp.hour = temp.min/60+t1.hour+t2.hour;
	temp.min = temp.min%60;
	return temp;
}
main()
{
	Add_time t1,t2,res;
	t1.set_hour(4).set_minute(35).set_second(36);
	cout<<" time Ist: "<<t1.get_time()<<endl;
	t2.set_hour(5).set_minute(45).set_second(9);
	cout<<" time 2nd: "<<t2.get_time()<<endl;
	res = add(t1,t2);
	cout<<" 1st + 2nd ::"<<res.get_time();
}

#include<iostream>
#include<stdlib>
using namespace std;
class DST
{
	int inch, feet;
	public:
		DST& set_inch(int inch)
		{
			this->inch = inch;
		}
		DST& set_feet(int feet)
		{
			this->feet = feet;
		}
		string get_distance()
		{
			string msg;
			msg = to_string(feet) + " - " + tostring(inch) ;
			return msg;
		}
		friend DST& add_distance
}
main()
{
	
}

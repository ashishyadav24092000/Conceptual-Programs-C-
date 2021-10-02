//BINARY OPERATOR OVERLOADING WITHOUT THE HELP OF FRIEND FUNCTION
#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class DST
{
	int inch,feet;
	public:
		DST& set_inch(int inch)
		{
			this->inch=inch;
			return *this;
		}
		DST& set_feet(int feet)
		{
			this->feet=feet;
			return *this;
		}
		string get_Distance(){
			string msg= to_string(feet)+"'- "+to_string(inch)+"\"";
			return msg;
		}
	 	DST sum(DST n2) ;
};
DST DST:: sum(DST n2) 
{
	DST temp;
	temp.inch=inch+n2.inch;
	temp.feet=feet+n2.feet;
		return temp;
}
main(){
	
	DST n1,n2,s;
	n1.set_inch(12).set_feet(45);
	cout<<" Distance Ist: "<<n1.get_Distance()<<endl;
	n2.set_inch(12).set_feet(45);
	cout<<" Distance 2nd: "<<n2.get_Distance()<<endl;
		s=n1.sum(n2);
	cout<<" Ist + 2nd: "<<s.get_Distance()<<endl;
	
}



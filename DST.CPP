//OBJECT AS AN ARGUMENT AND RETURN TYPE OF THE FRIEND FUNCTION


#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class DST
{
	int inch,feet;
	public:
		DST& set_inch(int inch)    //DST& USED FOR CHAINING
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
		friend DST sum(DST A,DST B) ;     //friend function of class
};
DST sum(DST A,DST B)
{
	DST temp;
	temp.inch=A.inch+B.inch;
	temp.feet=temp.inch/12;
	temp.inch=temp.inch%12;
	temp.feet=temp.feet+A.feet +B.feet;
	return temp;
}
main(){
	
	DST n,n1,s;
	n.set_inch(12).set_feet(45);
	cout<<" Distance Ist: "<<n.get_Distance()<<endl;
	n1.set_inch(12).set_feet(45);
	cout<<" Distance 2nd: "<<n1.get_Distance()<<endl;
	s=sum(n,n1);
	cout<<" Ist + 2nd: "<<s.get_Distance()<<endl;
	
}



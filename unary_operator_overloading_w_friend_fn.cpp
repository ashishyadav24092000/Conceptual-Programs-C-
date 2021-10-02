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
	 	friend void operator-(DST& n2) ;
};
void operator-(DST& n2) 
{
	
	this->inch = -inch;
	this->feet = -feet;
}
main(){
	
	DST n1,n2,s;
	n1.set_inch(12).set_feet(45);
	cout<<" Distance Ist: "<<n1.get_Distance()<<endl;
	n2.set_inch(12).set_feet(45);
	cout<<" Distance 2nd: "<<n2.get_Distance()<<endl;
	//	n2.operator-();        or   -n2;        
	//-n2;
	operator-(n2);
	cout<<" Ist + 2nd: "<<n2.get_Distance()<<endl;
	
}



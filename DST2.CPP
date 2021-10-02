//OBJECT AS AN ARGUMENT (WITHOUT RETURN TYPE) OF THE MEMEBER FUNCTION

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
		void sum(DST n1) ;
};
void DST::sum(DST n1)
{
	
	inch=inch+n1.inch;
	feet=feet + inch/12;
	inch=inch%12;
	feet=feet+n1.feet ;
	
}
main(){
	
	DST n,n1,s;
	n.set_inch(12).set_feet(45);
	cout<<" Distance Ist: "<<n.get_Distance()<<endl;
	n1.set_inch(12).set_feet(45);
	cout<<" Distance 2nd: "<<n1.get_Distance()<<endl;
	n.sum(n1);
	cout<<" Ist + 2nd: "<<n.get_Distance()<<endl;
	
}



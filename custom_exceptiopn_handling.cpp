#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class SignException
{
	string msg;
	public:
	SignException(string msg)    //parameterised constructor
	{
		this->msg=msg;
	}		
	string what(){
		return msg;
	}
};
class SignChecker
{
	int num;
	string s_msg;
	public:
		void setValue(int num)
		{
			this->num=num;
		}
		void isSign()
		{
			if(num>0)
			throw SignException("+Ve") ;   //implicit calling to the condstructor
			else if(num<0)
			{
				SignException ex=SignException("-Ve");  //explicit calling to the constructor
				throw ex ;
			}
			else
			{
				SignException ex("Neutral");   //calling normally through object  
				throw ex ;	
			}
			
			
		}
};
main(){	
	SignChecker sign;
	sign.setValue(-89);
	try
	{
		sign.isSign();
	}catch(SignException ex)
	{
		cout<<ex.what();
	}
}


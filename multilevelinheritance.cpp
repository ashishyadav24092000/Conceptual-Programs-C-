#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int rollno;
	unsigned  long int aadharno;
	public:
		Student (string name,int rollno,unsigned long int aadharno)
		{
			this->name=name;
			this->rollno=rollno;
			this->aadharno=aadharno;
			
		}
		string getname()
		{
			return name;
		}
		
		int getrollno()
		{
			return Rollno;
		}
		
		unsigned  long int  getaadharno()
		{
			return Aadharno;
		}
};
class Exam: public Student
{
	int Phy,Che,Maths,Eng,Com;
	public:
		Exam (string name,int rollno,unsigned long int aadharno,int Phy,int Che,int Maths,int Eng,int Com ):Student ( name, rollno, aadharno)
		{
			this->Phy=Phy;
			this->Che=Che;
			this->Maths=Maths;
			this->Eng=Eng;
			this->Com=Com;
		}
		
		
		
	
		void showDetail()
		{
			cout<<"Name of the Sudent is :-"<<getname()<<endl;
			cout<<"Roll No of the Student is :"<<getrollno()<<endl;
			cout<<"Aadhar No of the Student is :"<<getaadharno()<<endl;
			cout<<"Physics marks ="<<Phy<<endl;
			cout<<"Chemistry marks ="<<Che<<endl;
			cout<<"Maths marks ="<<Maths<<endl;
			cout<<"English marks ="<<Eng<<endl;
			cout<<"Computer marks ="<<Com<<endl;
		}
};
main()
{
	
	Exam e("Praveen",100180237,87717822,90,98,92,97,100);

	e.showDetail();
	
}

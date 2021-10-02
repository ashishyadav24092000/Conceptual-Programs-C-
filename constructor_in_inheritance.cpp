#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{
	string name;
	int roll_no;
	long int aadhar_no;
	public:
		Student(string name,int roll_no,long int aadhar_no)
		{
			this->name = name;
			this->roll_no = roll_no;
			this->aadhar_no = aadhar_no;
		}
		
		string get_name()
		{
			return name;
		}
	
		int get_roll_no()
		{
			return roll_no;
		}
	
		long int get_aadhar_no()
		{
			return aadhar_no;
		}
};
class Exam : public Student
{
	protected:
		int physics,chemistry,maths,eng,cs;
	public:
		Exam (string name,int roll_no,long int aadhar_no ,int physics,int chemistry,int maths,int eng,int cs):Student(name,roll_no,aadhar_no)
		{
			this->physics = physics;
			this->chemistry = chemistry;
			this->maths = maths;
			this->eng = eng;
			this->cs = cs;
		}
		void showdetails()      
		{
		
			cout<<"Name of student is :: "<<get_name()<<endl;
			cout<<"Roll_no of student is :: "<<get_roll_no()<<endl;
			cout<<"AADHAR no. of student is :: "<<get_aadhar_no()<<endl;
			cout<<"physics marks: "<<physics<<endl;
			cout<<"chemistry marks: "<<chemistry<<endl;
			cout<<"maths marks: "<<maths<<endl;
			cout<<"english marks: "<<eng<<endl;
			cout<<"cs marks: "<<cs<<endl;
		}
};

main()
{
	//Student s1;
	Exam e1("ashish",100180113,99999999,89,78,78,89,90); //parameterised constructor calling
	
	e1.showdetails();
}
	
	

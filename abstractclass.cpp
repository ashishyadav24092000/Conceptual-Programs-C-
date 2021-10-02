/*
It enables you to provide specific implementation of the function which is 
already provided by its base class.
It is creating a new version of an old function, in the child class.
 
*/
#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	private:
	string name;
	int rollno;
	long int aadharno;
	public:
	Student& setName(string name){
		this->name=name;		
		return *this;
	}	
	Student& setRollNo(int rollno){
		this->rollno=rollno;		
		return *this;
	}	
	Student& setAdharNo(long int aadharno){
		this->aadharno=aadharno;		
		return *this;
	}
	string getName(){
		return name;	
	}	
	int getRollNo(){
		return rollno;	
	}
	long int getAdhaNO(){
		return aadharno;	
	}	
		virtual void showDetails()=0;	
			
};
class Exam:public Student
{
	int H,E,M,C,P;
	public:
		Exam& set_H(int H){
			this->H=H;			
			return *this;
		}
		Exam& set_E(int E){
			this->E=E;			
			return *this;
		}
		Exam& set_M(int M){
			this->M=M;	
			return *this;		
		}
		Exam& set_P(int P){
			this->P=P;	
			return *this;		
		}		
		Exam& set_C(int C){
			this->C=C;	
			return *this;		
		}
	/*	void showDetails(){
			
			cout<<"\n\n    Student Information "<<endl;
			cout<<"========================="<<endl;
			cout<<"\nName:"<<getName()<<endl;
			cout<<"Roll Number:"<<getRollNo()<<endl;
			cout<<"Adhar Number:"<<getAdhaNO()<<endl;
			
			cout<<"\n\n    Exam Marks "<<endl;
			cout<<"========================="<<endl;
			cout<<"Hindi:"<<H<<endl;
			cout<<"English:"<<E<<endl;
			cout<<"Maths:"<<M<<endl;
			cout<<"Physics:"<<P<<endl;
			cout<<"Chemistry:"<<C<<endl;
			
		}*/
};
main(){
	
	
	Exam ex1;
	ex1.set_H(56).set_E(78).set_M(90).set_P(67).set_C(67);
	ex1.setName("Ram").setRollNo(45).setAdharNo(45555L);
	//ex1.showDetails();
}

#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int rollno;
	unsigned long int aadharno;
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
			return rollno;
		}
		
		unsigned  long int  getaadharno()
		{
			return aadharno;
		}
};
class Exam:public Student
{
	protected:
	int Phy,Che,Maths,Eng,Com;
	public:
		Exam (string name,int rollNo,int aadharNo,int Phy,int Che,int Maths,int Eng,int Com ):Student( name, rollNo, aadharNo, Phy, Che, Maths, Eng, Com )
		{
			this->Phy=Phy;
			this->Che=Che;
			this->Maths=Maths;
			this->Eng=Eng;
			this->Com=Com;
		}
		
		
		
	
		/*void showDetail()
		{
			cout<<"Name of the Sudent is :-"<<getname()<<endl;
			cout<<"Roll No of the Student is :"<<getrollno()<<endl;
			cout<<"Aadhar No of the Student is :"<<getaadharno()<<endl;
			cout<<"Physics marks ="<<Phy<<endl;
			cout<<"Chemistry marks ="<<Che<<endl;
			cout<<"Maths marks ="<<Maths<<endl;
			cout<<"English marks ="<<Eng<<endl;
			cout<<"Computer marks ="<<Com<<endl;
		}*/
};
class Sport
{
	protected:
		int score;
		public:
			Sport(int score)
			{
				this->score=score;
				return score;
			}
}
class Result:public Exam,public Sport
{
	int total_marks;
	float perc;
	public:
		Result(string name,int rollno,unsigned long int aadharno,int Phy,int Che,int Maths,int Eng,int Com,int score ):Exam( name, rollno, aadharno, Phy, Che, Maths, Eng, Com ),Sport(score)
		{
			
		}
		int get_total()
		{
			total_marks=Phy+Che+Maths+Eng+Com;
			return total_marks;
		}
		float get_perc()
		{
			perc=(get_total()/500.00)*100;
			return perc; 
		}
		void showDetail()
		{
			cout<<"Name of the Sudent is : "<<getname()<<endl;
			cout<<"Roll No of the Student is : "<<getrollno()<<endl;
			cout<<"Aadhar No of the Student is : "<<getaadharno()<<endl;
			cout<<"Physics marks = "<<Phy<<endl;
			cout<<"Chemistry marks = "<<Che<<endl;
			cout<<"Maths marks = "<<Maths<<endl;
			cout<<"English marks = "<<Eng<<endl;
			cout<<"Computer marks = "<<Com<<endl;
			cout<<"Student Total marks = "<<get_total()<<endl;
			cout<<"Student Percentage obtained = "<<get_perc()<<endl;
			cout<<"Student score is = "<<score<<endl;
		}
		
};
main()
{
	
	//Exam e("Praveen",100180237,87717822,90,98,92,97,100);
	Result rs("Praveen",100180237,87717822,90,98,92,97,100,92);
	rs.showDetail();

	//e.showDetail();
	
}

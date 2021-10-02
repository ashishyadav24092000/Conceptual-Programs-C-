#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
class Database
{
	string q,op1,op2,op3,op4;
	int ans;
	public:
	Database(string q, string op1, string op2, string op3, string op4,int ans)
	{
		this->q=q;
		this->op1=op1;
		this->op2=op2;
		this->op3=op3;
		this->op4=op4;
		this->ans=ans;	
	}	
	friend class Quiz;      //friend function is used here to access private and protected memeber of the class
};
class Quiz
{
	int guess,total=0,i;
	string respond;
	char name[15];
	Database  base[2]={Database("Father of computer","1.Charles babbage","2.Dennis Ritchie","3.Mortin Richards","4.Ken Thompson",1),
					   Database("C+++ is Developed By","1.Bjarne stroustrup","2.Dennis Ritchie","3.Mortin Richards","4.Ken Thompson",1)
					  };
	public:
			void start_Quiz();
			void getReadyToStartQuiz();
			void Result();
};
void Quiz:: start_Quiz()
{
				cout<<"Please enter to Start..............\n\n";
				cin.get();          //to get input a single character
				cout<<"Whats your Name:";
				cin.getline(name,15);
				cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
    			cin >> respond;
    			if (respond == "Yes" || respond == "yes") {
        			cout << "\n";
        			cout << "Good luck!\n";
        			cout << "\n";
        			cout << "Press enter to continue.";
        			cin.get();
        			cin.ignore();
    			}
				else{
        			cout << "\n";
        			cout << "Goodbye!\n";
        			cin.ignore();
        			cin.get();
        			return ;
   				} 
   				getReadyToStartQuiz();
}
void Quiz::getReadyToStartQuiz()  
			{
				for(i=0;i<2;i++)
   				{
   					cout<<"Quest."<<i+1<<"#";
   					cout<<"       "<<base[i].q<<"\n";
   					cout<<base[i].op1<<"\n";
   					cout<<base[i].op2<<"\n";
   					cout<<base[i].op3<<"\n";
   					cout<<base[i].op4<<"\n";
   					cout << "What is your answer?" << "\n";
   					cin >> guess;
   					if (guess == base[i].ans) {
        				cout << "\n";
        				cout << "Correct!" << "\n";
        				total = total + 2;
        				cout << "\n";
        				cout << "Press enter to continue." << "\n";
        				cin.get();  //to get Enter as an input
        				cin.ignore();  //to clear the buffer
   					
					}else{
						cout << "\n";
        				cout << "Sorry, you're wrong..." << "\n";
        				cout << "The correct answer is " << base[i].ans << "." << "\n";
        				cout << "\n";
        				cout << "Press enter to continue." << "\n";
        				cin.get();
        				cin.ignore();
					}				
				}
				Result();    		
			}
	void Quiz:: Result(){
				cout << "Your Total Score is " << total << " out of 4!\n";
    		cout << "\n";
    		if(total>=3)
    		{
    			cout<<"You Passed";
    			cout << "\n";	
       			cin.get();
        		cin.ignore();				
			}
    		else
    		{
    			cout << "You failed... Sorry, better luck next time.\n";
       			cout << "\n";	
       			cin.get();
        		cin.ignore();
			}
		}
 
main()
{
	 Quiz quiz;
	 quiz.start_Quiz();

}



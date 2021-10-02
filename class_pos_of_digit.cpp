#include<iostream>
using namespace std;
class position_of_digit
{
	int num;
	public:
		void setnumber(int);
		void pos_of_digit();
};
inline void position_of_digit :: setnumber(int num)
{
	this->num = num;
} 
void position_of_digit :: pos_of_digit()
{
	int temp,a=0;
	string position[] = {"ones","tens","hundred","thousandth","ten thousandth","lakh","millionth","crore"};
	for(int i=this->num;i!=0;i=i/10)
	{
		temp = i%10;
		cout<<temp <<" is at "<<position[a]<<" position\n";
		a++;	
	}
}
main()
{
	position_of_digit pod;
	int number;
	cout<<"\nEnter any number: ";
	cin>>number;
	pod.setnumber(number);
	pod.pos_of_digit();

}

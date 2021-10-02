#include<iostream>
#include<vector>
//#include<unordered_set>
using namespace std;

int main()
{
	vector<int> my_vec;
	
	for(int i =0;i<5;i++)
		my_vec.push_back((i*2)+2);  //push_back(i) a modifier of vector and It push the elements into a vector from the back
	for(auto i=0;i<5;i++)
		cout<<"\nElement at "<<i+1<<" position = "<<my_vec[i]<<endl;
	
	cout<<"\nbegin() will point to the first element ---"<<*my_vec.begin();
	cout<<"\nend() will point to the theoretical value that follows the last element ---"<<*my_vec.end();  //*my_vec will point a theoretical value
	//cout<<"\nfind() will point to last element if element not found-------"<<*my_vec.find(-900);
	cout<<"\n---(end()-1)--- will point to last element ---"<<*(my_vec.end()-1);  
	cout<<"\nOUTPUT of begin() and end() :  ";
	for(auto i = my_vec.begin();i != my_vec.end();++i)
		cout<<*i<<"  ";	
		
	/*
	begin() returns an iterator to beginning while cbegin() returns a const_iterator to beginning. 
	The basic difference between these two is iterator (i.e begin() )
	lets you change the value of the object it is pointing to 
	and const_iterator will not let you change the value of the object.
	*/
	
	cout<<"\n-------------------------A SMALL POINT OF UTTERMOST  IMPORTANCE-----------------------------------\n";
	cout<<"\n\nbegin() returns an iterator to beginning while cbegin() returns a const_iterator to beginning."; 
	cout<<"\nThe basic difference between these two is iterator (i.e begin() )";
	cout<<"\nlets you change the value of the object it is pointing to"; 
	cout<<"\nand const_iterator will not let you change the value of the object.\n\n";
	
	
	
	cout<<"\n\n\ncbegin()---{i.e. constant iterator} will point to the first element                      ---        "<<*my_vec.cbegin();
	cout<<"\ncend()----{i.e. constant iterator} will point to the theoretical value that follows the last element ---"<<*my_vec.cend();  //*my_vec will point a theoretical value
	cout<<"\n---(cend()-1)--- will point to last element ---                                                         "<<*(my_vec.cend()-1);  
	
	cout<<"\nOUTPUT of rbegin() and rend() :  ";
	cout<<endl;
	for(auto i = my_vec.cbegin();i != my_vec.cend();++i)
		cout<<*i<<"  ";	

	
	cout<<"\n\n\nrbegin()---{i.e. reverse iterator} will point to the first element from last---                                                         "<<*my_vec.rbegin();
	cout<<"\nrend()----{i.e. reverse iterator} will point to the theoretical value that follows the last element from reverse i.e. my_vec[-1] ---        "<<*my_vec.rend();  //*my_vec will point a theoretical value
	cout<<"\n---(rend()-1)--- will point to last element from reverseor start ---                                                                        "<<*(my_vec.rend()-1);  
	cout<<"\nOUTPUT of rbegin() and rend() :  ";
	for(auto i = my_vec.rbegin();i != my_vec.rend();++i)
		cout<<*i<<"  ";	
		
	
	cout<<"\n\n\ncrbegin()---{i.e. constant reverse iterator} will point to the first element from last---                                                         "<<*my_vec.rbegin();
	cout<<"\ncrend()----{i.e. constant reverse iterator} will point to the theoretical value that follows the last element from reverse i.e. my_vec[-1] ---        "<<*my_vec.rend();  //*my_vec will point a theoretical value
	cout<<"\n---(crend()-1)--- will point to last element from reverseor start ---                                                                        "<<*(my_vec.rend()-1);  
	cout<<"\nOUTPUT of crbegin() and crend() :  ";
	for(auto i = my_vec.crbegin();i != my_vec.crend();++i)
		cout<<*i<<"  ";	
	return 0;
}

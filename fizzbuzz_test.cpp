#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
    vector<string> temp;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
            temp.push_back("FizzBuzz");
        else if(i%3 == 0)
            temp.push_back("Fizz");
        else if(i%5 == 0)
            temp.push_back("Buzz");
        else
            temp.push_back(to_string(i));
    }
    
    return temp;    
}

int main()
{
	int num = 15;
	vector<string> ans;
	//cout<<fizzbuzz(num);
	ans = fizzbuzz(num);
	for(string stri : ans)
		cout<<stri<<", ";
	return 0;
}

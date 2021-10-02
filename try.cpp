#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
main()
{
	string s = "home";
	int val = s[0];
	int val1 = s[1];
	int val2 = s[2];
	int val3 = s[3];
	
	cout<<val<<endl;
	cout<<val1<<endl;
	cout<<val2<<endl;
	cout<<val3<<endl;
	vector<bool> char_set(128);
	cout<<char_set[0]<<" "<<char_set[1]<<" "<<char_set[2];
}

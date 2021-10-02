#include<iostream>
#include<vector>
#include<algorithm>

//O(NLOGN) IS THE TIME CMPLEXITY AND O(N) IS THE SPACE COMPLEXITY

using namespace std;
vector<int> subarraySort_one(vector<int> arr)
{
	int n = arr.size();
	vector<int> b(arr);  //making a copy of array
	sort(arr.begin(),arr.end());
	
	int i=0,j=n-1;
	while(i<n and arr[i]==b[i]){
		i++;
	}
	while(j>=0 and arr[j]==b[j]){
		j--;
	}
	
	if(i == arr.size()){
		return{-1,-1};
	}
	
	return{i,j};
}


int main()
{
	vector<int> a{1,2,3,4,5,7,8,6,9,10,11};
	vector<int> answer = subarraySort_one(a);
	cout<<answer[0]<<" "<<answer[1]<<endl;
	return 0;
}

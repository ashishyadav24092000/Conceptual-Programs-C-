#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

// OVERALL TIME COMPLEXITY = O(N)

int longestBand(vector<int> arr)
{
	int n = arr.size();
	unordered_set<int> s;
	
	//place all elements inside the set
	for(auto x : arr){
		s.insert(x);
	} 
	int band_length = 1;
	
	//iterate over vector arr
	for(auto element : s){
		int parent = element-1;
		
		// form the band or the chain 
		if(s.find(parent) == s.end()){    //i..e. parent element not present
			int next_no = element+1;
			int count =1;
			
			while(s.find(next_no) != s.end()){
				next_no++;
				count++;
			}
			
			if(band_length < count){
			band_length = count;
			}
		}
	}
	return band_length;
} 


int main()
{
	vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
	cout<<longestBand(arr)<<endl;
	return 0;
}

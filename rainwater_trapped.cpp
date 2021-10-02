#include<iostream>
#include<vector>
using namespace std;

int trappedWater(vector<int> arr){
	
	int size = arr.size();
	
	//corner_cases for bars
	if(size <= 2){
		return 0;
	}
	
	//calculate left and right maximums at each position
	vector<int> left(size,0),right(size,0);
	left[0] = arr[0];
	right[size-1] = arr[size-1];
	for(int i=1;i<size;i++){
		left[i] = max(left[i-1],arr[i]);
		right[size-i-1] = max(right[size-i],arr[size-i-1]);
	}
	
	int water_unit = 0;
	for(int i=0;i<size;i++){
		water_unit += min(left[i],right[i])-arr[i];
	}
	
	return water_unit;
}

int main()
{
	vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<trappedWater(heights)<<endl;
	
	return 0;
}

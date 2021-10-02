#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

//TIME COMPLEXITY O(N)

vector<int> pair_sum(vector<int> arr,int sum)
{
	unordered_set<int> set1;
	vector<int> result;
	
	for(int i=0;i<arr.size();i++)
	{
		int x = sum - arr[i];
		if(set1.find(x) !=  set1.end())  //The unordered_set::find() function is a built-in function in C++ STL which is used to search for an element in the container. It returns an iterator to the element, if found else, it returns an iterator pointing to unordered_set::end()
		{
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}
		
		//insert the current item into set
		set1.insert(arr[i]);
		
	}
}

int main()
{
	vector<int> array{10,5,2,3,-6,9,11};
	int target_sum =4;
	
	auto p = pair_sum(array,target_sum);
	if(p.size() == 0)
		cout<<"\nNo such pair....";
	else
		cout<<"\n"<<p[0]<<" "<<p[1];
	return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//COMPLEXITY = O(N^2)

vector<vector<int>> triplet(vector<int> arr,int target_sum)
{
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> result;
	
	for(int i=0;i<=n-3;i++)
	{
		int j = i+1;
		int k = n-1;
		
		while(j<k)
		{
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];
			
			if(current_sum == target_sum)
			{
				result.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			
			else if(current_sum > target_sum)
			{
				k--;
			}
			
			else
			{
				j++;
			}
		}
	}
	return result;
}

int main()
{
	vector<int> arr{1,2,3,4,5,6,7,8,9,15};
	int ts = 18;
	
	auto res = triplet(arr,ts);
	
	for(auto vec : res)
	{
		for(auto num : vec)
		{
			cout<<num<<",";
		}
		cout<<endl;
	}
	
	
	return 0;
}


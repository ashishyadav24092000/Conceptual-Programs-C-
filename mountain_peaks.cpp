#include<iostream>
#include<vector>
using namespace std;

int highest_peak_length(vector<int> arr)
{
	int size = arr.size();
	int largest = 0; //if array is constantly increasing or decreasing
	
	for(int i=1;i<=size-2;)
	{
		if(arr[i]>arr[i-1] and arr[i]>arr[i+1])  //peak present condition
		{
			int count = 1;
			int j = i;        //variable to count previous lengths 
			
			//count backward length
			while(j>=1 and arr[j]>arr[j-1])
			{
				count++;
				j--;
			}
			
			//count forward length
			while(i<=size-2 and arr[i]<arr[i+1])
			{
				count++;
				i++;
			}	
			largest = max(largest,count);
		}
		
		else
		{
			i++;
		}
	}
	return largest;
}

int main()
{
	vector<int> a{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	
	int res = highest_peak_length(a);
	cout<<res<<endl;
	return 0;
}

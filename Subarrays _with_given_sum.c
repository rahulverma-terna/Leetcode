#include<bits/stdc++.h>
using namespace std;
void subArraySum(int arr[], int n, int sum)
{
	unordered_map<int, int> map; 
	int curr_sum = 0;
	int count=0; unordered_map<int,int>::iterator x;
    for (int i = 0; i < n; i++)
	{
		curr_sum = curr_sum + arr[i];
    	if (curr_sum == sum)
		{
			count++;
		}
		x=map.find(curr_sum-sum);
		if(x!=map.end())
		count+=x->second;
		map[curr_sum]++;
	}
	cout <<count<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    subArraySum(arr, n, sum);
	}
	return 0;
}

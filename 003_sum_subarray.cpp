#include<bits/stdc++.h>
#include<vector>
using namespace std;
int largestSumSubarray(vector<int> v)
{
	int max_so_far=INT_MIN;
	int max_ending_here=0;
	for(int i=0;i<v.size();i++)
	{
		max_ending_here+=v[i];
		if(max_so_far<max_ending_here)
		{
			max_so_far=max_ending_here;
		}
		if(max_ending_here<0)
		{
			max_ending_here=0;
		}
	}
	return max_so_far;
}
int main()
{
	vector<int> v;
	int T,n,q,l,r,a;
	cin>>T;
	while(T--)
	{
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		cout<<largestSumSubarray(v);
	}
	
}
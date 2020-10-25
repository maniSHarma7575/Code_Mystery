#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> largestSumSubarray(vector<int> v,vector<int> u)
{
	vector<int> res;
	int i=0,j=0;
	while(i<v.size() && j<u.size())
	{
		if(v[i]<u[j])
		{
			res.push_back(v[i]);
			i++;
		}
		else
		{
			res.push_back(u[j]);
			j++;
		}
	}
	while(i<v.size())
	{
		res.push_back(v[i]);
		i++;
	}
	while(j<u.size())
	{
		res.push_back(u[j]);
		j++;
	}
	return res;
}
int main()
{
	vector<int> v;
	vector<int> u;
	int T,n,m,q,l,r,a;
	cin>>T;
	while(T--)
	{
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			u.push_back(a);
		}
		vector<int> result=largestSumSubarray(v,u);
		for(auto it=result.begin();it!=result.end();it++)
		{
			cout<<*it<<" ";
		}
	}
	
}
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int equilibriumIndex(vector<int> v)
{
	int totalSum=0,leftSum=0;
	for(int i=0;i<v.size();i++)
	{
		totalSum+=v[i];
	}
	for(int i=0;i<v.size();i++)
	{
		totalSum-=v[i];
		if(leftSum==totalSum)
		return i;
		leftSum+=v[i];
	}
	return -1;
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
		cout<<equilibriumIndex(v);
	}
	
}
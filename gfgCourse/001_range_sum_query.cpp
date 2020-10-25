#include<bits/stdc++.h>
#include<vector>
using namespace std;
int showRangeSum(vector<int> v,int l,int r)
{
	if(l==0)return v[r];
	return v[r]-v[l-1];
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
		for(int i=1;i<n;i++)
		{
			v[i]=v[i]+v[i-1];
		}
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>l>>r;
			cout<<showRangeSum(v,l,r)<<endl;
		}
	}
	
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,a;
	cin>>n;
	vector<int> v;
	int dp[n];
	dp[0]=1;
	cin>>a;
	v.push_back(a);
	for(int i=1;i<n;i++){
		cin>>a;
		v.push_back(a);
		if(v[i-1]<v[i]){
			dp[i]=dp[i-1]+1;
		}
		else{
			dp[i]=1;
		}
	}
	int maxE=INT_MIN;
	for(int i=0;i<n;i++){
		maxE=max(dp[i],maxE);
	}
	cout<<maxE;
	return 0;
}
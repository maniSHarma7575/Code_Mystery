#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d;
	string s;
	cin>>n;
	cin>>d;
	cin>>s;
	vector<int> dp(n,INT_MAX);
	dp[0]=0;
	for(int i=1;i<=d;i++){
		if(s[i]=='1'){
			dp[i]=1;
		}else{
			dp[i]=INT_MAX;
		}
	}
	for(int i=d;i<n;i++){
		if(s[i]=='0'){
		dp[i]=INT_MAX;	
		}
		else{
		for(int j=1;j<=d;j++){
			if(s[i-j]!='0' && dp[i-j]!=INT_MAX){
				dp[i]=min(dp[i],dp[i-j]+1);
			}
		}
		}
	}
	if(dp[n-1]==INT_MAX){
		cout<<"-1";
	}else{
	cout<<dp[n-1];
	}
	cout<<endl;
	return 0;
}
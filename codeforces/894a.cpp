#include <iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int n=str.length();
	int dp[n];
	if(str[0]=='Q')dp[0]=1;
	for(int i=1;i<n;i++){
		if(str[i]=='Q'){
			dp[i]=dp[i-1]+1;
		}
		else{
			dp[i]=dp[i-1];
		}
	}
	int count=0;
	for(int i=1;i<n-1;i++){
		if(str[i]=='A'){
			count+=dp[i]*(dp[n-1]-dp[i]);
		}
	}
	cout<<count;
	return 0;
}
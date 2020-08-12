#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n,t,c;
	cin>>n>>t>>c;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	bool flag=true;
	int count=0;
	for(int i=0;i<=n-c;i++){
		flag=true;
		for(int j=i;j<=i+(c-1);j++){
			if(v[j]>t){
				flag=false;
			}
		}
		if(flag){
			count++;
		}
	}
	cout<<count;
	return 0;
}
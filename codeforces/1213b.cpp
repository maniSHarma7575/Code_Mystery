#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	vector<int> v(150001);
	int n,count;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		count=1;
		int minEle=v[n-1];
		for(int i=n-2;i>=0;i--){
			if(v[i]<=minEle){
				count++;
				minEle=v[i];
			}
		}
		cout<<n-count<<endl;
	}
	return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	vector<int> v;
	cin>>n>>k;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	int page=1;
	int s=0;
	for(int i=0;i<n;i++){
		int j=0;
		while((j+1)<=v[i]){
			int temp=(j+k)<=v[i]?(j+k):v[i];
			if((j+1)<=page && page<=temp){
				s++;
			}
			j+=k;
			page++;
		}
	}
	cout<<s;
	return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t--){
	    cin>>n;
	    int sumA=0,sumB=0;
	    vector<int> c;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        c.push_back(a);
	    }
	    sort(c.begin(),c.end(),greater<int>());
	    for(int i=0;i<n;i++){
	        if(sumA<=sumB){
	            sumA+=c[i];
	        }
	        else{
	            sumB+=c[i];
	        }
	    }
	    int result=max(sumA,sumB);
	    cout<<result<<endl;
	}
	return 0;
}

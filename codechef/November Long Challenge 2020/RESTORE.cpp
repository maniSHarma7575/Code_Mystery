#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a;
	cin>>t;
	while(t--){
	    vector<int> B;
	    cin>>n;
	    for(int i=0;i<n;i++){
	       cin>>a;
	       B.push_back((n+1)-a);
	    }
	    for(auto &it:B){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

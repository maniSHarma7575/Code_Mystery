#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	int index[101];
	int arr[101];
	cin>>t;
	while(t--){
	    vector<int> s;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>index[i];
	        if(index[i]==0){
	            s.push_back(arr[i]);
	        }
	    }
	    sort(s.begin(),s.end());
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(index[i]==1){
	            cout<<arr[i]<<" ";
	        }
	        else{
	            cout<<s[j]<<" ";
	            j++;
	        }
	    }
	    cout<<endl;
	    
	}
	
	return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli up(vector<lli> v,lli p,lli x){
    lli start=0,c=0;
	while(start<p){
	 if(v[start]>x){
	      c++;
	  }
	   start++;
	}
	return c;
}
lli down(vector<lli> v,lli p,lli x,lli n){
    int start=n,count=0;
	while(start>=p){
	    if(v[start-1]<x){
	       count++;
	    }
	    start--;
	}
	 return count;
}
int main() {
	// your code goes here
	lli t,n,x,p,k,a;
	cin>>t;
	while(t--){
	    vector<lli> v;
	    cin>>n>>x>>p>>k;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        v.push_back(a);
	    }
	    sort(v.begin(),v.end());
	    if(v[p-1]==x){
	        cout<<"0\n";
	    }
	    else{
	        if(k>p){
	            if(v[p-1]<x){
	                cout<<"-1\n";
	            }else{
	                cout<<up(v,p,x)<<"\n";
	            }
	        }else if(k==p){
	            if(v[p-1]>x){
	                cout<<up(v,p,x)<<"\n";
	            }else{
	                cout<<down(v,p,x,n)<<"\n";
	            }
	            
	        }else{
	            if(v[p-1]>x){
	                cout<<"-1\n";
	            }
	            else{
	                cout<<down(v,p,x,n)<<"\n";
	            }
	        }
	    }
	   
	}
	return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo (int x) 
{ 
    return x && (!(x&(x-1))); 
} 
int main() {
    int t,n,looper,temp,d,length;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n==1){
	        cout<<"1"<<endl;
	        continue;
	    }
	    if(isPowerOfTwo(n)){
	        cout<<"-1"<<endl;
	    }
	    else{
	        vector<vector<int>> v;
	        looper=1;
	        d=2;
	        while(looper<=n){
	            vector<int> p;
	            temp=looper;
	            while(temp<=n){
	                if(temp!=(looper+d)){
	                    p.push_back(temp);
	                }
	                temp+=d;
	            }
	            if(looper+d<=n){
	                p.push_back(looper+d);
	            }
	            v.push_back(p);
	            looper+=looper;
	            d+=d;
	        }
	        length=v.size();
	        if(v[length-1].size()==1){
	            cout<<v[length-1][0]<<" ";
	            int count=0;
	            bool flag=false;
	            int a=v[length-1][0]+1;
	            cout<<v[length-1][0]+1<<" ";
	            for(int i=0;i<length-1;i++){
	                for(auto it:v[i]){
	                    if(it!=a){
	                        cout<<it<<" ";
	                    }
	            }
	        }
	        }
	        else{
	            for(int i=0;i<length;i++){
	                for(auto it:v[i]){
	                   cout<<it<<" ";
	                }
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
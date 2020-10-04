#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,start;
	bool flag;
	int n,k,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>k>>x>>y;
	    flag=false;
	    if(x==y){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    start=(x+k)%n;
	    while(start!=x){
	        if(start==y){
	            flag=true;
	        }
	        start=(start+k)%n;
	    }
	    if(flag){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,k,a;
	bool flag=false;
	cin>>t;
	long long int  carry=0;
	long long int index=-1;
	while(t--){
	    cin>>n>>k;
	    carry=0;
	    flag=false;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        carry=a+carry;
	        if(!flag && carry<k){
	            flag=true;
	            index=i+1;
	        }
	        else{
	            carry=carry-k;
	        }
	    }
	    if(flag==true){
	        cout<<index;
	    }else{
	        cout<<(n+(carry/k)+1);
	    }
	    cout<<endl;
	}
	return 0;
}

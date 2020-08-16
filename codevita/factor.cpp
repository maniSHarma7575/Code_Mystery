//Solution Coded by Manish Sharma
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string  calculateString(int zero,int one,int two){
		if(zero==0 && one!=0 && two!=0){
			return "No";
		}
		else if(zero==0 && one!=0 && two==0){
			return "Yes";
		}
		else if(zero==0 && one==0 && two!=0){
			return "Yes";
		}
		else if(zero<=(two+one+1)){
			return "Yes";
		}
		else{
			return "No";
		}
}
void printRest(){
	
}
int main() {
	// your code goes here
	int t,n,zero,one,two;
	vector<int> v(1000005);
	cin>>t;
	while(t--){
		zero=0;
		one=0;
		two=0;
		cin>>n;
		
		//Calculate the frequency of each element zero,one,two
		
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]%3==0){
				zero++;
			}
			if(v[i]%3==1){
				one++;
			}
			if(v[i]%3==2){
				two++;
			}
		}
		cout<<calculateString(zero,one,two);
		cout<<endl;
	}
	return 0;
}
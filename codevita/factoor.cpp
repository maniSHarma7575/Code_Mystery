#include <iostream>
using namespace std;
int main() {
	int t;
    
	cin>>t;
	while(t--){
		int z=0;
		int o=0;
		int t=0;
        int n;
		cin>>n;

		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%3==0){
				z++;
			}
			if(arr[i]%3==1){
				o++;
			}
			if(arr[i]%3==2){
				t++;
			}
		}
		if(z==0 && o!=0 && t!=0){
			cout<<"No";
		}
		else if(z==0 && o!=0 && t==0){
			cout<< "Yes";
		}
		else if(z==0 && o==0 && t!=0){
			cout<<"Yes";
		}
		else if(z<=(t+o+1)){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}
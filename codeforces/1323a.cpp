#include <iostream>
using namespace std;

int main() {
	int t,n;
	int arr[101];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n==1){
			if(arr[0]%2==0){
				cout<<"1"<<endl;
				cout<<"1";
			}
			else cout<<"-1";
		}
		else{
			if(arr[0]%2==0){
				cout<<"1"<<endl;
				cout<<"1";
			}else{
				if(arr[1]%2==0){
					cout<<"1"<<endl;
					cout<<"2";
				}else{
					cout<<"2"<<endl;
					cout<<"1"<<" "<<2;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
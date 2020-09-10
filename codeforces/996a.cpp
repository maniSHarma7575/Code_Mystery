#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int len=0;
	int arr[]={1,5,10,20,100};
	for(int i=4;i>=0;i--){
		if(n==0)break;
		len+=n/arr[i];
		n=n%arr[i];
	}
	cout<<len;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n==1){
	cout<<1;
	return 0;}
	int sum=1;
	for(int i=2;i<=n;i++){
		sum+=4*(i-1);
	}
	cout<<sum;
	return 0;
}
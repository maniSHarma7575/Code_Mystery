#include <iostream>
using namespace std;

int main() {
	long long int t,x,y,k,totalStick,totaloperation,i;
	cin>>t;
	while(t--){
		cin>>x>>y>>k;
		totalStick=k*y+k;
		totaloperation=k;
		i=1;
		totaloperation+=(totalStick-1)%(x-1)!=0?((totalStick-1)/(x-1))+1:(totalStick-1)/(x-1);
		cout<<totaloperation<<endl;
	}
	return 0;
}
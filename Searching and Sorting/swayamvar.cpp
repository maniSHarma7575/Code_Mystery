#include <iostream>
using namespace std;

int main() {
	long long int n,result=0;
	string bride,groom;
	cin>>n;
	cin>>bride;
	cin>>groom;
	int mgroom=0,rgroom=0;
	for(int i=0;i<n;i++){
		if(groom[i]=='r'){
			rgroom++;
		}
		else
		{
			mgroom++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(bride[i]=='r'){
			if(rgroom>0)
			{
				rgroom--;
			}
			else
			{
				result=n-i;
				break;
			}
		}
		else{
			if(mgroom>0)
			{
				mgroom--;
			}
			else
			{
				result=n-i;	
				break;
			}
		}
	}
	cout<<result;
	return 0;
}
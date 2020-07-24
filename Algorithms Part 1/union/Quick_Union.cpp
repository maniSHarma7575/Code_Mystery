#include <iostream>
using namespace std;
class QuickUnionUF{
	private:
	int id[10001];
	int len;
	public:
	QuickUnionUF(int n){
		len=n;
	for(int i=0;i<len;i++){
		id[i]=i;
	}
	}
	
	private:
	int root(int i){
		while(i!=id[i])i=id[i];
		return i;
	}
	
	public:
	bool connected(int p,int q){
		return root(p)==root(q);
	}
	public:
	void unionElements(int p,int q){
		int i=root(p);
		int j=root(q);
		id[i]=j;
		for(int i=0;i<len;i++){
			cout<<id[i]<<" ";
		}
		cout<<endl;
	}
};
int main() {
	QuickUnionUF conn(10);
	cout<<conn.connected(2,3)<<endl;
	conn.unionElements(2,3);
	conn.unionElements(4,3);
	conn.unionElements(6,7);
	conn.unionElements(6,4);
	cout<<conn.connected(2,3)<<endl;
	cout<<conn.connected(2,6)<<endl;
	conn.unionElements(6,1);
	conn.unionElements(5,8);
	conn.unionElements(8,9);
	conn.unionElements(4,9);
	cout<<conn.connected(3,5)<<endl;
	
	return 0;
}
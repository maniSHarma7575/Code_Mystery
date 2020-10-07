#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int maximumTree(vector<vector<long long int> > dp,long long int n){
    vector<long long int> parent(n);
	unordered_map<int,int> key;
	unordered_map<int,bool> visited;
	for(long int i=0;i<n;i++){
		key[i]=-1;
		visited[i]=false;
	}
	key[0]=0;
	parent[0]=-1;
	int maxE=key[0];
	for(long count=0;count<n-1;count++){
		long u=maxE;
		visited[u]=true;
		long max=-1;
		for(long j=0;j<n;j++){
			if(dp[u][j]!=0 &&visited[j]==false && dp[u][j]>key[j]){
				parent[j]=u;
				key[j]=dp[u][j];
			}
			if(visited[j]==false && key[j]>max){
			max=key[j];
			maxE=j;
		    }
		}
	}
	long long int sum=0;
	for(long int i=1;i<n;i++){
		sum+=dp[parent[i]][i];
	}
	return sum;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int d;
	long long int n,a,total;
	cin>>n>>d;
	vector<vector<long long int>> points;
	for(int i=0;i<n;i++){
	    vector<long long int> point;
	    for(int j=0;j<d;j++){
	        cin>>a;
	        point.push_back(a);
	    }
	    points.push_back(point);
	}
	vector <vector<long long int> > dp(n, vector <long long int>(n,0));
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long int weight =0;
			for(int k=0;k<d;k++){
			    weight+=abs(points[i][k]-points[j][k]);
			}
			dp[i][j]=weight;
			dp[j][i]=weight;
		}
	}
	cout<<maximumTree(dp,n);
	return 0;
}

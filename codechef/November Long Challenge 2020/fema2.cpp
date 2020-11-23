#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        vector<int> st(n,0);
        if(s[0]==':'){
            st[0]=1;
        }
        for(int i=1;i<n;i++){
            if(s[i]==':')st[i]=st[i-1]+1;
            else{
                st[i]=st[i-1];
            }
        }
        int count=0;
        queue<int> fe;
        queue<int> ma;
        for(int i=0;i<n;i++){
            switch(s[i]){
                case 'I':
                fe.push(i);
                break;
                case 'M':
                ma.push(i);
                break;
                case 'X':
                int l,r,q;
                int p=k+1;
                while(!ma.empty() && !fe.empty()){
                    l=min(ma.front(),fe.front());
                    r=max(ma.front(),fe.front());
                int sheet=0;
                if(l==0){
                    sheet=st[r];
                }else{
                    sheet=st[r]-st[l-1];
                }
                if((p-abs(l-r)-sheet)>0){
                    count++;
                    fe.pop();
                    ma.pop();
                }
                else if(ma.front()<fe.front()){
                    ma.pop();
                }else{
                    fe.pop();
                }
                }
                while(!ma.empty())ma.pop();
                while(!fe.empty())fe.pop();
            }
            if(i==n-1 && s[i]!='X'){
             int l,r,q;
                int p=k+1;
                while(!ma.empty() && !fe.empty()){
                    l=min(ma.front(),fe.front());
                    r=max(ma.front(),fe.front());
                int sheet=0;
                if(l==0){
                    sheet=st[r];
                }else{
                    sheet=st[r]-st[l-1];
                }
                if((p-abs(l-r)-sheet)>0){
                    count++;
                    fe.pop();
                    ma.pop();
                }
                else if(ma.front()<fe.front()){
                    ma.pop();
                }else{
                    fe.pop();
                }
                }
                while(!ma.empty())ma.pop();
                while(!fe.empty())fe.pop();   
            }
        }
        cout<<count<<endl;
    }
}
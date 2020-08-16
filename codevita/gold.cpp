//copyright Manish Sharma

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solution(){
	// Taking input from the console
	
	long long int g,b,h,m=1000000007;
	long long int volume=0;
	long long int result=0,answer=0;
	long long int top;
	stack<long long int> st;
	cin>>g;
	cin>>b>>h;
	vector<int> v(g);
	//Calculating the volume 
	for(int i=0;i<g;i++){
		cin>>v[i];
		volume+=v[i];
	}
	// Using stack to determine the solution
	for(int i=0;i<g;i++){

       while(st.empty()==false and v[i]<=v[st.top()]){

           top=st.top();

           st.pop();

           result= v[top]* (st.empty()?i:(i-st.top()-1));

           answer=max(answer%m,result);

       }

       st.push(i);

   }
   //Checking the stack for remainig elements
    while(st.empty()==false){

       top=st.top();

       st.pop();

       result=v[top]*(st.empty()? g:(g-st.top()-1));

       answer=max(answer%m,result);

   }
   cout<<((volume%m-answer%m)%m*b%m*h%m)%m;
	
}

int main()

{
	//multiple test case file handling in solution
	solution();
}
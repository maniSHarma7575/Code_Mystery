#include <bits/stdc++.h>
using namespace std;
string outcome(int countingA,int countingB){
	if(countingA>countingB)
    {
        return "A";
    }
    else if(countingB>countingA)
    {
        return "B";
    }
    else
    {
        return "Coalition government";
    }
}
string solution(int number,string str){
    
    cin>>number>>str;
    vector<pair<int,int>> result(number,{INT_MAX,INT_MAX});
    for(int i=0;i<number;i++)
    {
        if(str[i]=='A')
        {
            int t=0;  
            int jagah=i-1;
            if(jagah>=0)
            {
                for(jagah;jagah>=0;jagah--)
                {
                    if(str[jagah]=='-')
                    {
                        result[jagah].first=min(result[jagah].first,t);
                    }
                    else if(str[jagah]=='A'||str[jagah]=='B')
                    {
                        break;
                    }
                    ++t;
                }
            }
        }
        else if(str[i]=='B')
        {
            int t=0;
            int jagah=i+1;
            if(jagah<number)
            {
                for(jagah;jagah<number;jagah++)
                {
                    if(str[jagah]=='-')
                    {
                        result[jagah].second = min(result[jagah].second,t);
                    }
                    else if(str[jagah]=='B'||str[jagah]=='A')
                    {
                        break;
                    }
                    t++;
                }
            }
        }
    }
    int countingA=0;
    int countingB=0;
    for(int i=0;i<number;i++)
    {
        int x = result[i].first;
        int y = result[i].second;
        if(str[i]=='A')
        {
            countingA++;
        }
        else if(str[i]=='B')
        {
            countingB++;
        }
        if(str[i]=='-')
        {
            if(x>y)
            {
                countingB++;
            }
            else if(x<y)
            {
                countingA++;
            }
        }
    }
    return outcome(countingA,countingB);
}
int main() {
    //Problem to find the participant who win the election
    
    int number;
    string election;
    cin>>number;
    cin>>election;
    
    //Taking Input From the console passing to function
    cout<<solution(number,election);
}
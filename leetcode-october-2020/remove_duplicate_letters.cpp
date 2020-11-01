class Solution {
public:
    string removeDuplicateLetters(string s) {
       int lastIndex[26];
        bool seen[26];
        memset(seen,false,sizeof(seen));
        for(int i=0;i<s.length();i++){
            lastIndex[s[i]-97]=i;
        }
        stack<char> track;
        track.push(s[0]);
        seen[s[0]-97]=true;
        for(int i=1;i<s.length();i++){
            if(!seen[s[i]-97]){
                if(track.top()>s[i] && lastIndex[track.top()-97]>i){
                    while(!track.empty() && track.top()>s[i] && lastIndex[track.top()-97]>i){
                        seen[track.top()-97]=false;
                        track.pop();
                    }
                    track.push(s[i]);
                    seen[s[i]-97]=true;
                }else{
                    track.push(s[i]);
                    seen[s[i]-97]=true;
                }
            }
        }
        string result;
        while(!track.empty()){
            result+=track.top();
            track.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.length();
        if(n<=10){
            return {};
        }
        unordered_map<string,int> mp;
         vector<string> result;
        for(int i=0;i<n-9;i++){
            if(mp.find(s.substr(i,10))==mp.end()){
                mp[s.substr(i,10)]=1;
            }else{
                 mp[s.substr(i,10)]++;   
            }
            if(mp.find(s.substr(i,10))!=mp.end() && mp[s.substr(i,10)]==2){
                result.push_back(s.substr(i,10));
            }
            
        }
        return result;
    }
};
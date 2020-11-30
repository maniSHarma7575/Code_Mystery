class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> s;
        unordered_map<int,int> mp;
        for(auto &it:nums){
            s.insert(it);
            if(mp.find(it)==mp.end()){
                mp[it]=1;
            }else{
                mp[it]++;
            }
        }
        int count=0;
        for(auto &it:s){
            if(k==0){
                if(mp[it]>1){
                    count++;
                }
                continue;
            }
            if(s.find(k+it)!=s.end()){
                count++;
            }
        }
        return count;
    }
};
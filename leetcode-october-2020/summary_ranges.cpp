class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            vector<string> result;
            return result;
        }
        vector<string> result;
        for(int i=0;i<n;i++){
            int start=nums[i];
            int j=i;
            while(i<n-1 && nums[i+1]==1+nums[i]){
                i++;
            }
            if(j!=i){
                string res=to_string(start)+"->"+to_string(nums[i]);
                result.push_back(res);
            }else{
                string res=to_string(start)+"";
                result.push_back(res);
            }
        }
        return result;
    }
};
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> minA;
        minA.push_back(nums[0]);
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            minA.push_back(min(nums[i],minA[i-1]));
        }
        stack<int> s;
        for(int j=n-1;j>=0;j--){
            if(nums[j]>minA[j]){
                while(!s.empty() && s.top()<=minA[j]){
                    s.pop();
                }
                if(!s.empty() && s.top()<nums[j]){
                    return true;
                }
             s.push(nums[j]);
            }
        }
        return false;
    }
};
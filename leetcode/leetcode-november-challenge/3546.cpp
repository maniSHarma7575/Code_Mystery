class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        deque<int> qi(k);
        int i;
        for(i=0;i<k;i++){
            while(!qi.empty() && nums[i]>=nums[qi.back()]){
                qi.pop_back();
            }
            qi.push_back(i);
        }
        for(;i<n;i++){
            result.push_back(nums[qi.front()]);
            while(!qi.empty() && qi.front()<=i-k)qi.pop_front();
            while(!qi.empty() && nums[i]>=nums[qi.back()]){
                qi.pop_back();
            }
            qi.push_back(i);
        }
        result.push_back(nums[qi.front()]);
        return result;
    }
};
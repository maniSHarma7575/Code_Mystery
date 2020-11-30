class Solution {
public:
    bool helper(vector<int> &nums, int s, int e, int target){
        if(s>e){
            return false;
        }
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return true;
        }
        bool v=false;
        bool x=false;
        bool y=false;
        bool z=false;
        if(nums[mid]<=nums[e]){
            if(nums[mid]<=target && target<=nums[e]){
                v=helper(nums,mid+1,e,target);
            }
            else{
                x=helper(nums,s,mid-1,target);
            }
        }
        if(nums[s]<=nums[mid]){
            if(nums[s]<=target && target<=nums[mid]){
                y=helper(nums,s,mid-1,target);
            }else{
                z=helper(nums,mid+1,e,target);
            }
        }
        return v or x or y or z;
    }
    bool search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return false;
        }
        return helper(nums,0,nums.size(),target);
    }
};
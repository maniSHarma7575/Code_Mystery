class Solution {
public:
    int robbery(vector<int>& nums,int start,int end){
        int prevTwo=0,prevOne=0,maxE=0;
        for(int i=start;i<end;i++){
            maxE=max(prevTwo+nums[i],prevOne);
            prevTwo=prevOne;
            prevOne=maxE;
        }
        return maxE;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int ans1=robbery(nums,0,n-1);
        int ans2=robbery(nums,1,n);
        return max(ans1,ans2);
    }
};
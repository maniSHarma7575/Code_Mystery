class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxEle=INT_MIN;
        for(auto &it:nums){
            maxEle=max(maxEle,it);
        }
        int left=1,right=maxEle;
        while(left<right){
            int mid=(left+right)/2;
            long long sum=0;
            for(auto& it:nums){
                sum+=(it%mid==0)?(it/mid):(it/mid)+1;
            }
            if(right-left==1){
                if(sum<=threshold){
                    return left;
                }
                else{
                    return right;
                }
            }
            if(sum<=threshold){
                right=mid;
            }else{
                left=mid;
            }
            
        }
        return 1;
    }
    
     
};
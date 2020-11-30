class Solution {
public:
    void swap(vector<int> &nums,int i,int j){
        while(i<=j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        return;
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        swap(nums,n-k,n-1);
        swap(nums,0,n-k-1);
        swap(nums,0,n-1);
    }
};
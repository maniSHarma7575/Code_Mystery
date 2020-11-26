class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int lr[n];
        int rl[n];
        lr[0]=0;
        rl[n-1]=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                lr[i]=lr[i-1]+1;
            }else{
                lr[i]=0;
            }
            if(arr[n-i]<arr[n-i-1]){
                rl[n-i-1]=rl[n-i]+1;
            }else{
                rl[n-i-1]=0;
            }
        }
        int maxE=0;
        for(int i=0;i<n;i++){
            //cout<<lr[i]<<" "<<rl[i]<<endl;
            if(lr[i]!=0 && rl[i]!=0){
                maxE=max(lr[i]+rl[i]+1,maxE);
            }
        }
        return maxE;
    }
};
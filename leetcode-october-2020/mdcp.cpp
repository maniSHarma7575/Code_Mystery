class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int> left(n,-1);
        vector<int> right(n,-1);
        int start=0;
        int end=0;
        int j;
        for(int i=0;i<n;i++){
            j=n-1-i;
            if(seats[j]==1){
                end=1;
                right[j]=-1;
            }
            else{
                right[j]=end;
                end++;
            }
            if(seats[i]==1){
                start=1;
                left[i]=-1;
            }
            else{
                left[i]=start;
                start++;
            }
        }
        int maxDist=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                if(left[i]==0){
                    ans=right[i];
                }
                else if(right[i]==0){
                    ans=left[i];
                }
                else{
                ans=min(left[i],right[i]);
                }
            }
            maxDist=max(maxDist,ans);
        }
        return maxDist;
    }
};
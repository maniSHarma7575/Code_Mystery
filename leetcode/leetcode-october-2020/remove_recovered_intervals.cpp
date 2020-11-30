bool cmp(vector<int> &a ,vector<int> &b){
    if(a[0]==b[0]){
        return a[1]>b[1];
    }else{
        return a[0]<b[0];
    }
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)return 0;
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int left=intervals[0][0];
        int right=intervals[0][1];
        int count=1;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=left && intervals[i][1]<=right){
                continue;
            }else{
                count++;
                left=min(left,intervals[i][0]);
                right=max(right,intervals[i][1]);
            }
        }
        return count;
        
    }
};
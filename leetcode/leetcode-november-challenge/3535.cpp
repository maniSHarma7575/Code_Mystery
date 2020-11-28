bool comp(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int index=0;
        int n=intervals.size();
        int size=0;
        for(int i=0;i<n;i++){
            if(intervals[index][1]>=intervals[i][0]){
                intervals[index][0]=min(intervals[index][0],intervals[i][0]);
                intervals[index][1]=max(intervals[index][1],intervals[i][1]);
            }
            else{
                index++;
                size++;
                intervals[index]=intervals[i];
            }
        }
        vector<vector<int>> result;
        for(int i=0;i<=size;i++){
            result.push_back({intervals[i][0],intervals[i][1]});
        }
        return result;
    }
};
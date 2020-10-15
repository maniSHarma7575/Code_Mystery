bool cmp(vector<int> &a,vector<int>& b){
    if(a[0]==b[0]){
        return a[1]<b[1];
    }
    return a[0]<b[0];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==0)return 0;
        sort(points.begin(),points.end(),cmp);
        int count=1;
        int minEnd=points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]<=minEnd){
                minEnd=min(minEnd,points[i][1]);
            }
            else{
                count++;
                minEnd=points[i][1];
            }
        }
        return count;
    }
};
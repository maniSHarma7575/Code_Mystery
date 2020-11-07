class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        unordered_map<int,bool> mp;
        for (auto& it: A) {
            mp[it]=true;
        }
        int minD=INT_MAX;
        for(auto &it:mp){
            int search=it.first;
            bool flag=true;
            int count=0;
            int count1=0;
            for(int i=0;i<A.size();i++){
                if(!(A[i]==search || B[i]==search)) {
                    flag=false;
                    break;
                }
                if(A[i]!=search && B[i]==search){
                    count++;
                }
                if(B[i]!=search && A[i]==search){
                    count1++;
                }
            }
            if(flag){
                minD=min(minD,min(count1,count));
            }
        }
        if(minD==INT_MAX)return -1;
        return minD;
    }
};
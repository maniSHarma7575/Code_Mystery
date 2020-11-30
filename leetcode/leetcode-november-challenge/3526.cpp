class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& it:A){
            int n=it.size();
            int i=0,j=n-1;
            while(i<=j){
                int temp=it[i];
                it[i]=!it[j];
                it[j]=!temp;
                i++;
                j--;
            }
        }
        return A;
    }
};
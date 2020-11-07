#include <algorithm>
class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &it:matrix){
            vector<int> search=it;
            if(search.size()!=0 && search[0]<=target && search[search.size()-1]>=target){
                return binary_search(search.begin(),search.end(),target);
            }
        }
        return false;
    }
};
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int countE=0,countO=0;
        for(auto &it:position){
            if(it%2==0){
                countE++;
            }else{
                countO++;
            }
        }
        return min(countE,countO);
    }
};
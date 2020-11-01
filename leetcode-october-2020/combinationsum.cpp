class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int> path,vector<int>& candidates,int target,int index){
        if(target<0){
            return;
        }
        if(target==0){
            result.push_back(path);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            path.push_back(candidates[i]);
            backtrack(path,candidates,target-candidates[i],i);
            path.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path={};
        backtrack(path,candidates,target,0);
        return result;
    }
};
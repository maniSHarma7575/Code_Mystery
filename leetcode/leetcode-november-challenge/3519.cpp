class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1){
            return {0};
        }
        vector<int> degree(n,0);
        vector<vector<int>> v(n);
        for(auto &it:edges){
            auto vc=it;
            degree[vc[0]]++;
            degree[vc[1]]++;
            v[vc[0]].push_back(vc[1]);
            v[vc[1]].push_back(vc[0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }
        while(n>2){
            int popEle=q.size();
            n-=popEle;
            for(int i=0;i<popEle;i++){
                int t=q.front();
                q.pop();
                for(auto j=v[t].begin();j!=v[t].end();j++){
                    degree[*j]--;
                    if(degree[*j]==1){
                        q.push(*j);
                    }
                }
            }
        }
        vector<int> result;
        while(!q.empty()){
            result.push_back(q.front());
            q.pop();
        }
        return result;
    }
};
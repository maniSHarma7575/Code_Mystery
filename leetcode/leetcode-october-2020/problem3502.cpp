class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(s.empty() || asteroids[i]>0){
                s.push(asteroids[i]);
            }
            else{
                while(true){
                    int left=s.top();
                    if(left<0){
                        s.push(asteroids[i]);
                        break;
                    }
                    else if(left==-asteroids[i]){
                        s.pop();
                        break;
                    }
                    else if(left>-asteroids[i]){
                        break;
                    }
                    else{
                        s.pop();
                        if(s.empty()){
                            s.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        vector<int> result;
        while(!s.empty()){
            result.push_back(s.top());
            s.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
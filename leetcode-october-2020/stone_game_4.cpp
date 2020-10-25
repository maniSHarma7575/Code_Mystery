class Solution {
public:
    bool isPerfect(int i){
        double sq=sqrt(i);
        return (sq-floor(sq))==0;
    }
    bool winnerSquareGame(int n) {
        vector<bool> dp(100001);
        dp[1]=true;
        dp[2]=false;
        dp[3]=true;
        vector<int> ps;
        for(int i=1;i<=100000;i++){
            if(isPerfect(i)){
                ps.push_back(i);
            }
        }
        for(int i=4;i<=n;i++){
            if(isPerfect(i)){
                dp[i]=true;
            }else{
                bool flag=true;
                for(auto &it:ps){
                    if(it>i){
                        break;
                    }
                    if(dp[i-it]==false){
                        dp[i]=true;
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    dp[i]=false;
                }
            }
        }
        return dp[n];
    }
};
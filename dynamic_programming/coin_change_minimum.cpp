long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
{
    int dp[value+1];
    dp[0]=0;
    for(int i=1;i<value+1;i++){
        dp[i]=INT_MAX;
    }
    for(int i=1;i<value+1;i++){
        for(int j=0;j<numberOfCoins;j++){
            if(coins[j]<=i){
                int sub=dp[i-coins[j]];
                if(sub!=INT_MAX && sub+1<dp[i]){
                    dp[i]=sub+1;
                }
            }
        }
    }
    if(dp[value]==INT_MAX)dp[value]=-1;
    return dp[value];
    
}
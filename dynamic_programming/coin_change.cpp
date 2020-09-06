long long numberOfWays(int coins[],int numberOfCoins,int value)
{
    int x,y;
    int dp[value+1][numberOfCoins];
    for(int i=0;i<numberOfCoins;i++){
        dp[0][i]=1;
    }
    for(int i=1;i<value+1;i++){
        for(int j=0;j<numberOfCoins;j++){
            x=(i-coins[j]>=0)?dp[i-coins[j]][j]:0;
            y=(j>=1)?dp[i][j-1]:0;
            dp[i][j]=x+y;
        }
    }
    return dp[value][numberOfCoins-1];

}
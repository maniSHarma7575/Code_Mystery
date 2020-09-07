int static dp[11][51];


int solve(int n, int k) 
{
    if(k==0 || k==1){
        dp[n][k]=k;
    }
    if(n==1){
        dp[n][k]=k;
    }
    if(dp[n][k]!=-1){
        return dp[n][k];
    }
    int minL=INT_MAX;
    for(int f=1;f<=k;f++){
        int temp=max(solve(n-1,f-1),solve(n,k-f));
        minL=min(minL,temp);
    }
    dp[n][k]=minL+1;
    
    return dp[n][k];
}
int eggDrop(int n,int k){
    memset(dp,-1,sizeof(dp));
    return solve(n,k);
}
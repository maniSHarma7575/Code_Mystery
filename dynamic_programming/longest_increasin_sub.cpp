int longestSubsequence(int n, int arr[])
{
   int dp[n];
   int maxLen=INT_MIN;
   for(int i=0;i<n;i++){
       dp[i]=1;
   }
   maxLen=1;
   for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
           if(arr[i]>arr[j]){
               dp[i]=max(dp[i],dp[j]+1);
               if(dp[i]>maxLen){
                   maxLen=dp[i];
               }
           }
       }
   }
   return maxLen;
}

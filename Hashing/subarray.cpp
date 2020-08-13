
int maxLen(int A[], int n)
{
    unordered_map<int,int> mp;
    int sum=0;
    int dist=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=A[i];
        
        if (A[i] == 0 && dist == 0) 
            dist = 1; 
        if (sum == 0) 
            dist = i + 1; 
        if(mp.find(sum)!=mp.end()){
            if(i-mp[sum]>dist){
                dist=i-mp[sum];
            }
            dist=max(dist,i-mp[sum]);
        }
        else{
        mp[sum]=i;
        }
    }
    if(dist==INT_MIN){
        return 0;
    }
    return dist;
}
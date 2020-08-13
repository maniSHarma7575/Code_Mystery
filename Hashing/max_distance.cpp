int maxDistance(int arr[], int n)
{
    unordered_map<int,int> mp;
    int maxDist=INT_MIN;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=i;
        }
        else{
            int d=i-mp[arr[i]];
            if(maxDist<d){
                maxDist=d;
            }
        }
    }
    if(maxDist==INT_MIN)return 0;
    return maxDist;
}
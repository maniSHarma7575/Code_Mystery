ll findSubarray(vector<ll> arr, int n ) {
    unordered_map<ll,ll> mp;
    ll sum=0;
    ll count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
                count+=1;
        }
        if(mp.find(sum)!=mp.end()){
            count+=mp[sum];
        }
        mp[sum]++;
    }
    return count;
}
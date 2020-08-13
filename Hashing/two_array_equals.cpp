
bool check(vector<ll> arr, vector<ll> brr, int n) {
   unordered_map<ll,ll> mp;
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
   }
   for(int i=0;i<n;i++){
       if(mp.find(brr[i])==mp.end()){
           return false;
       }
       if(mp[brr[i]]==0){
           return false;
       }
       mp[brr[i]]--;
   }
   return true;
}
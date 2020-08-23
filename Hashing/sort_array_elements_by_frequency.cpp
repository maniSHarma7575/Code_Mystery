bool cmp(pair<int, int>& a, 
         pair<int, int>& b) 
{ 
    if(a.second!=b.second){
    return a.second >b.second;}
    else{
        return a.first<b.first;
    }
} 
vector<int> sortByFreq(int arr[],int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<pair<int, int> > A; 
     for (auto& it : mp) { 
        A.push_back(it); 
    } 
    vector<int> v;
    sort(A.begin(), A.end(), cmp); 
     for (auto& it : A) { 
  
        for(int i=0;i<it.second;i++){
            v.push_back(it.first);
        }
    } 
    return v;
}
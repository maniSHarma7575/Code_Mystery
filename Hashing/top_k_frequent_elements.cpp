bool cmp(pair<int, int>& a, 
         pair<int, int>& b) 
{ 
    if(a.second!=b.second){
    return a.second > b.second;
    }
    else{
        return a.first>b.first;
    }
} 
vector<int> TopK(vector<int>& array, int k) 
{
    unordered_map<int,int> mp;
    for(auto& it:array){
        mp[it]++;
    }
    vector<pair<int,int>> v;
    for(auto& it:mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    vector<int> result;
    int i=0;
    for (auto& it : v) {
        if(i==k){
            break;
        }
        i++;
        result.push_back(it.first);
    } 
    return result;
    
}
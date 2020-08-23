vector <int> countDistinct (int A[], int n, int k)
{
    unordered_map<int,int> s;
    for(int i=0;i<k;i++){
        s[A[i]]++;
    }
    vector<int> v;
    v.push_back(s.size());
    for(int i=1;i<(n-(k-1));i++){
        if(s[A[i-1]]==1){
            s.erase(A[i-1]);
        }
        else{
             s[A[i-1]]--;
        }
        s[A[i+(k-1)]]++;
        v.push_back(s.size());
    }
    return v;
    
    
}
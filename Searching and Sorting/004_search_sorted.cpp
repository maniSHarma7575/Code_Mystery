int Search(vector<int> vec, int K) {
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        if(vec[i]==K)
        return i;
        
    }
    return -1;
}
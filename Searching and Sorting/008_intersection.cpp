void printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    unordered_map<int,bool> mp;
    for(int i=0;i<N;i++)
    {
        mp[arr1[i]]=true;
    }
    for(int i=0;i<M;i++)
    {
        if(mp.find(arr2[i])!=mp.end())
        {
            cout<<arr2[i]<<" ";
            mp.erase(arr2[i]);
        }
    }
}
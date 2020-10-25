vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    for(int i=0;i<n;i=i+k)
    {
        int start=i;
        int end=min(i+k-1,n-1);
        while(start<=end)
        {
            int temp=mv[start];
            mv[start]=mv[end];
            mv[end]=temp;
            start++;
            end--;
        }
    }
    return mv;
}
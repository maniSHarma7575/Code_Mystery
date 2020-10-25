void subarraySum(int arr[], int n, int s){
    int cur_sum=arr[0],start=0,i;
    for(int i=1;i<=n;i++)
    {
        while(cur_sum>s && start<i-1)
        {
            cur_sum=cur_sum-arr[start];
            start++;
        }
        if(cur_sum==s)
        {
            cout<<start+1<<" "<<i;
            return;
        }
        if(i<n)
        cur_sum+=arr[i];
        
    }
    cout<<"-1";
    return;
    
    
}
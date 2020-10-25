int findMissing(int arr[], int n) { 
    int temp[1000001];
    for(int i=0;i<1000001;i++)
    {
        temp[i]=-1;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)max=arr[i];
        if(arr[i]>0)
        {
            temp[arr[i]]=1;
        }
    }
    int number=-1;
    for(int i=1;i<=max;i++)
    {
        if(temp[i]==-1)
        {
            number=i;
            return i;
        }
    }
    return max+1;
}
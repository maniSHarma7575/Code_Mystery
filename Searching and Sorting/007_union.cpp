void findUnion(int arr1[], int arr2[], int n, int m)
{
    int temp[1000001];
    for(int i=0;i<1000001;i++)
    {
        temp[i]=-1;
    }
    int i=0,j=0,max=INT_MIN;
    while(i<n && j<m)
    {
        temp[arr1[i]]=1;
        temp[arr2[j]]=1;
        if(arr1[i]>max)max=arr1[i];
        if(arr2[j]>max)max=arr2[j];
        i++;j++;
    }
    while(i<n)
    {
        temp[arr1[i]]=1;
         if(arr1[i]>max)max=arr1[i];

        i++;
    }
    while(j<m)
    {
        temp[arr2[j]]=1;
                if(arr2[j]>max)max=arr2[j];

        j++;
    }
    for(int i=0;i<=max;i++)
    {
        if(temp[i]==1)
        {
            cout<<i<<" ";
        }
    }
    
}
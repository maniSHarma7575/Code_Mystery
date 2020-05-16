void merge(int arr[], int l, int m, int r)
{
    int n1=(m-l)+1;
    int n2=(r-m);
    int k=0;
    int l1[n1],l2[n2];
    for(int i=0;i<n1;i++)
    {
        l1[i]=arr[l+i];
    }
    k=0;
    for(int i=0;i<n2;i++)
    {
        l2[i]=arr[m+1+i];
    }
    k=l;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(l1[i]<l2[j])
        {
            arr[k]=l1[i];
            i++;k++;
        }else{
            arr[k]=l2[j];
            j++;k++;
        }
        
    }
    while(i<n1)
    {
        arr[k]=l1[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=l2[j];
        j++;k++;
    }
}
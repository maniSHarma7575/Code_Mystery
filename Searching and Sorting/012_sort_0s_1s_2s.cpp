void sort012(int a[], int n)
{
    int temp[]={0,0,0};
    for(int i=0;i<n;i++)temp[a[i]]++;
    int k=0;
    for(int i=0;i<temp[0];i++)
    {
        a[k]=0;
        k++;
    }
    for(int i=0;i<temp[1];i++)
    {
        a[k]=1;
        k++;
    }
    for(int i=0;i<temp[2];i++)
    {
        a[k]=2;
        k++;
    }
    
    
}
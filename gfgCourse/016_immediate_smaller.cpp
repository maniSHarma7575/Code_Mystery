int immediateSmaller(int arr[], int n, int x)
{
    int num=INT_MIN;
    int number=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-x<0 && (arr[i]-x)>num)
        {
           number=arr[i];
           num=arr[i]-x;
        }
    }
    return number;
    
}

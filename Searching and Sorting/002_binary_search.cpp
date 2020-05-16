int bin_search(int A[], int left, int right, int k)
{
    int mid=(left+(right))/2;
    while(left<=right && A[mid]!=k)
    {
        if(A[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
        mid=(left+(right))/2;
        
    }
    if(A[mid]==k)return mid;
    else return -1;
}
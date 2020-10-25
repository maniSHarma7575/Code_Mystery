int remove_duplicate(int A[],int N)
{
    int temp[10001];
    int j=0;
    temp[0]=A[0];
   
    for(int i=1;i<N;i++)
    {
        if(temp[j]!=A[i])
        {
            j=j+1;
            temp[j]=A[i];
        }
    }
    for(int i=0;i<=j;i++)
    {
        
        A[i]=temp[i];
    }
    
    return j+1;
}
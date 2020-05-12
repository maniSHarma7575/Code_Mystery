int firstRepeated(int arr[], int n) {
    int temp[1000001];
    for(int i=0;i<1000001;i++)
    {
        temp[i]=-1;
    }
    
    int num=-1;
    int number=-1;
    for(int i=0;i<n;i++)
    {
        if(temp[arr[i]]!=-1)
        {
            if(num!=-1 && temp[number]>temp[arr[i]])
            {
                num=temp[arr[i]];
                number=arr[i];
            }
            if(num==-1)
            {
                num=temp[arr[i]];
                number=arr[i];
            }
            
        }
        else
        {
        temp[arr[i]]=i+1;
        }
        
    }
    return num;
}
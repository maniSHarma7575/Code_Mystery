
int findMedian(int arr[], int n, int brr[], int m){
    int size=n+m;
    if(size%2==0)
    {
        int a=size/2;
        int b=a-1;
        int i=0,j=0;
        int k=0;
        int ans=0;
        while(i<n && j<m)
        {
            
            if(arr[i]<brr[j])
            {
                if(k==a || k==b)
            {
                ans+=arr[i];
            }
               i++; 
               
            }
            else
            {
                if(k==a || k==b)
            {
                ans+=brr[j];
            }
                j++;
            }
            
            k++;
            
            
        }
        while(i<n)
        {
             if(k==a || k==b)
            {
                ans+=arr[i];
            }
               i++; k++;
        }
        while(j<m)
        {
            if(k==a || k==b)
            {
                ans+=brr[j];
            }
                j++;k++;
            
        }
        return ans/2;
    }
    else
    {
        int a=size/2;
       // int b=a-1;
        int i=0,j=0;
        int k=0;
        int ans=0;
        while(i<n && j<m)
        {
            
            if(arr[i]<brr[j])
            {
                if(k==a)
            {
                ans+=arr[i];
            }
               i++; 
               
            }
            else
            {
                if(k==a)
            {
                ans+=brr[j];
            }
                j++;
            }
            
            k++;
            
            
        }
        while(i<n)
        {
             if(k==a)
            {
                ans+=arr[i];
            }
               i++; k++;
        }
        while(j<m)
        {
            if(k==a)
            {
                ans+=brr[j];
            }
                j++;k++;
            
        }
        return ans;
    }
}
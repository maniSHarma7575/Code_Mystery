void convertToWave(int *arr, int n){
    
    int *ptr=&arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(i%2==0 && *ptr<*(ptr+1))
        {
            int temp=*ptr;
            *ptr=*(ptr+1);
            *(ptr+1)=temp;
        }
        if(i%2!=0 && *ptr>*(ptr+1))
        {
            int temp=*ptr;
            *ptr=*(ptr+1);
            *(ptr+1)=temp;
        }
        ptr++;
    }
    
}
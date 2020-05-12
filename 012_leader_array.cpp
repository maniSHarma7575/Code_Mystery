vector<int> leaders(int arr[], int n){
    
   vector<int> result;
   int leader=arr[n-1];
   result.push_back(leader);
   for(int i=n-2;i>=0;i--)
   {
       if(arr[i]>=leader)
       {
           result.push_back(arr[i]);
           leader=arr[i];
       }
   }
   int size=result.size();
   
   for(int i=0,j=size-1;i!=j && i<j;i++,j--)
   {
       
       int temp=result[i];
       result[i]=result[j];
       result[j]=temp;
   }
   return result;
     
    
}
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    
}
int partition (int arr[], int low, int high)
{
  int i=low-1;
  int pivot=arr[high];
  int j=low;
  for(j=low;j<high;j++)
  {
      if(arr[j]<pivot)
      {
          i++;
         
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          
      }
      
  }
 int temp=arr[i+1];
 arr[i+1]=pivot;
 arr[high]=temp;
  return i+1;
  
}
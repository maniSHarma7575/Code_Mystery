int equilibriumPoint(long long a[], int n) {

   int totalsum=0,leftsum=0;
   for(int i=0;i<n;i++)
   {
       totalsum+=a[i];
   }
   for(int i=0;i<n;i++)
   {
       if(totalsum-a[i]-leftsum==leftsum)
       {
           return i+1;
       }
       leftsum+=a[i];
   }
   return -1;
}
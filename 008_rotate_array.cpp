void rotateArr(int arr[], int d, int n){
    int gcd=__gcd(d,n);
   int i, j, k, temp;
  for (i = 0; i < gcd; i++)
  {
    /* move i-th values of blocks */
    temp = arr[i];
    j = i;
    while(1)
    {
      k = j+d;
      if (k >= n)
        k = k - n;
      if (k == i)
        break;
      arr[j] = arr[k];
      j = k;
    }
    arr[j] = temp;
  }
}
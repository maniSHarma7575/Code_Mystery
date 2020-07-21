int posOfRightMostDiffBit(int m, int n)
{
  int count = 0;
  while (n || m)
  {
    int temp1 = n & 1;
    int temp2 = m & 1;
    if (temp1 ^ temp2)
    {
      return count + 1;
    }
    n >>= 1;
    m >>= 1;
    count++;
  }
  return count + 2;
}
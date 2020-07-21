unsigned int getFirstSetBit(int n)
{

  int count = 0;
  while (n)
  {
    if (n & 1)
    {
      return count + 1;
    }
    n >>= 1;
    count++;
  }
  return count;
}
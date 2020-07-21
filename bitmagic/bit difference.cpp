int countBitsFlip(int a, int b)
{

  int res = a ^ b;
  int count = 0, temp;
  while (res)
  {
    temp = res & 1;
    if (temp)
    {
      count++;
    }
    res >>= 1;
  }
  return count;
}
bool isPowerofTwo(long long n)
{
  long long num = n;
  long long res = 1;
  while (n)
  {
    n >>= 1;
    res = res * 2;
  }
  res = res / 2;
  return res == num;
}
bool isLucky(int n, int &counter)
{
  if (counter > n)
  {
    return true;
  }
  if (n % counter == 0)
  {
    return false;
  }
  int sub = n / counter;
  n = n - sub;
  counter = counter + 1;
  return isLucky(n, counter);
}
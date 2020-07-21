bool isSparse(int n)
{

  bool flag = false;
  int prev, next;
  bool first = true;
  while (n)
  {
    if (!first)
    {
      next = n & 1;
      if (prev == next && prev & next)
      {
        return false;
      }
      prev = next;
    }
    else
    {
      prev = n & 1;
      first = false;
    }
    n = n >> 1;
  }
  return true;
}
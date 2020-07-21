bool checkKthBit(int n, int k)
{
  int temp = 1 << k;
  return temp & n;
}
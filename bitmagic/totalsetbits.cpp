int countSetBits(int n)
{
  int res = 0;
  int temp = 1, group, set_bits;
  int shifter = 1;
  while (temp <= n)
  {
    group = (n + 1) / temp;
    set_bits = group / 2;
    set_bits *= temp;
    res += set_bits;
    res += group & 1 ? (n + 1) % temp : 0;
    temp = 1 << shifter;
    shifter++;
  }
  return res;
}
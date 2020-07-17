#include <iostream>
using namespace std;

long long int generateOutcome(int l, int w)
{
  int count = 0;
  while (l != w)
  {
    if (l == 1 || w == 1)
    {
      if (l == 1)
      {
        count += w;
      }
      else
      {
        count += l;
      }
      return count;
    }
    int temp = l - w;
    l = temp > w ? temp : w;
    w = temp < w ? temp : w;
    count++;
  }
  return count + 1;
}
int main()
{
  int p, q, r, s;
  long long int result = 0;
  cin >> p >> q >> r >> s;
  for (int i = p; i <= q; i++)
  {
    for (int q = r; q <= s; q++)
    {
      int len = i > q ? i : q;
      int wid = i < q ? i : q;
      result += generateOutcome(len, wid);
    }
  }
  cout << result;
  return 0;
}
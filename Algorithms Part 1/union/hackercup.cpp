#include <iostream>
using namespace std;

int main()
{
  int T, n, Ilen, Qlen;
  cin >> T;
  string I, Q;
  bool arr[51][51];
  while (T--)
  {
    cin >> n;
    cin >> I;
    cin >> Q;
    for (int i = 0; i < n; i++)
    {
      arr[i][i] = true;
      if (i == 0)
      {
        Q[i] == 'Y' && I[i + 1] == 'Y' ? arr[i][i + 1] = true : arr[i][i + 1] = false;
      }
      else if (i == Qlen - 1)
      {
        Q[i] == 'Y' && I[i - 1] == 'Y' ? arr[i][i - 1] = true : arr[i][i - 1] = false;
      }
      else
      {
        Q[i] == 'Y' && I[i + 1] == 'Y' ? arr[i][i + 1] = true : arr[i][i + 1] = false;
        Q[i] == 'Y' && I[i - 1] == 'Y' ? arr[i][i - 1] = true : arr[i][i - 1] = false;
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
      }
      for (int j = i - 1; j >= 0; j--)
      {
      }
    }
  }

  return 0;
}
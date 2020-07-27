#include <iostream>
using namespace std;

int main()
{
  int T, t = 0, n, Ilen, Qlen;
  cin >> T;
  string I, Q, ans;
  bool flag = true;
  bool arr[51][51];
  while (T--)
  {
    t++;
    cin >> n;
    cin >> I;
    cin >> Q;
    for (int i = 0; i < n; i++)
    {
      arr[i][i] = true;
    }

    for (int i = 0; i < n; i++)
    {
      flag = true;
      for (int j = i; j < n - 1; j++)
      {
        if (flag)
        {
          Q[j] == 'Y' && I[j + 1] == 'Y' ? arr[i][j + 1] = true : arr[i][j + 1] = false;
          Q[j] == 'Y' && I[j + 1] == 'Y' ? flag = true : flag = false;
        }
        else
        {
          arr[i][j + 1] = false;
        }
      }
      flag = true;
      for (int j = i; j >= 1; j--)
      {
        if (flag)
        {
          Q[j] == 'Y' && I[j - 1] == 'Y' ? arr[i][j - 1] = true : arr[i][j - 1] = false;
          Q[j] == 'Y' && I[j - 1] == 'Y' ? flag = true : flag = false;
        }
        else
        {
          arr[i][j - 1] = false;
        }
      }
    }
    cout << "Case #" << t << ":" << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        ans = arr[i][j] ? "Y" : "N";
        cout << ans;
      }
      cout << endl;
    }
  }

  return 0;
}
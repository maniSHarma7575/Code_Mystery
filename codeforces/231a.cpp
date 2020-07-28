#include <iostream>
using namespace std;

int main()
{
  int n, a;
  cin >> n;
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < 3; j++)
    {
      cin >> a;
      if (a)
        count++;
    }
    if (count >= 2)
      res++;
  }
  cout << res;

  return 0;
}
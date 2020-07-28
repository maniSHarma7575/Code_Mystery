#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  int k = 1;
  int i = 0;
  while (i < n)
  {
    if (v[i] >= k)
    {
      k++;
    }
    i++;
  }
  cout << k - 1;
  return 0;
}
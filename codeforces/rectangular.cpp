#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  uint64_t n, m, a, res;
  cin >> n >> m >> a;
  int row = n / a;
  if (n % a != 0)
    row++;
  int col = m / a;
  if (m % a != 0)
    col++;
  res = row * col;
  cout << res;
  return 0;
}

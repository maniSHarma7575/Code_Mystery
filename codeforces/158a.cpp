#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  int count = k;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i < k && arr[i] == 0)
    {
      count--;
    }
    if (i >= k && arr[k - 1] != 0 && arr[i] == arr[k - 1])
    {
      count++;
    }
  }
  if (count < 0)
    cout << 0;
  else
    cout << count;

  return 0;
}
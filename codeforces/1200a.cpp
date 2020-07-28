#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int n;
  string s;
  cin >> n;
  cin >> s;
  vector<int> hotel(10, 0);
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
    {
      int j = 0;
      while (hotel[j] != 0)
      {
        j++;
      }
      hotel[j] = 1;
    }
    else if (s[i] == 'R')
    {
      int j = 9;
      while (hotel[j] != 0)
      {
        j--;
      }
      hotel[j] = 1;
    }
    else
    {
      hotel[(s[i] - 48)] = 0;
    }
  }
  for (int a : hotel)
  {
    cout << a;
  }
  return 0;
}
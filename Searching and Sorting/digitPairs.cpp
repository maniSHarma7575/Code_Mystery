#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string convertString(int a)
{
  int n = a;
  int smallest = INT_MAX, largest = INT_MIN;
  while (n)
  {
    int rem = n % 10;
    if (rem < smallest)
    {
      smallest = rem;
    }
    if (rem > largest)
    {
      largest = rem;
    }
    n = n / 10;
  }
  int result = largest * 11 + smallest * 7;
  string stri = to_string(result);
  if (stri.length() == 3)
  {
    stri = stri.substr(1, 2);
  }
  return stri;
}

int main()
{
  int n, a, output = 0;
  cin >> n;
  string arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    arr[i] = convertString(a);
  }
  int even[10], odd[10];
  for (int i = 0; i < 10; i++)
  {
    even[i] = 0;
    odd[i] = 0;
  }
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((arr[j][0] - 48) == i)
      {
        if (j % 2 == 0)
        {
          even[i]++;
        }
        else
        {
          odd[i]++;
        }
      }
    }
  }
  for (int i = 0; i < 10; i++)
  {
    int res = even[i] > odd[i] ? even[i] : odd[i];
    if (res == 2)
    {
      output += 1;
    }
    if (res >= 3)
    {
      output += 2;
    }
  }
  cout << output;

  return 0;
}
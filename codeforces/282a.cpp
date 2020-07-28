#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int count = 0;
  int n;
  string s;
  cin >> n;
  while (n--)
  {
    cin >> s;
    if (s == "X++" || s == "++X")
      count++;
    else
      count--;
  }
  cout << count;
  return 0;
}
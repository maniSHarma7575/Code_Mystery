#include <iostream>
using namespace std;

bool vowel(char a)
{
  if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u' || a == 'Y' || a == 'y')
  {
    return true;
  }
  return false;
}
char convert(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    return (char)(97 + (ch - 'A'));
  }
  else
  {
    return ch;
  }
}
int main()
{
  string s;
  cin >> s;
  string res;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    if (!(vowel(s[i])))
    {
      res = res + '.' + convert(s[i]);
    }
  }
  cout << res;

  return 0;
}
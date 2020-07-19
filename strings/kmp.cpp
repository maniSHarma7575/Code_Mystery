#include <iostream>
using namespace std;
void computeLps(string pat, int M, int lps[])
{
  int i = 1;
  int len = 0;
  lps[0] = 0;

  while (i < M)
  {
    if (pat[i] == pat[len])
    {
      len++;
      lps[i] = len;
      i++;
    }
    else
    {
      if (len != 0)
      {
        len = lps[len - 1];
      }
      else
      {
        lps[i] = 0;
        i++;
      }
    }
  }
}
void kmpSearch(string txt, string pat)
{
  int n = txt.length();
  int m = pat.length();
  int lps[m];
  computeLps(pat, m, lps);

  int i = 0;
  int j = 0;
  while (i < n)
  {
    if (pat[j] == txt[i])
    {
      j++;
      i++;
    }
    if (j == m)
    {
      cout << "Found patter at index " << i - j;
      j = lps[j - 1];
    }
    else if (i < n && pat[j] != txt[i])
    {
      if (j != 0)
        j = lps[j - 1];
      else
        i = i + 1;
    }
  }
}

int main()
{
  string s1 = "ABABDABACDABABCABAB";
  string s2 = "ABABCABAB";
  kmpSearch(s1, s2);
  return 0;
}
void compute(string pat, int m, int lps[])
{
  lps[0] = 0;
  int len = 0;
  int i = 1;
  while (i < m)
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
bool subString(string text, string pat)
{
  int n = text.length();
  int m = pat.length();
  int lps[m];
  compute(pat, m, lps);
  int i = 0;
  int j = 0;
  while (i < n)
  {
    if (pat[j] == text[i])
    {
      i++;
      j++;
    }
    if (j == m)
    {
      return true;
    }
    if (i < n && pat[j] != text[i])
    {
      if (j != 0)
        j = lps[j - 1];
      else
        i = i + 1;
    }
  }
  return false;
}

bool areRotations(string s1, string s2)
{
  if (s1.length() != s2.length())
    return false;
  string s = s1 + s1;
  return subString(s, s2);
}
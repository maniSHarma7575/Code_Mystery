void permute(string s, int l, int r)
{
  if (l == r)
  {
    cout << s << " ";
    return;
  }
  else
  {
    for (int i = l; i <= r; i++)
    {
      swap(s[i], s[l]);
      sort(s.begin() + l + 1, s.end());
      permute(s, l + 1, r);
      swap(s[i], s[l]);
    }
  }
}
void permutation(string S)
{
  sort(S.begin(), S.end());
  permute(S, 0, S.length() - 1);
}
bool isAnagram(string c, string d)
{
  int arr1[25];
  int arr2[25];
  if (c.length() != d.length())
    return false;
  int n = c.length();
  for (int i = 0; i < 26; i++)
  {
    arr1[i] = arr2[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    arr1[c[i] - 97]++;
    arr2[d[i] - 97]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (arr1[i] != arr2[i])
      return false;
  }
  return true;
}

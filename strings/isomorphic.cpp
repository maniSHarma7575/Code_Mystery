bool areIsomorphic(string str1, string str2)
{

  if (str1.length() != str2.length())
    return false;
  int n = str1.length();
  bool flag1 = false;
  bool flag2 = false;
  unordered_map<char, char> map1;
  unordered_map<char, char> map2;
  map1[str1[0]] = str2[0];
  map2[str2[0]] = str1[0];
  for (int i = 1; i < n; i++)
  {
    if (map1.find(str1[i]) != map1.end() && map1[str1[i]] != str2[i])
    {
      return false;
    }
    if (map2.find(str2[i]) != map2.end() && map2[str2[i]] != str1[i])
    {
      return false;
    }
    if (flag1 != flag2)
      return false;
    if (str1[i] != str1[i - 1])
    {
      flag1 = !flag1;
    }
    if (str2[i] != str2[i - 1])
    {
      flag2 = !flag2;
    }
    map1[str1[i]] = str2[i];
    map2[str2[i]] = str1[i];
  }
  return true;
}
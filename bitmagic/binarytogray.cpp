char convert(char a, char b)
{
  int aa = (int)(a - 48);
  int bb = (int)(b - 48);
  return (char)((aa ^ bb) + 48);
}
int greyConverter(int n)
{
  if (n == 0)
    return 0;
  stack<char> binary;
  while (n)
  {
    binary.push((char)((n % 2) + 48));
    n = n / 2;
  }

  string gray;
  gray = gray + binary.top();
  char prev = binary.top();
  binary.pop();
  int i = 1;
  while (!binary.empty())
  {
    gray = gray + convert(prev, binary.top());
    prev = binary.top();
    binary.pop();
    i++;
  }
  int len = gray.length();
  int res = 0;
  int j = 0;
  for (int i = len - 1; i >= 0; i--)
  {
    res += (gray[i] - 48) * (int)pow(2, j);
    j++;
  }
  return res;
}
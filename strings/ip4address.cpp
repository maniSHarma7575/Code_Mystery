int isValid(char *ip)
{
  int len = 0;
  int res = 0;
  for (int i = 0; ip[i] != '\0'; i++)
    len++;
  int mul = 1;
  int count0 = 0;
  bool flag0 = false;
  int countd = 0;
  int countdot = 0;
  for (int i = len - 1; i >= 0; i--)
  {
    if (!((ip[i] >= '0' && ip[i] <= '9') || ip[i] == '.'))
      return 0;
    if (ip[i] == '.')
    {
      if (countd == 0)
        return 0;
      countdot++;
      if (flag0 == true && countd != 1)
        return 0;
      if (res > 255)
        return 0;
      mul = 1;
      res = 0;
      countd = 0;
      flag0 = false;
      count0 = 0;
    }
    else
    {
      countd++;
      if ((ip[i] - 48) == 0)
      {
        count0++;
        flag0 = true;
      }
      else
      {
        flag0 = false;
      }
      res += mul * (ip[i] - 48);
      mul *= 10;
    }

    if (countd > 3)
      return 0;
  }
  if (countd == 0)
    return 0;
  if (flag0 == true && countd != 1)
    return 0;
  if (res > 255)
    return 0;
  if (countdot != 3)
    return 0;
  return 1;
}
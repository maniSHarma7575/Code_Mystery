#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
  ifstream input("alchemy_input.txt");
  ofstream output("alchemy_sahu_output.txt");
  int len, t, countA, countB, countDiff, testCase = 0;
  string C;
  input >> t;
  bool flag = false;
  while (t--)
  {
    testCase++;

    input >> len;
    input >> C;
    while (len)
    {
      flag = false;
      for (int i = 0; i < len; i++)
      {
        C[i] = C[i];
      }
      len = len - 2;
    }
    if (flag)
    {
      output << "Case #" << testCase << ": "
             << "Y" << endl;
    }
    else
    {
      output << "Case #" << testCase << ": "
             << "N" << endl;
    }
  }

  return 0;
}

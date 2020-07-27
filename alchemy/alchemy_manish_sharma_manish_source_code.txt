#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
  ifstream input("alchemy_input.txt");
  ofstream output("alchemy_output.txt");
  int len, t, countA, countB, countDiff, testCase = 0;
  string C;
  input >> t;
  while (t--)
  {
    testCase++;
    countA = 0;
    countB = 0;
    input >> len;
    input >> C;
    for (int i = 0; i < len; i++)
    {
      if (C[i] == 'A')
      {
        countA++;
      }
      else
      {
        countB++;
      }
    }
    countDiff = abs(countA - countB);
    if (countDiff == 1)
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

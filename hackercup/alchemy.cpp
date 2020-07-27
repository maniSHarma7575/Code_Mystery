#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream in("input.txt");
  ofstream out("output.txt");
  int T;
  in >> T;

  int N;
  string S;
  for (int tc = 1; tc <= T; ++tc)
  {
    in >> N;
    in >> S;
    int diff = 0;
    for (char ch : S)
    {
      if (ch == 'A')
        ++diff;
      else
        --diff;
    }
    out << "Case #" << tc << ": " << ((diff == 1 || diff == -1) ? 'Y' : 'N') << endl;
  }
  return 0;
}
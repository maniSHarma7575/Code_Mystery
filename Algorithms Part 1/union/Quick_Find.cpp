#include <iostream>
using namespace std;

class QuickFindUF
{
private:
  int id[100001];
  int len;

public:
  QuickFindUF(int n)
  {
    len = n;
    for (int i = 0; i < n; i++)
    {
      id[i] = i;
    }
  }

  bool connected(int p, int q)
  {
    return id[p] == id[q];
  }
  void unionElements(int p, int q)
  {
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < len; i++)
    {
      if (id[i] == pid)
      {
        id[i] = qid;
      }
    }
  }
};

int main()
{
  int n;
  cin >> n;
  QuickFindUF conn(n);
  cout << conn.connected(1, 2) << endl;
  conn.unionElements(1, 2);
  cout << conn.connected(1, 2) << endl;
  cout << conn.connected(1, 9) << endl;
  conn.unionElements(2, 9);
  cout << conn.connected(1, 9) << endl;
  return 0;
}
void towerofhanoi(int N, int from, int to, int aux, int &count)
{
  if (N == 1)
  {
    cout << "move disk 1 from rod " << from << " to rod " << to << endl;
    count += 1;
    return;
  }
  towerofhanoi(N - 1, from, aux, to, count);
  cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
  count += 1;
  towerofhanoi(N - 1, aux, to, from, count);
}
// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux)
{
  int count = 0;
  towerofhanoi(N, from, to, aux, count);
  return count;
}
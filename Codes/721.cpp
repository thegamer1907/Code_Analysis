#include <bits/stdc++.h>

using namespace std;

int sum(int x)
{
  int rez = 0;
  while (x != 0)
  {
    rez += x%10;
    x/=10;
  }
  return rez;
}

int main()
{
  ios::sync_with_stdio(0);
  int k;
  cin >> k;
  int count = 0;
  for (int i = 1; true; i++)
  {
    if (sum(i) == 10)
    {
      count++;
      if (count == k)
      {
        cout << i << endl;
        return 0;
      }
    }
  }
}

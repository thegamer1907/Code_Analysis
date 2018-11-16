#include <iostream>
using namespace std;

const int N = 300000;
int main()
{
  int n, t, a[N], x;
  cin >> n >> t;

  for (x = 1; x < n; x++)
  {
    cin >> a[x];
  }

  a[n] = 1;
  for (int x = 1; x <= n; x += a[x])
  {
    if (x == t)
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}

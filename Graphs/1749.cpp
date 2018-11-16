#include <iostream>
using namespace std;

int main()
{
  int n, t, a[31000], i;
  cin >> n >> t;

  for (i = 1; i < n; i++)
  {
    cin >> a[i];
  }
  a[i] = 1;

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

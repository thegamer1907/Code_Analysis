#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, d, t;
  cin >> n >> k;
  t = 0;
  d = 0;
  while (k + t <= 240 && d <= n) {
    t += 5 * ++d;
  }
  cout << --d;
}

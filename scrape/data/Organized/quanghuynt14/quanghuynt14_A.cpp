#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout << fixed;
  long long n, m, k;
  vector<long long> p (m);
  cin >> n >> m >> k;
  for (int i = 0; i < m; i++) {
    cin >> p[i];
  }

  int ans = 0;
  long long t;
  int i = 0;
  while (i != m) {
    t = (p[i] - i) / k;
    if ((p[i] - i) % k != 0) t++;
    t = t * k + i;
    while (i != m && p[i] <= t) {
        i++;
    }
    ans++;
  }
  cout << ans;


  return 0;
}
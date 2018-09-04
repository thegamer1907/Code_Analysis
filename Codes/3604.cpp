#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, k, x, s;
  cin >> n >> m >> k >> x >> s;
  vector<int> a(m + 1, 0), b(m + 1, 0), c(k + 1, 0), d(k + 1, 0);
  a[0] = x;
  for (int i = 1; i <= m; ++i) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; ++i) {
    cin >> b[i];
  }
  for (int i = 1; i <= k; ++i) {
    cin >> c[i];
  }
  for (int i = 1; i <= k; ++i) {
    cin >> d[i];
  }
  long long ans = 1LL * x * n;
  auto calc = [&](int x) {
    int l = 0, r = k;
    while (l < r) {
      int m = (l + r + 1) >> 1;
      if (d[m] <= x) {
        l = m;
      } else {
        r = m - 1;
      }
    }
    return c[l];
  };
  for (int i = 0; i <= m; ++i) {
    int x = s - b[i];
    if (x < 0) {
      continue;
    }
    ans = min(ans, 1LL * a[i] * (n - calc(x)));
  }
  cout << ans << '\n';
  return 0;
}
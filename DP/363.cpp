#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  vector<int> a, b;
  for (int it = 0; it < 2; ++it) {
    auto& sz = it == 0 ? n : m;
    auto& v = it == 0 ? a : b;
    scanf("%d", &sz);
    v.resize(sz);
    for (int i = 0; i < sz; ++i) {
      scanf("%d", &v[i]);
    }
  }
  int ans = 0;
  vector<int> match(m, -1);
  for (int i = 0; i < n; ++i) {
    vector<bool> was(m);
    function<bool(int)> dfs = [&](int v) {
      for (int u = 0; u < m; ++u) {
        if (abs(a[v] - b[u]) <= 1 && !was[u]) {
          was[u] = true;
          if (match[u] == -1 || dfs(match[u])) {
            match[u] = v;
            return true;
          }
        }
      }
      return false;
    };
    ans += dfs(i);
  }
  printf("%d\n", ans);
  return 0;
}
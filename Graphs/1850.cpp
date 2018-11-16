#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

int main() {
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int m;
  scanf("%d", &m);
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", &b[i]);
  }
  vector<vector<int>> g(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (abs(a[i] - b[j]) <= 1) {
        g[i].push_back(j);
      }
    }
  }
  vector<int> match(m, -1);
  int max_matching = 0;
  for (int i = 0; i < n; ++i) {
    vector<bool> was(m);
    function<bool(int)> dfs = [&](int v) {
      for (int to : g[v]) {
        if (!was[to]) {
          was[to] = true;
          if (match[to] == -1 || dfs(match[to])) {
            match[to] = v;
            return true;
          }
        }
      }
      return false;
    };
    max_matching += dfs(i);
  };
  printf("%d\n", max_matching);
  return 0;
}


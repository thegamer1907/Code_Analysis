#include <bits/stdc++.h>

using namespace std;

const int N = 123456;

int a[N];
vector<vector<pair<int, int>>> g;
int f[N];

void dfs(int u, int pr = -1) {
  f[u] = 1;
  for (auto e : g[u]) {
    int v = e.first;
    if (v != pr) {
      dfs(v, u);
      f[u] += f[v];
    }
  }
}

void dfs_delete(int u, int pr, long long cur, long long mn, int& ans) {
  for (auto e : g[u]) {
    int v = e.first;
    if (v == pr) {
      continue;
    }
    long long now = cur + e.second;
    long long dist = now - mn;
    if (dist > a[v]) {
      ans += f[v];
    } else {
      dfs_delete(v, u, now, min(mn, now), ans);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  g.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 1; i < n; ++i) {
    int p, c;
    cin >> p >> c;
    --p;
    g[i].emplace_back(p, c);
    g[p].emplace_back(i, c);
  }
  dfs(0);
  int ans = 0;
  dfs_delete(0, -1, 0, 0, ans);
  cout << ans << '\n';
  return 0;
}
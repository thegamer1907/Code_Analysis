#include <bits/stdc++.h>

using namespace std;

const int N = 50 + 5;
const int INF = 0x3f3f3f3f;
int n, m, s, val[N][N], dp[N][N][N][N], sz[N];
vector<int> es[N], to[N][N];

void dfs(int u, int p) {
  for (auto v : es[u]) if (v != p) {
    dfs(v, u); sz[u] += sz[v];
  }
}

int get_dp(int u, int v, int cnt, int tot) {
  if (tot == 0) return 0;
  if (cnt == 0) return INF;
  if (dp[u][v][cnt][tot] != INF) return dp[u][v][cnt][tot];
  if (to[u][v].empty()) return dp[u][v][cnt][tot] = val[u][v] + get_dp(v, u, tot - cnt, tot - cnt);
  int cur[N];
  memset(cur, 0, sizeof(cur)); cur[0] = INF;
  for (int i = 0; i < to[u][v].size(); i++) {
    for (int j = cnt; j >= 0; j--) {
      for (int k = 0; k <= j; k++) {
        cur[j] = max(cur[j], min(cur[j-k], get_dp(v, to[u][v][i], k, tot)));
      }
    }
  }
  // printf("%d %d %d %d: %d\n", u, v, cnt, tot, cur[cnt]);
  return dp[u][v][cnt][tot] = cur[cnt] + val[u][v];
}

void solve() {
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    int u, v, w; scanf("%d%d%d", &u, &v, &w);
    es[u].push_back(v); es[v].push_back(u);
    val[u][v] = val[v][u] = w;
  }
  scanf("%d%d", &s, &m);
  for (int i = 0; i < m; i++) {
    int a; scanf("%d", &a); sz[a]++;
  }
  dfs(s, 0);
  for (int i = 1; i <= n; i++) {
    for (auto u : es[i]) for (auto v : es[i]) if (u != v) {
      to[u][i].push_back(v);
    }
  }
  memset(dp, 0x3f, sizeof(dp));
  int ans = INF;
  for (auto v : es[s]) {
    ans = min(ans, get_dp(s, v, sz[v], m));
    // printf("%d %d %d\n", v, ans, get_dp(s, v, sz[v], m));
  }
  printf("%d\n", ans);
}

int main() {
#ifdef SHCH
  freopen("input.txt", "r", stdin);
#endif
  solve();
  return 0;
}
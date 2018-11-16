#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<int> g[100000];
bool vis[100000] = {0};
int A[100000];
LL ans = 0;
LL dfs(int v) {
  vis[v] = 1;
  LL ans = A[v];
  for (int u: g[v]) {
    if (vis[u]) continue;
    ans = min(ans, dfs(u));
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int m, n; cin >> n >> m;
  for (int i = 0; i < n; ++i) cin >> A[i];
  for (int i = 0; i < m; ++i) {
    int u, v; cin >> u >> v;
    --u, --v;
    g[u].emplace_back(v), g[v].emplace_back(u);
  }
  for (int i = 0; i < n; ++i) if (not vis[i]) ans += dfs(i);
  cout << ans << '\n';
}

#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

void solve() {
  int n, m;
  cin >> n >> m;
  std::vector<int> as(n);
  for (auto& a : as) cin >> a;
  std::vector<std::vector<int>> g(n);

  n--;
  while (n--) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  std::vector<char> used(as.size());
  // {node, cats}
  std::queue<std::pair<int, int>> q;
  q.push({0, 0});
  size_t ans = 0;

  while (!q.empty()) {
    auto [node, cats] = q.front();
    q.pop();
    if (used[node]) continue;
    used[node] = true;

    if (as[node] == 1)
      cats++;
    else
      cats = 0;

    if (cats > m) continue;
    
    for (auto parent_node : g[node]) {
      if (!used[parent_node]) {
        q.push({parent_node, cats});
      }
    }
    
    if (node != 0 && g[node].size() == 1) ans++;
  }
  cout << ans << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  cout << std::fixed;
  cout.precision(10);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}
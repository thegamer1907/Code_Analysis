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

  std::function<int(int, int)> dfs;
  std::set<int> used;
  dfs = [&](int i, int cats) {
    if (used.count(i) != 0) return 0;
    used.insert(i);

    if (as[i] == 1)
      cats++;
    else
      cats = 0;

    if (cats > m) return 0;

    int result = 0;
    if (g[i].size() == 1 && i != 0) return 1;
    for (auto j : g[i]) {
      result += dfs(j, cats);
    }
    return result;
  };

  n--;
  while (n--) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  cout << dfs(0, 0) << endl;
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
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> c(n);
  vector<vector<int>> v(100001);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    v[c[i]].push_back(i);
  }

  vector<vector<int>> adj(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    adj[a - 1].push_back(b - 1);
    adj[b - 1].push_back(a - 1);
  }

  int ans = -1, nm = -1;
  for (int i = 0; i < v.size(); i++) {
    if (!v[i].size()) continue;

    unordered_set<int> cur;
    for (int j = 0; j < v[i].size(); j++)
      for (int k = 0; k < adj[v[i][j]].size(); k++)
        if (c[adj[v[i][j]][k]] != i)
          cur.insert(c[adj[v[i][j]][k]]);

    if ((int)cur.size() > ans) {
      ans = cur.size();
      nm = i;
    }
  }

  cout << nm << "\n";
}

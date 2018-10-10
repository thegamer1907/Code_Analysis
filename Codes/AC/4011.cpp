#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  map<int, vector<pair<int, int>>> query;
  int k;
  cin >> k;
  for (int i = 0; i < k; ++i) {
    int l, r;
    cin >> l >> r;
    --l; --r;
    query[r].emplace_back(l, i);
  }
  vector<int> f(m);
  vector<bool> ans(k);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      f[j] = i == 0 ? 1 : 1 + (a[i][j] >= a[i - 1][j]) * f[j];
    }
    int lowest = i - *max_element(f.begin(), f.end()) + 1;
    for (auto q : query[i]) {
      ans[q.second] = q.first >= lowest;
    }
  }
  for (int i = 0; i < k; ++i) {
    cout << (ans[i] ? "Yes" : "No") << '\n';
  }
  return 0;
}
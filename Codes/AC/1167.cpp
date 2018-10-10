#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  set<string> se[2];
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    se[0].insert(s);
  }
  int lose = 0;
  for (int i = 0; i < m; ++i) {
    string s;
    cin >> s;
    auto it = se[0].find(s);
    if (it != se[0].end()) {
      lose ^= 1;
      se[0].erase(it);
    } else {
      se[1].insert(s);
    }
  }
  int win = (se[lose].size() <= se[lose ^ 1].size()) ^ lose;
  cout << (!win ? "YES" : "NO") << '\n';
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  // im retarded
  int n, m;
  cin >> n;
  vector<int> b(n);
  for (auto& e : b)
    cin >> e;
  cin >> m;
  vector<int> g(m);
  for (auto& e : g)
    cin >> e;
  sort(b.begin(), b.end());
  sort(g.begin(), g.end());
  int sol = 0;
  for (int i = 0; i<n; i++) {
    for (int j = 0; j<m; j++) {
      if (abs(b[i] - g[j]) <= 1) {
        g[j] = 1000;
        sol += 1;
        break;
      }
    }
  }
  cout << sol << endl;
  return 0;
}

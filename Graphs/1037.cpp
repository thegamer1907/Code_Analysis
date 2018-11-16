#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int n, t;
  cin >> n >> t; --t;
  int adj[n]; memset(adj, -1, sizeof adj);
  for(int u = 0; u < n - 1; ++u) {
    int v; cin >> v;
    adj[u] = u + v;
  }
  int u = 0;
  while(u != -1) {
    if(u == t) {
      cout << "YES\n";
      return 0;
    }
    u = adj[u];
  }
  cout << "NO\n";
  return 0;
}

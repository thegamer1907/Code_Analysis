#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int n, t, u = 0;
  cin >> n >> t; --t;
  for(int i = 0; i < n - 1; ++i) {
    int v; cin >> v;
    if(u == t) {
      cout << "YES\n";
      return 0;
    }
    if(i == u) u += v;
  }
  if(u == t) {
    cout << "YES\n";
    return 0;
  }
  cout << "NO\n";
  return 0;
}

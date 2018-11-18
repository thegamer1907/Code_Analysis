#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios::sync_with_stdio(false);
  string P;
  cin >> P;
  int N;
  cin >> N;
  vector<string> W(N);
  vector<int> f(256), b(256), s(256);
  bool ans = false;
  for (int i = 0; i < N; ++i) {
    cin >> W[i];
    ans |= W[i] == P;
    ++b[W[i][0]];
    ++f[W[i][1]];
    s[W[i][0]] += W[i][0] == W[i][1];
  }
  if (P[0] == P[1]) {
    ans |= f[P[0]] + b[P[0]] - s[P[0]] >= 2 && f[P[0]] && b[P[0]];
  } else {
    ans |= f[P[0]] && b[P[1]];
  }
  if (ans) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
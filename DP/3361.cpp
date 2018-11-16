#include <bits/stdc++.h>

using namespace std;

const int md = (int) 1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int n = (int) s.size();
  s = '~' + s;
  vector<long long> hs(n + 10, 0);
  hs[1] = s[1] - 'a';
  for (int i = 2; i <= n; ++i) {
    hs[i] = (hs[i - 1] * 26 + (s[i] - 'a')) % md;
  }
  vector<long long> pow26(n + 10);
  pow26[0] = 1;
  for (int i = 1; i <= n; ++i) {
    pow26[i] = (pow26[i - 1] * 26) % md;
  }
  auto get = [&](int i, int j) {
    return (hs[j] - hs[i - 1] * pow26[j - i + 1] + 1LL * md * md) % md;
  };
  for (int len = n; len > 0; --len) {
    if (get(1, len) == get(n - len + 1, n)) {
      for (int i = 2; i + len - 1 < n; ++i) {
        if (get(i, i + len - 1) == get(1, len)) {
          cout << string(s.begin() + 1, s.begin() + len + 1) << '\n';
          return 0;
        }
      }
    }
  }
  cout << "Just a legend" << '\n';
  return 0;
}
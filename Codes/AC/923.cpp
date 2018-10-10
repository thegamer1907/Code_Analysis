#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int ans = 1;
  vector<int> p(n + 1);
  for (char c = 'a'; c <= 'z'; ++c) {
    for (int i = 0; i < n; ++i) p[i + 1] = p[i] + (s[i] != c);
    for (int l = 1, r = 1; l <= n; ++l) {
      r = max(l, r);
      while (r <= n && p[r] - p[l - 1] <= k) r++;
      ans = max(ans, r - l);
    }
  }

  cout << ans;
}
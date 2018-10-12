#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int k;
  cin >> k;
  string s;
  cin >> s;
  int n = (int) s.size();
  vector<int> dp(n + 10, 0);
  for (int i = 0; i < n; ++i) {
    dp[i + 1] = dp[i] + (s[i] == '1');
  }
  vector<int> q(n + 10, 0);
  ++q[0];
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    int t = dp[i + 1] - k;
    if (t >= 0) {
      ans += q[t];
    }
    q[dp[i + 1]]++;
  }
  cout << ans << endl;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  map<int, long long> dp[2];
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a % k != 0) {
      if (dp[0].count(a)) {
        ++dp[0][a];
      } else {
        dp[0][a] = 1;
      }
      continue;
    }
    if (dp[1].count(a / k)) {
      ans += dp[1][a / k];
    }
    if (dp[0].count(a / k)) {
      dp[1][a] += dp[0][a / k];
    }
    if (dp[0].count(a)) {
      ++dp[0][a];
    } else {
      dp[0][a] = 1;
    }
  }
  cout << ans << '\n';
  return 0;
}
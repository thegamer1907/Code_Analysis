#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;
bool is_quasi(int x) {
  while (x) {
    if (x % 10 > 1) return false;
    x /= 10;
  }
  return true;
}
int dp[1000001] = {0}, pre[1000001] = {0};
vector<int> Q;
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n;
  cin >> n;
  fill(dp + 1, dp + n + 1, (int)1e9);
  for (int i = 1; i <= n; ++i) if (is_quasi(i)) Q.push_back(i);
  for (int i = 1; i <= n; ++i) {
    for (int q: Q) {
      if (q > i) break;
      if (dp[i] > 1 + dp[i - q]) dp[i] = 1 + dp[i - q], pre[i] = q;
    }
  }
  cout << dp[n] << '\n';
  while (n != 0) cout << pre[n] << ' ', n -= pre[n];
  cout << '\n';
}


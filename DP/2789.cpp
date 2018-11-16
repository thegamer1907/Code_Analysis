#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  auto valid = [](int x) -> bool {
    while (x > 0) {
      if (x % 10 > 1) {
        return false;
      }
      x /= 10;
    }
    return true;
  };
  vector<int> a;
  for (int i = 0; i <= n; ++i) {
    if (valid(i)) {
      a.push_back(i);
    }
  }
  vector<int> dp(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    dp[i] = (int) 1e9;
    auto it = lower_bound(a.begin(), a.end(), i);
    if (it == a.end() || *it > i) {
      --it;
    }
    for (; it != a.begin(); --it) {
      dp[i] = min(dp[i], dp[i - *it] + 1);
    } 
  }
  cout << dp[n] << '\n';
  while (n > 0) {
    auto it = lower_bound(a.begin(), a.end(), n);
    if (it == a.end() || *it > n) {
      --it;
    }
    for (; it != a.begin(); --it) {
      if (dp[n] == dp[n - *it] + 1) {
        cout << *it << ' ';
        n -= *it;
        break;
      }
    }
  }
  cout << '\n';
  return 0;
}
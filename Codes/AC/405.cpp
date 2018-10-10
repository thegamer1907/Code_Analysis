#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n;
string s;

int dp[2][11][11];

int solve(int i, int tight, int sum) {
  if (i == n) return sum == 10;
  int& ans = dp[tight][sum][i];
  if (ans != -1) return ans;
  ans = 0;
  if (not tight) {
    for (int j = 0; j < 10 && j + sum <= 10; ++j)
      ans += solve(i + 1, 0, sum + j);
  } else {
    int x = s[i] - '0';
    if (x + sum <= 10) ans += solve(i + 1, 1, sum + x);
    if (x > 0) {
      for (int j = 0; j < x && j + sum <= 10; ++j)
        ans += solve(i + 1, 0, sum + j);
    }
  }
  return ans;
}

int f(int x) {
  s = to_string(x);
  n = s.size();
  memset(dp, -1, sizeof dp);
  return solve(0, 1, 0);
}

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int k;
  cin >> k;

  int l = 0;
  int r = 1e9;
  int ans = 0;
  while (l <= r) {
    int m = (l + r) / 2;
    if (f(m) < k)
      l = m + 1;
    else
      r = m - 1, ans = m;
  }
  cout << ans;
}
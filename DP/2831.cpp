#include <bits/stdc++.h>

using namespace std;

const int md = (int) 1e9 + 7;

long long pow(long long a, int n) {
  if (n == 0) {
    return 1;
  }
  long long t = pow(a, n / 2);
  t = (t * t) % md;
  return n & 1 ? (t * a) % md : t;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  vector<vector<int> > div(n + 1);
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      if (i % j == 0) {
        div[i].push_back(j);
      }
    }
  }
  vector<long long> dp(n + 1, 1);
  for (int i = 1; i < k; ++i) {
    for (int j = n; j > 0; --j) {
      for (int k : div[j]) {
        dp[j] = (dp[j] + dp[k]) % md;
      }
    }
  }
  long long ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans = (ans + dp[i]) % md;
  }
  printf("%lld\n", ans * pow(pow(2LL, k - 1), md - 2) % md);
  return 0;
}
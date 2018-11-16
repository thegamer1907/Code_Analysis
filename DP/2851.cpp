#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL mod = 1e9 + 7;
LL dp[2][2001] = {0};
int main() {
  LL N, K;
  scanf("%lld%lld", &N, &K);
  dp[1][1] = {1};
  for (int _ = 0; _ < K; ++_) {
    fill(dp[_%2], dp[_%2] + 2001, 0);
    for (int m = 1; m <= N; ++m) {
      for (int i = 1; i * m <= N; ++i) (dp[_%2][i * m] += dp[_%2^1][i]) %= mod;
    }
  }
  LL ans = 0;
  for (int i = 1; i <= N; ++i) (ans += dp[K%2^1][i]) %= mod;
  printf("%lld\n",                              ans);
}

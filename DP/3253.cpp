#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;
LL pre[200010], suf[200010], A[200010];
int main() {
  map<LL, LL> cnt;
  int n, k; scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", A + i);
  }
  for (int i = 0; i < n; ++i) {
    if (A[i] % k == 0) suf[i] = cnt[A[i] / k];
    cnt[A[i]] += 1;
  }
  cnt.clear();
  for (int i = n - 1; i >= 0; --i) {
    pre[i] = cnt[A[i] * k];
    cnt[A[i]] += 1;
  }
  LL ans = 0;
  for (int i = 0; i < n; ++i) ans += pre[i] * suf[i];
  printf("%lld\n", ans);
}

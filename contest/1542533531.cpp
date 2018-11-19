#include <cstdio>
#include <iostream>
using namespace std;

typedef long long LL;
const int N = 1e5 + 5;

int n, k, a[N];
int cnt[N], lb, rb;
LL ans = 0, dp[N], _dp[N];
LL *f = dp, *g = _dp;

inline void Ins(int x) { ans += cnt[x]; cnt[x] ++; }

inline void Del(int x) { cnt[x] --; ans -= cnt[x]; }

inline void Divide(int l, int r, int L, int R) {
  if (L > R) return;
  int mid = (L + R) >> 1, pos = l;
  LL best;
  while (rb < mid) Ins(a[rb ++]);
  while (lb > l) Ins(a[-- lb]);
  while (rb > mid) Del(a[-- rb]);
  while (lb < l) Del(a[lb ++]);
  Ins(a[rb ++]);
  Del(a[lb ++]);
  best = f[lb - 1] + ans;
  while (lb <= r && lb < mid) {
    Del(a[lb ++]);
    if (best > f[lb - 1] + ans) {
      best = f[lb - 1] + ans;
      pos = lb - 1;
    }
  }
  g[mid] = best;
  Divide(l, pos, L, mid - 1);
  Divide(pos, r, mid + 1, R);
}

int main() {
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; i ++)
    scanf("%d", &a[i]), f[i] = 1e14;
  lb = rb = 1;//[lb, rb)
  for (int i = 1; i <= k; i ++) {
    Divide(0, n, 0, n);
    swap(f, g);
  }
  printf("%lld\n", f[n]);
  return 0;
}

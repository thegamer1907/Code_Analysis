#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 1; i <= n; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
#define MP make_pair
#define FI first
#define SE second
#define VI vector<int>
#define CLR(x) memset(x, 0, sizeof(x))

#define N 100010
#define M 21
#define INF (1ll<<60)

typedef long long LL;

int a[N], n;

int cnt[N];
LL calc(int l, int r) {
  static int curl = 1, curr = 0;
  static LL curs = 0;
  while (curr < r) {
    ++curr;
    curs += cnt[a[curr]];
    cnt[a[curr]]++;
  }
  while (curl > l) {
    --curl;
    curs += cnt[a[curl]];
    cnt[a[curl]]++;
  }
  while (curl < l) {
    cnt[a[curl]]--;
    curs -= cnt[a[curl]];
    ++curl;
  }
  while (curr > r) {
    cnt[a[curr]]--;
    curs -= cnt[a[curr]];
    --curr;
  }
  // printf("%d %d %I64d\n", l, r, curs);
  return curs;
}

void solve(LL *f, int l1, int r1, LL *g, int l2, int r2) {
  if (l2 > r2)
    return;
  int mid = (l2+r2)/2, minp;
  // g[mid] = INF;
  // printf("solve:%d %d %d %d\n", l1, r1, l2, r2);
  for (int i = l1; i <= min(mid-1, r1); i++) {
    LL tmp = f[i] + calc(i+1, mid);
    // if (mid == 6)
    //   printf("%d %I64d %I64d\n", f[i])
    if (g[mid] > tmp) {
      g[mid] = tmp;
      minp = i;
    }
  }
  // printf("g[%d]=%I64d\n", mid, g[mid]);
  solve(f, l1, minp, g, l2, mid-1);
  solve(f, minp, r1, g, mid+1, r2);
}

LL dp[M][N];
int main() {
#ifdef LOCAL
  freopen("in.txt", "r", stdin);
#endif
  int k;
  scanf("%d%d", &n, &k);
  FOR (i, n) {
    scanf("%d", &a[i]);
  }
  memset(dp, 0x3f, sizeof(dp));
  FOR (i, n) {
    dp[1][i] = calc(1, i);
  }
  FOR (i, k-1) {
    solve(dp[i], i, n, dp[i+1], i+1, n);
    // FOR (j, n)
      // printf("dp %d %d %I64d\n", i+1, j, dp[i+1][j]);
  }
  printf("%I64d\n", dp[k][n]);
  return 0;
}

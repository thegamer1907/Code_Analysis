#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 1; i <= n; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
#define MP make_pair
#define FI first
#define SE second
#define VI vector<int>
#define CLR(x) memset(x, 0, sizeof(x))
#define SZ(x) (x.size())


int cnt[110];
int main() {
#ifdef LOCAL
  freopen("in.txt", "r", stdin);
#endif
  int n, k;
  scanf("%d%d", &n, &k);
  FOR (i, n) {
    int tmp = 0;
    REP (j, k) {
      int s;
      scanf("%d", &s);
      tmp |= (s << j);
    }
    cnt[tmp] |= 1;
  }
  REP (i, (1<<k)) {
    REP (j, k) {
      if ((i>>j)&1)
        cnt[i] |= cnt[i^(1<<j)];
    }
    // printf("%d %d\n", i, cnt[i]);
  }
  REP (i, (1<<k)) {
    if (cnt[i] && cnt[((1<<k)-1) ^ i]) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}

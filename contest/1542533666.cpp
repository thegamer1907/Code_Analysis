#include<bits/stdc++.h>
#define int long long
#define fo(i, n) for(int i = 1; i <= (n); i ++)
#define out(x) cerr << #x << " = " << x << "\n"
#define type(x) __typeof((x).begin())
#define foreach(it, x) for(type(x) it = (x).begin(); it != (x).end(); ++ it)
using namespace std;
//by piano
template<typename tp> inline void read(tp &x) {
  x = 0; char c = getchar(); bool f = 0;
  for(; c < '0' || c > '9'; f |= (c == '-'), c = getchar());
  for(; c >= '0' && c <= '9'; x = (x << 3) + (x << 1) + c - '0', c = getchar());
  if(f) x = -x;
}
template<typename tp> inline void arr(tp *a, int n) {
  for(int i = 1; i <= n; i ++)
    cout << a[i] << " ";
  puts("");
}
const int N = 1e5 + 233, M = 21;
int n, m, a[N], f[M][N], cnt[N], lo, ro, now = 0;
inline void U(int pos, int f) {
  if(f == 1) now += cnt[a[pos]] ++;
  else now -= -- cnt[a[pos]];
}

inline void cdq(int ql, int qr, int l, int r, int *g, int *f) {
  if(ql > qr) return ;
  int rm = ql + (qr - ql) / 2;
  int lcan = min(r, rm);
  while(lo < lcan) U(lo ++, -1);
  while(lo > lcan) U(-- lo, 1);
  while(ro < rm) U(++ ro, 1);
  while(ro > rm) U(ro --, -1);
  for(int i = lcan; i >= l; i --) {
    if(g[i - 1] + now < f[rm])
      f[rm] = g[i - 1] + now, lcan = i;
    U(-- lo, 1);
  }
  cdq(ql, rm - 1, l, lcan, g, f);
  cdq(rm + 1, qr, lcan, r, g, f);
}

main(void) {
  lo = 1; ro = 0;
  read(n); read(m);
  for(int i = 1; i <= n; i ++)
    read(a[i]);
  memset(f, 38, sizeof f);
  f[0][0] = 0;
  for(int i = 1; i <= m; i ++) {
    cdq(1, n, 1, n, f[i - 1], f[i]);
  }
  cout << f[m][n] << "\n";
}

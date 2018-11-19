#include <bits/stdc++.h>

using namespace std;
using namespace placeholders;

template <class T> void mini(T &l, T r) {l = min(l, r);}
template <class T> void maxi(T &l, T r) {l = max(l, r);}

template <class TH> void _dbg(const char *sdbg, TH h) {
  cerr << sdbg << "=" << h << "\n";
}
template <class TH, class ...TA> void _dbg(const char *sdbg, TH h, TA ...a) {
  while (*sdbg != ',') cerr << *sdbg++; cerr << "=" << h << ","; _dbg(sdbg + 1, a...);
}
template <class T> ostream &operator<<(ostream &os, vector <T> v) {
  os << "[";
  for (auto vv : v) os << vv << ",";
  return os << "]";
}
template <class L, class R> ostream &operator<<(ostream &os, pair <L, R> p) {
  return os << "(" << p.first << "," << p.second << ")";
}

#define eput(...) //_dbg(#__VA_ARGS__, __VA_ARGS__)

using llint = long long;

const int N = 1e5 + 10, K = 25;
const llint inf = (llint)1e18 + 10;

int n, k;
int a[N];
llint dp[K][N];
int cnt[N];

void go(llint &pairs, int fl, int l, int r) {
  if (l > r) return;
  if (fl == 1) {
    for (int i = l; i <= r; ++i) {
      pairs += cnt[a[i]];
      cnt[a[i]]++;
    }
  } else {
    for (int i = l; i <= r; ++i) {
      --cnt[a[i]];
      pairs -= cnt[a[i]];
    }
    
  }
}

void go(llint &pairs, int l, int r, int x, int y) {
  if (l >= x) {
    go(pairs, +1, x, l - 1);
    if (r <= y)
      go(pairs, +1, r + 1, y);
    else
      go(pairs, -1, y + 1, r);
  } else {
    if (r <= y)
      go(pairs, +1, r + 1, y);
    else
      go(pairs, -1, y + 1, r);
    go(pairs, -1, l, x - 1);
  }
}

void solve(int x, int l, int r, int bl, int br, llint prs) {
  if (l > r) return;

  int md = (l + r) >> 1;
  int ll = min(md, bl);
  int rr = min(md, br);
  //eput(x, l, r, bl, br, ll, rr, md, prs);
  //for (int i = 1; i < 10; ++i) eput(cnt[i]);
  llint pairs = prs;
  go(pairs, bl, r, ll, md);
  llint mn = pairs + dp[x - 1][ll - 1];
  int who = ll;
  for (int i = ll; i <= rr - 1; ++i) {
    cnt[a[i]]--;
    pairs -= cnt[a[i]];
    llint tmp = pairs + dp[x - 1][i];
    if (mn > tmp) {
      mn = tmp;
      who = i + 1;
    }
  }
  dp[x][md] = mn;
  go(pairs, rr, md, bl, md - 1);
  solve(x, l, md - 1, bl, who, pairs);
  go(pairs, bl, md - 1, who, r);
  solve(x, md + 1, r, who, br, pairs);
  go(pairs, who, r, bl, r);
}

void run() {
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; ++i) {
    scanf("%d", a + i);
  }

  fill_n(dp[0], n + 1, inf);
  dp[0][0] = 0;
  for (int j = 0; j <= n; ++j) eput(j, dp[0][j]);

  for (int i = 1; i <= k; ++i) {
    int md = (1 + n) / 2;
    fill_n(cnt, n + 1, 0);
    llint pairs = 0;
    go(pairs, +1, 1, n);
    //eput(pairs);
    //for (int i = 1; i < 10; ++i) eput(cnt[i]);
    solve(i, 1, n, 1, n, pairs);
    eput(pairs);
    //for (int i = 1; i < 10; ++i) eput(cnt[i]);
    //for (int j = 0; j <= n; ++j) eput(i, j, dp[i][j]);
  }

  printf("%lld\n", dp[k][n]);
}

int main() {
  run();
  return 0;
}

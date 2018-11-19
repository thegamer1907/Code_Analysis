#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define LINF 0x3f3f3f3f3f3f3f3fLL

const int N = 100010;
const int M = 21;

int n, k;
int v[N];
int cnt[N];

int lft, rgt;
ll foo = 0;

ll pd[2][N];

inline void getVal(int x, int op) {
  foo -= (((cnt[x] * (cnt[x] - 1LL)) / 2LL));
  cnt[x] += op;
  foo += (((cnt[x] * (cnt[x] - 1LL)) / 2LL));
}


void divideAndConquer(int lev, int bl, int br, int l, int r) {
  if(l > r) return;
  int md = (l + r) >> 1;
  int idx = -1;
  for(int i = min(md, br); i >= max(1, bl); --i) {
    while(rgt < md) getVal(v[++rgt], 1);
    while(rgt > md) getVal(v[rgt--], -1);
    while(lft < i) getVal(v[lft++], -1);
    while(lft > i) getVal(v[--lft], 1);
    if(pd[lev & 1][md] > pd[(lev - 1) & 1][i - 1] + foo) {
      pd[lev & 1][md] = pd[(lev - 1) & 1][i - 1] + foo;
      idx = i;
    }
  }
  divideAndConquer(lev, bl, idx, l, md - 1);
  divideAndConquer(lev, idx, br, md + 1, r);
}

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; ++i) scanf("%d", v + i);
  for(int i = 0; i <= n; ++i) for(int j = 0; j < 2; ++j) pd[j][i] = LINF;
  pd[0][0] = 0;
  lft = 1;
  rgt = 0;
  for(int i = 1; i <= k; ++i) {
    for(int j = 0; j <= n; ++j) pd[i & 1][j] = LINF;
    divideAndConquer(i, 1, n, 1, n);
  }
  printf("%lld\n", pd[k & 1][n]);
  return 0;
}
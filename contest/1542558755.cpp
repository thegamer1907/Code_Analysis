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

struct node {
  int bl, br, l, r;
  node(){};
  node(int _bl, int _br, int _l, int _r) {
    bl = _bl;
    br = _br;
    l = _l;
    r = _r;
  }
};

inline void getVal(int x, int op) {
  foo -= (((cnt[x] * (cnt[x] - 1LL)) / 2LL));
  cnt[x] += op;
  foo += (((cnt[x] * (cnt[x] - 1LL)) / 2LL));
}

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; ++i) scanf("%d", v + i);
  for(int i = 0; i <= n; ++i) for(int j = 0; j < 2; ++j) pd[j][i] = LINF;
  pd[0][0] = 0;
  lft = 1;
  rgt = 0;
  stack< node > q;
  for(int lev = 1; lev <= k; ++lev) {
    for(int j = 0; j <= n; ++j) pd[lev & 1][j] = LINF;
    q.push(node(1, n, 1, n));
    while(!q.empty()) {
      node at = q.top(); q.pop();
      int bl = at.bl, br = at.br, l = at.l, r = at.r;
      if(l > r) continue;
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
      q.push(node(bl, idx, l, md - 1));
      q.push(node(idx, br, md + 1, r));
    }
    
  }
  printf("%lld\n", pd[k & 1][n]);
  return 0;
}
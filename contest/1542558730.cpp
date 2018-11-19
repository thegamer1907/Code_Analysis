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
  if(op == 1) {
    foo += (ll)cnt[x];
    cnt[x]++;
  }
  else {
    cnt[x]--;
    foo -= (ll)cnt[x];
  }
}

node st[N * 10];
int szSt = 0;

inline node peek() {
  return st[--szSt];
}

inline void push(node no) {
  st[szSt++] = no;
}

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; ++i) scanf("%d", v + i);
  for(int i = 0; i <= n; ++i) for(int j = 0; j < 2; ++j) pd[j][i] = LINF;
  pd[0][0] = 0;
  lft = 1;
  rgt = 0;  
  for(int lev = 1; lev <= k; ++lev) {
    push(node(1, n, 1, n));
    while(szSt) {
      node at = peek();
      int bl = at.bl, br = at.br, l = at.l, r = at.r;
      if(l > r) continue;
      int md = (l + r) >> 1;
      int idx = -1;
      pd[lev & 1][md] = LINF;
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
      push(node(bl, idx, l, md - 1));
      push(node(idx, br, md + 1, r));
    }
    
  }
  printf("%lld\n", pd[k & 1][n]);
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for(int i=(s);(i)<(int)(e);++(i))
#define REP(i,e) FOR(i,0,e)
#define each(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define ppb(x) pop_back(x)
#define mp make_pair
#define mt make_tuple
#define t0(t) get<0>((t))
#define t1(t) get<1>((t))
#define t2(t) get<2>((t))

typedef long long ll;
const int M = 1e5;
ll n, m, kk;
ll p[M];

int main() {
  fscanf(stdin, "%lld%lld%lld ", &n, &m, &kk);
  REP(i,m) {
    fscanf(stdin, "%lld ", p+i);
    p[i]--;
  }
  int res = 0, i = 0;
  ll s = 0, k = kk;
  while (i < (int)m) {
    ll t = 0;
    while (p[i] - s < k) {t++, i++;}
    if (t) {
      s += t;
      res++;
    } else {
      k = kk*((p[i]-s)/kk + 1);
    }
  }
  fprintf(stdout, "%d\n", res);
  return 0;
}
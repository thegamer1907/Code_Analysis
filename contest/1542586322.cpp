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

bool in(int a, int l, int r) {
  return a > l && a < r;
}

void run() {
  int h, m, s, t1, t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  if (h == 12) h = 0;
  if (t1 == 12) t1 = 0;
  if (t2 == 12) t2 = 0;
  int angs = 86400 / 60;
  int angm = angs;
  int angh = 86400 / 12;
  int nws = angs * s;
  int nwm = angm * m + angm * s / 60;
  int nwh = angh * h + angh * m / 60 + angh * s / 3600;
  eput(nws, nwm, nwh);
  int nwt1 = angh * t1;
  int nwt2 = angh * t2;
  vector <int> v{nws, nwm, nwh};
  sort(v.begin(), v.end());
  eput(v);
  if (nwt1 > nwt2) swap(nwt1, nwt2);
  eput(nwt1, nwt2);
  bool ok = 0;
  for (int i = -1; i < 3; ++i) {
    int l = i == -1 ? -1 : v[i];
    int r = i + 1 == 3 ? 86401 : v[i + 1];
    if (in(nwt1, l, r) && in(nwt2, l, r)) {
      ok = 1;
    }
  }
  if (in(nwt1, -1, v[0]) && in(nwt2, v.back(), 86401)) {
    ok = 1;
  }
  puts(ok ? "YES" : "NO");
}

int main() {
  run();
  return 0;
}

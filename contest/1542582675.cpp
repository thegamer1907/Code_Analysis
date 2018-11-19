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

const int N = 1e5 + 10;

int n, k;
int fl[N][4];
int cnt[N];

int get(int i) {
  int ret = 0;
  for (int j = 0; j < k; ++j) {
    ret = ret * 2 + fl[i][j];
  }
  return ret;
}

void run() {
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < k; ++j) {
      scanf("%d", fl[i] + j);
    }
    eput(get(i));
    cnt[get(i)]++;
  }

  bool ok = 0;
  for (int i = 0; i < (1 << k); ++i) {
    for (int j = 0; j < (1 << k); ++j) {
      if ((i & j) == 0 && cnt[i] > 0 && cnt[j] > 0)
        ok = 1;
        
    }
  }
  puts(ok ? "YES" : "NO");
}

int main() {
  run();
  return 0;
}

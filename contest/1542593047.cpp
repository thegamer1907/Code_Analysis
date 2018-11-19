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

#define eput(...) _dbg(#__VA_ARGS__, __VA_ARGS__)

const int N = 110;

int n;
char mat[10];
char s[N][10];

void run() {
  scanf("%s", mat);
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%s", s[i]);
  }

  bool ok = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      char tmp[20];
      strcpy(tmp, s[i]);
      strcat(tmp, s[j]);
      if (strstr(tmp, mat) != 0) ok = 1;
    }
  }
  puts(ok ? "YES" : "NO");
}

int main() {
  run();
  return 0;
}

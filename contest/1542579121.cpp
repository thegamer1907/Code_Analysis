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

const int N = 210, H = 15, L = 32768;

struct String {
  char hd[20];
  char tl[20];
  int len;
  bitset <L> bt[15];
  String() {}
  String(const char *t) {
    len = strlen(t);
    if (len < H) {
      strcpy(hd, t);
    } else {
      strncpy(hd, t, H);
      strcpy(tl, t + len - H);
    }
  }
  void getbt(const char *t) {
    for (int l = 1; l <= H && l <= len; ++l) {
      for (int i = 0; i + l - 1 < len; ++i) {
        int t1 = 0;
        for (int x = i; x < i + l; ++x) {
          t1 = t1 * 2 + t[x] - '0';
        }
        bt[l - 1][t1] = 1;
      }
    }

  }
} s[N];

string get(String &a) {
  if (a.len < H) return a.hd;
  else return string(a.hd) + string(a.tl);
}

String cat(String &a, String &b) {
  string t1 = get(a);
  string t2 = get(b);
  string tt = t1 + t2;
  String ret(tt.c_str());
  ret.len = a.len + b.len;
  auto &bt = ret.bt;
  for (int i = 0; i < H; ++i) bt[i] = a.bt[i] | b.bt[i];
  int l = t1.length();
  for (int ll = 1; ll <= H; ++ll) {
    for (int i = max(0, l - ll); i < l && i + ll - 1 < tt.length(); ++i) {
      int tmp = 0;
      for (int x = i; x < i + ll; ++x) {
        tmp = tmp * 2 + tt[x] - '0';
      }
      bt[ll - 1][tmp] = 1;
    }
  }
  return ret;
}

int n;

void run() {
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    char tmp[N];
    scanf("%s", tmp);
    s[i] = String(tmp);
    s[i].getbt(tmp);
    for (int j = 0; j < 2; ++j) {
      eput(i, j, s[i].bt[j]);
    }
  }
  int m;
  scanf("%d", &m);
  for (int i = 1; i <= m; ++i) {
    int x, y;
    scanf("%d%d", &x, &y);
    s[n + i] = cat(s[x], s[y]);
    for (int j = 0; j < 2; ++j) {
      eput(i, j, s[n + i].bt[j]);
    }

    int ans = 0;
    auto &bt = s[n + i].bt;
    for (int j = H; j >= 1; --j) {
      if (bt[j - 1].count() == (1 << j)) {
        ans = j;
        break;
      }
    }
    printf("%d\n", ans);
  }
}

int main() {
  run();
  return 0;
}

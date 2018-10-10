#include <cstdio>
#include <algorithm>

#define ll long long
#define db double
#define ull unsigned long long
#define uint unsigned int
#define FIO ""
#define dbug(...) fprintf(stderr, __VA_ARGS__)

template <typename Y> inline bool updmin(Y &a, Y b){if (a > b) {a = b; return 1;} return 0;}
template <typename Y> inline bool updmax(Y &a, Y b){if (a < b) {a = b; return 1;} return 0;}
template <typename Y> inline Y abs(Y a){if (a < 0) a = -a; return a;}
template <typename Y> inline Y sqr(Y a){return a * a;}

typedef std::pair<int, int> par;
#define fx first
#define fy second
#define mpar std::make_pair
#define pb push_back

int read() {
  int w = 1, q = 0, ch = ' ';
  for (; ch < '0' || ch > '9'; ch = getchar()) if (ch == '-') w = -1;
  for (; ch >= '0' && ch <= '9'; ch = getchar()) q = q * 10 + ch - 48;
  return q * w;
}

inline void FileIO(){freopen(FIO".in", "r", stdin); freopen(FIO".out", "w", stdout);}

int n, a;

int main() {
  n = read();
  int t = 1e9 + 5, p = 0;
  for (int i = 1; i <= n; i++) {
    a = read();
    int r = a / n, c = n * r + i;
    a %= n;
    if (a >= i) {
      c += n;
    }
    if (updmin(t, c)) {
      p = i;
    }
  }
  printf("%d\n", p);
  return 0;
}

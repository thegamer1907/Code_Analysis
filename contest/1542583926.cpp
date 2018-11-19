#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define nfor(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define fore(i, l, r) for (int i = int(l); i < int(r); i++)
#define correct(x, y, n, m) (0 <= (x) && (x) < (n) && 0 <= (y) && (y) < (m))
#define all(a) (a).begin(), (a).end()
#define sz(a) int((a).size())
#define pb(a) push_back(a)
#define mp(x, y) make_pair((x), (y))
#define x first
#define y second

using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pti;

template<typename X> inline X abs(const X& a) { return a < 0? -a: a; }
template<typename X> inline X sqr(const X& a) { return a * a; }

template<typename A, typename B> inline ostream& operator<< (ostream& out, const pair<A, B>& p) { return out << "(" << p.x << ", " << p.y << ")"; }
template<typename T> inline ostream& operator<< (ostream& out, const vector<T>& a) { out << "["; forn(i, sz(a)) { if (i) out << ','; out << ' ' << a[i]; } return out << " ]"; }
template<typename T> inline ostream& operator<< (ostream& out, const set<T>& a) { return out << vector<T>(all(a)); }
template<typename X, typename Y> inline ostream& operator<< (ostream& out, const map<X, Y>& a) { return out << vector<pair<X, Y>>(all(a)); }
template<typename T> inline ostream& operator<< (ostream& out, const pair<T*, int>& a) { return out << vector<T>(a.x, a.x + a.y); }

inline ld gett() { return ld(clock()) / CLOCKS_PER_SEC; }

const int INF = int(1e9);
const li INF64 = li(1e18);
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

#ifdef SU1
#define GEN
#ifndef GEN
#define LOG
#endif
#endif

int n, k;
int a[20];

bool read() {
#ifdef GEN
  n = 100000;
  k = 4;
  forn(i, 4) a[i] = n / 4;
  return true;
#endif
  if (!(cin >> n >> k)) return false;
  memset(a, 0, sizeof(a));
  forn(i, n) {
    int x = 0;
    forn(j, k) {
      int y;
      assert(scanf("%d", &y) == 1);
      y = 1 - y;
      x |= y << j;
    }
    a[x]++;
  }
  return true;
}

int cnt[4];

bool good(int tot) {
  if (tot == 0) return false;
  forn(i, k)
    if (2 * cnt[i] < tot)
      return false;
#ifdef LOG
  clog << "tot: " << tot << " cnt: " << mp(cnt, k) << endl;
#endif
  return true;
}

inline void inc(int mask, int val) {
  forn(i, k)
    if (mask & (1 << i))
      cnt[i] += val;
}

bool rec(int tot) {
  if (good(tot)) return true;
  if (tot >= 6) return false;

  forn(i, 16)
    if (a[i] > 0) {
      inc(i, +1);
      a[i]--;
      if (rec(tot + 1)) return true;
      a[i]++;
      inc(i, -1);
    }
  return false;
}

void solve() {
  memset(cnt, 0, sizeof(cnt));
  auto ans = rec(0);
  puts(ans ? "YES" : "NO");
}

int main() {
#ifdef SU1
  assert(freopen("input.txt", "rt", stdin));
  //assert(freopen("output.txt", "wt", stdout));
#endif

  cout << setprecision(10) << fixed;
  cerr << setprecision(5) << fixed;

  while (read()) {
    ld stime = gett();
    solve();
#ifdef SU1
    cerr << "Time: " << gett() - stime << endl;
#endif
    //break;
  }

  return 0;
}

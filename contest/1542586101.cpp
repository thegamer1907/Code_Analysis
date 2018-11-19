/// Gia Thuan Lam
#include <bits/stdc++.h>
using namespace std;

/// random generator
random_device rd;
mt19937 mt(rd());

/// data types
#define llint long long
#define double long double

/// standard instruction
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define REP(i, n) for(int i = 0; i < n; ++i)
#define ERR(n) cout << setprecision(n) << fixed;

/// debugging tools
template<typename T>
  void print(T a) {
    cout << a << "\n";
  }
template<typename T, typename... S>
  void print(T a, S... o) {
    cout << a << " ", print(o...);
  }

/// main program
void body();

int main() {
#ifdef LOCAL_PROJECT
  freopen("input", "r", stdin);
  /// freopen("output", "w", stdout);
#endif
  body();
#ifdef LOCAL_PROJECT
  fclose(stdin);
  /// fclose(stdout);
#endif
}

///customary parameters
const int N = 2e5 + 3;

bool between(double l, double r, double x) {
  return (x >= l && x <= r);
}

bool same(double l, double r, double a, double b) {
  if (between(l, r, a)) {
    if (between(l, r, b)) {
      return 1;
    } else {
      return 0;
    }
  }
}

void body() {
  double h, m, S, a, b;
  cin >> h >> m >> S >> a >> b;
  if (a == 12) a = 0;
  if (b == 12) b = 0;
  a *= 5; b *= 5;
  if (h == 12) h = 0;
  h *= 5;
  if (m + S > 0) h += 0.5;
  if (S > 0) m += 0.5;
  set<double> s({h, m, S});
  if (s.size() < 2) {
    cout << "YES"; return;
  }
  vector<double> v(begin(s), end(s));
  int one = 0;
  for (int i = 0; i + 1 < v.size(); ++i) {
    if (between(v[i], v[i+1], a) && between(v[i], v[i+1], b)) {
      cout << "YES"; return;
    }
    if (between(v[i], v[i+1], a) || between(v[i], v[i+1], b)) {
      one = 1;
    }
  }
  if (one == 0) {
    cout << "YES"; return;
  }
  cout << "NO"; return;
}


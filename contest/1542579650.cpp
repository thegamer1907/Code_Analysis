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

int n, m, a[N];

void body() {
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    int s = 0, b;
    REP(j, m) {
      cin >> b;
      s |= b << j;
    }
    a[s] += 1;
  }
  for (int i = 0; i < (1 << m); ++i)
  for (int j = 0; j < (1 << m); ++j)
    if (a[i] > 0 && a[j] > 0 && (i&j) == 0) {
      cout << "YES\n";return;
    }
  cout <<"NO\n"; return;

}


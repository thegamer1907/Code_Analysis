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

void body() {
  string pass, s;
  int n;
  cin >> pass;
  cin >> n;
  vector<int> l, r;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    if (s == pass) {
      cout << "YES"; return;
    }
    if (s[1] == pass[0]) {
      l.push_back(i);
    }
    if (s[0] == pass[1]) {
      r.push_back(i);
    }
  }

  if (l.size() > 0 && r.size() > 0) {
    cout << "YES"; return;
  }
  cout << "NO"; return;
}

